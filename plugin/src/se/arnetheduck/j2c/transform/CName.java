package se.arnetheduck.j2c.transform;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.WeakHashMap;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import org.eclipse.jdt.core.dom.IBinding;
import org.eclipse.jdt.core.dom.IMethodBinding;
import org.eclipse.jdt.core.dom.IPackageBinding;
import org.eclipse.jdt.core.dom.ITypeBinding;
import org.eclipse.jdt.core.dom.IVariableBinding;

public class CName {
	/**
	 * Name of fake static initializer - method that intializes static fields
	 * and runs static initializer blocks
	 */
	public static final String STATIC_INIT = "clinit";

	/**
	 * Name of fake instance initializer - method that initializes fields and
	 * runs instance initializer blocks
	 */
	public static final String INSTANCE_INIT = "init";

	/**
	 * Name of fake constructor containing the body of the Java constructor,
	 * necessary to simulate Java initialization order
	 */
	public static final String CTOR = "ctor";

	/** Virtual method that returns the dynamic class of the current object */
	public static final String GET_CLASS = "getClass0";

	/**
	 * The default-init constructor takes care of the first phase of Java object
	 * initialization, namely of calling clinit to make sure the class and all
	 * its bases are initialized.
	 *
	 * See §12.4.1 and §12.5
	 */
	public static final String DEFAULT_INIT_TAG = "default_init_tag";

	/**
	 * Cast function that throws an appropriate exception if a cast fails
	 */
	public static final String JAVA_CAST = "java_cast";

	/**
	 * Null pointer check function - throws NPE if the passed pointer is null
	 */
	public static final String NPC = "npc";

	/** C++ keywords + special method names - java keywords */
	public static Collection<String> keywords = Arrays.asList("alignas",
			"alignof", "and", "and_eq", "asm", "auto", "bitand", "bitor",
			"bool", "char16_t", "char32_t", "compl", "const", "constexpr",
			"const_cast", "decltype", "delete", "dynamic_cast", "explicit",
			"export", "extern", "friend", "goto", "inline", "mutable",
			"namespace", "noexcept", "not", "not_eq", "nullptr", "operator",
			"or", "or_eq", "register", "reinterpret_cast", "signed", "sizeof",
			"static_assert", "static_cast", "struct", "template",
			"thread_local", "typedef", "typeid", "typename", "union",
			"unsigned", "using", "virtual", "wchar_t", "xor", "xor_eq", CTOR,
			INSTANCE_INIT, STATIC_INIT, GET_CLASS, DEFAULT_INIT_TAG, JAVA_CAST,
			"int8_t", "int16_t", "int32_t", "int64_t", "char16_t", "NULL",
			"npc", "EOF", "class_");

	public static String qualified(ITypeBinding tb, boolean global) {
		IPackageBinding pkg = TransformUtil.elementPackage(tb);
		return (global && !tb.isPrimitive() ? "::" : "")
				+ (pkg == null || pkg.getName().isEmpty() ? of(tb) : (of(pkg)
						+ "." + of(tb))).replace(".", "::");
	}

	public static String relative(ITypeBinding tb, ITypeBinding root,
			boolean global) {
		if (!samePackage(tb, root)) {
			return qualified(tb, global);
		}

		String tbn = of(tb);
		if (tbn.equals(Object.class.getSimpleName())
				&& !TransformUtil.same(tb, Object.class)) {
			// Intefaces have null superclass but inherit (conceptually) from
			// Object
			return qualified(tb, global);
		}

		// Clash between method and type name
		for (IMethodBinding mb : root.getDeclaredMethods()) {
			if (!mb.isConstructor() && of(mb).equals(tbn)) {
				return qualified(tb, global);
			}
		}

		// Clash between field and type name
		for (IVariableBinding vb : root.getDeclaredFields()) {
			if (of(vb).equals(tbn)) {
				return qualified(tb, global);
			}
		}

		// In C++, unqualified names in a class are looked up in base
		// classes before the own namespace
		List<ITypeBinding> bases = TypeUtil.allBases(root, null);
		for (ITypeBinding sb : bases) {
			if (tb.getErasure().isEqualTo(sb.getErasure())) {
				return tbn;
			}

			if (of(sb).equals(tbn)) {
				return qualified(tb, global);
			}
		}

		return tbn;
	}

	public static boolean samePackage(ITypeBinding tb0, ITypeBinding tb1) {
		IPackageBinding p0 = TransformUtil.elementPackage(tb0);
		IPackageBinding p1 = TransformUtil.elementPackage(tb1);
		if (p0 == null) {
			return p1 == null;
		}

		return p1 != null && p0.isEqualTo(p1);
	}

	private static class RelativeBinding {
		public final IBinding binding;
		public final ITypeBinding relativeTo;
		
		public RelativeBinding(IBinding binding, ITypeBinding relativeTo) {
			assert binding != null;
			assert relativeTo != null;
			this.binding = binding;
			this.relativeTo = relativeTo;
		}
		
		@Override
		public boolean equals(Object other) {
			return other != null && other instanceof RelativeBinding &&
				   ((RelativeBinding) other).binding == binding &&
				   ((RelativeBinding) other).relativeTo == relativeTo;
		}
		
		@Override
		public int hashCode() {
			return (binding != null ? binding.hashCode() : 0) ^ 
				   (relativeTo != null ? relativeTo.hashCode() : 0);
		}
	}
	
	private static Pattern bin = Pattern.compile("\\$\\d+");
	private static Map<IBinding, String> cache = Collections
			.synchronizedMap(new WeakHashMap<IBinding, String>());
	// We need a separate cache for variables that might be closed over.
	private static Map<RelativeBinding, String> varCache = Collections
			.synchronizedMap(new WeakHashMap<RelativeBinding, String>());	

	public static String of(ITypeBinding tb) {
		String name = cache.get(tb);
		if (name != null) {
			return name;
		}

		ITypeBinding tbe = tb.getErasure();
		if (tb.isArray()) {
			name = of(tb.getComponentType()) + "Array";
		} else if (tb.isPrimitive()) {
			name = TransformUtil.primitive(tb.getName());
		} else if (tbe.isLocal()) {
			StringBuilder ret = new StringBuilder();

			Matcher match = bin.matcher(tbe.getBinaryName());
			String sep = "";

			if (tbe.getDeclaringClass() != null) {
				ret.append(of(tbe.getDeclaringClass()));
				sep = "_";
			}

			if (tbe.getDeclaringMethod() != null
					&& tbe.getDeclaringMethod().getName().length() > 0) {
				ret.append(sep + tbe.getDeclaringMethod().getName());
				sep = "_";
			}

			if (tbe.getName() != null && tbe.getName().length() > 0) {
				ret.append(sep + tbe.getName());
				sep = "_";
			}

			while (match.find()) {
				ret.append(match.group(0).replaceAll("\\$", "_"));
			}

			name = ret.toString();
		} else if (tbe.isNested()) {
			name = of(tbe.getDeclaringClass()) + "_" + tbe.getName();
		} else {
			name = keywords(tbe.getName());
		}

		cache.put(tb, name);
		cache.put(tbe, name);

		return name;
	}

	public static String of(IMethodBinding mb) {
		String name = cache.get(mb);
		if (name != null) {
			return name;
		}

		// private methods mess up using statements that import methods
		// from base classes
		name = CName.keywords(mb.getName());

		IMethodBinding lastOverride = couldOverrideDefault(mb, name);
		if (lastOverride != null) {
			name = of(lastOverride.getDeclaringClass()) + "_" + name;
		}

		// Methods can have the same name as the constructor without being a
		// constructor!
		while (!mb.isConstructor() && hasName(mb.getDeclaringClass(), name)) {
			name = name + "_";
		}

		cache.put(mb, name);
		cache.put(mb.getMethodDeclaration(), name);

		return name;
	}

	private static boolean hasName(ITypeBinding tb, String ret) {
		if (tb.getName().equals(ret)) {
			return true;
		}

		if (tb.getSuperclass() != null && hasName(tb.getSuperclass(), ret)) {
			return true;
		}

		for (ITypeBinding ib : tb.getInterfaces()) {
			if (hasName(ib, ret)) {
				return true;
			}
		}

		return false;
	}

	/**
	 * In Java, if a method has the same name as a package-private method in a
	 * base class, it will not override the base class member. In C++, we have
	 * nothing of the sort so we have to rename the non-overriding method
	 */
	private static IMethodBinding couldOverrideDefault(IMethodBinding mb,
			String ret) {
		ITypeBinding tb = mb.getDeclaringClass();
		if (tb != null) {
			IMethodBinding last = mb;
			for (ITypeBinding tbx = tb.getSuperclass(); tbx != null; tbx = tbx
					.getSuperclass()) {
				boolean samePackage = samePackage(tb, tbx);

				for (IMethodBinding mbx : tbx.getDeclaredMethods()) {
					if (!samePackage
							&& TransformUtil.isDefault(mbx.getModifiers())
							&& mbx.getName().equals(mb.getName())
							&& TransformUtil.sameParameters(mb, mbx, true)) {
						return last;
					}

					if (last.overrides(mbx)) {
						// This will give the final name of the method
						last = mbx;
					}
				}
			}
		}

		return null;
	}

	/**
	 * Does the same thing as {@link #of(IVariableBinding)} but for the purposes
	 * of removing field/method name collisions, looks for conflicts in the
	 * given type binding (i.e. class). This is needed when handling closed over
	 * variables which have the original definition in one class, but will be 
	 * instantiated in a separate class that may have a method with the same
	 * name:
	 * 
	 * final Object o = ...;
	 * return new Thing() {
	 *   public Object o() { return o; }
	 * }
	 */
	public static String of(IVariableBinding vb, ITypeBinding relativeTo) {
		String name = varCache.get(new RelativeBinding(vb, relativeTo));
		if (name != null) {
			return name;
		}

		name = keywords(vb.getName());

		if (relativeTo != null) {
			// Find all methods up the inheritance hierarchy.
			ArrayList<IMethodBinding> allMethods = new ArrayList<IMethodBinding>();
			ITypeBinding cursor = relativeTo;
			while (cursor != null) {
				allMethods.addAll(Arrays.asList(cursor.getDeclaredMethods()));
				cursor = cursor.getSuperclass();
			}
			IMethodBinding[] methods = relativeTo.getDeclaredMethods();
			outer: for (;;) {
				for (IMethodBinding mb : allMethods) {
					if (of(mb).equals(name)) {
						// Methods and variables can have the same name so we
						// postfix the variable
						name = name + "_";
						continue outer;
					}
				}

				break;
			}
		}
		
		varCache.put(new RelativeBinding(vb, relativeTo), name);
		varCache.put(new RelativeBinding(vb.getVariableDeclaration(), relativeTo), name);

		return name;
	}
	
	/**
	 * Formats a variable name appropriately, with a cache for performance and
	 * addition of trailing underscores to avoid field/method name conflicts. 
	 */
	public static String of(IVariableBinding vb) {
		return of(vb, vb.getDeclaringClass());
	}

	public static String of(IPackageBinding pb) {
		String[] n = pb.getNameComponents();
		StringBuilder ret = new StringBuilder();
		String sep = "";
		for (String element : n) {
			ret.append(sep);
			sep = ".";
			ret.append(CName.keywords(element));
		}

		return ret.toString();
	}

	public static String packageOf(ITypeBinding tb) {
		IPackageBinding pkg = TransformUtil.elementPackage(tb);
		return pkg == null ? "" : of(pkg);
	}

	/** Filter out C++ keywords and other reserved names */
	public static String keywords(String name) {
		if (name.startsWith("__")) {
			name = "j" + name;
		}

		if (name.endsWith("Array")) {
			String n = name;
			String suffix = "";
			while (n.endsWith("Array")) {
				suffix += "_";
				n = n.substring(0, n.length() - "Array".length());
			}

			return name + suffix;
		}

		if (keywords.contains(name)) {
			return name + "_";
		}

		return name;
	}
}
