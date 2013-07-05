// Generated from /runtime/java/lang/Class.java
#include <java/lang/Class.hpp>

#include <avian/AnnotationInvocationHandler.hpp>
#include <avian/ClassAddendum.hpp>
#include <avian/Classes.hpp>
#include <avian/SystemClassLoader.hpp>
#include <avian/VMClass.hpp>
#include <avian/VMField.hpp>
#include <avian/VMMethod.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/AssertionError.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Error.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/NoSuchFieldException.hpp>
#include <java/lang/NoSuchMethodException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Package.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <java/lang/annotation/Annotation.hpp>
#include <java/lang/reflect/AccessibleObject.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <java/lang/reflect/Constructor.hpp>
#include <java/lang/reflect/Field.hpp>
#include <java/lang/reflect/InvocationTargetException.hpp>
#include <java/lang/reflect/Member.hpp>
#include <java/lang/reflect/Method.hpp>
#include <java/lang/reflect/Modifier.hpp>
#include <java/lang/reflect/Proxy.hpp>
#include <java/lang/reflect/Type.hpp>
#include <java/net/URL.hpp>
#include <java/security/AllPermission.hpp>
#include <java/security/Permission.hpp>
#include <java/security/Permissions.hpp>
#include <java/security/ProtectionDomain.hpp>
#include <java/util/ArrayList.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace avian
{
typedef ::SubArray< ::avian::VMField, ::java::lang::ObjectArray > VMFieldArray;
typedef ::SubArray< ::avian::VMMethod, ::java::lang::ObjectArray > VMMethodArray;
} // avian

namespace java
{
    namespace lang
    {
        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::Type, ::java::lang::ObjectArray > TypeArray;
        } // reflect
typedef ::SubArray< ::java::lang::Class, ObjectArray, ::java::lang::reflect::AnnotatedElementArray, ::java::lang::reflect::TypeArray > ClassArray;

        namespace annotation
        {
typedef ::SubArray< ::java::lang::annotation::Annotation, ::java::lang::ObjectArray > AnnotationArray;
        } // annotation

        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AccessibleObject, ::java::lang::ObjectArray, AnnotatedElementArray > AccessibleObjectArray;
typedef ::SubArray< ::java::lang::reflect::Member, ::java::lang::ObjectArray > MemberArray;
typedef ::SubArray< ::java::lang::reflect::Constructor, AccessibleObjectArray, MemberArray > ConstructorArray;
typedef ::SubArray< ::java::lang::reflect::Field, AccessibleObjectArray > FieldArray;
typedef ::SubArray< ::java::lang::reflect::Method, AccessibleObjectArray, MemberArray > MethodArray;
        } // reflect
    } // lang
} // java

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::lang::Class::Class(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Class::Class(::avian::VMClass* vmClass) 
    : Class(*static_cast< ::default_init_tag* >(0))
{
    ctor(vmClass);
}

constexpr int32_t java::lang::Class::PrimitiveFlag;

constexpr int32_t java::lang::Class::EnumFlag;

void java::lang::Class::ctor(::avian::VMClass* vmClass)
{
    super::ctor();
    this->vmClass = vmClass;
}

java::lang::String* java::lang::Class::toString()
{
    return getName();
}

int8_tArray* java::lang::Class::replace(int32_t a, int32_t b, ::int8_tArray* s, int32_t offset, int32_t length)
{
    clinit();
    auto array = new ::int8_tArray(length);
    for (auto i = int32_t(0); i < length; ++i) {
        auto c = (*s)[i];
        (*array)[i] = static_cast< int8_t >((c == a ? b : static_cast< int32_t >(c)));
    }
    return array;
}

java::lang::String* java::lang::Class::getName()
{
    return getName(vmClass);
}

java::lang::String* java::lang::Class::getName(::avian::VMClass* c)
{
    clinit();
    if(npc(c)->name == nullptr) {
        if((npc(c)->vmFlags & PrimitiveFlag) != 0) {
            if(c == ::avian::Classes::primitiveClass(u'V')) {
                npc(c)->name = npc(u"void\0"_j)->getBytes();
            } else if(c == ::avian::Classes::primitiveClass(u'Z')) {
                npc(c)->name = npc(u"boolean\0"_j)->getBytes();
            } else if(c == ::avian::Classes::primitiveClass(u'B')) {
                npc(c)->name = npc(u"byte\0"_j)->getBytes();
            } else if(c == ::avian::Classes::primitiveClass(u'C')) {
                npc(c)->name = npc(u"char\0"_j)->getBytes();
            } else if(c == ::avian::Classes::primitiveClass(u'S')) {
                npc(c)->name = npc(u"short\0"_j)->getBytes();
            } else if(c == ::avian::Classes::primitiveClass(u'I')) {
                npc(c)->name = npc(u"int\0"_j)->getBytes();
            } else if(c == ::avian::Classes::primitiveClass(u'F')) {
                npc(c)->name = npc(u"float\0"_j)->getBytes();
            } else if(c == ::avian::Classes::primitiveClass(u'J')) {
                npc(c)->name = npc(u"long\0"_j)->getBytes();
            } else if(c == ::avian::Classes::primitiveClass(u'D')) {
                npc(c)->name = npc(u"double\0"_j)->getBytes();
            } else {
                throw new AssertionError();
            }
        } else {
            throw new AssertionError();
        }
    }
    return new String(replace(u'/', u'.', npc(c)->name, 0, npc(npc(c)->name)->length - int32_t(1)), int32_t(0), npc(npc(c)->name)->length - int32_t(1), false);
}

java::lang::String* java::lang::Class::getCanonicalName()
{
    if((npc(vmClass)->vmFlags & PrimitiveFlag) != 0) {
        return getName();
    } else if(isArray_()) {
        return ::java::lang::StringBuilder().append(npc(getComponentType())->getCanonicalName())->append(u"[]"_j)->toString();
    } else {
        return npc(getName())->replace(u'$', u'.');
    }
}

java::lang::String* java::lang::Class::getSimpleName()
{
    if((npc(vmClass)->vmFlags & PrimitiveFlag) != 0) {
        return getName();
    } else if(isArray_()) {
        return ::java::lang::StringBuilder().append(npc(getComponentType())->getSimpleName())->append(u"[]"_j)->toString();
    } else {
        auto name = getCanonicalName();
        auto index = npc(name)->lastIndexOf(static_cast< int32_t >(u'.'));
        if(index >= 0) {
            return npc(name)->substring(index + int32_t(1));
        } else {
            return name;
        }
    }
}

java::lang::Object* java::lang::Class::newInstance() /* throws(IllegalAccessException, InstantiationException) */
{
    try {
        return java_cast< Object* >(java_cast< Object* >(npc(getConstructor(new ClassArray()))->newInstance(new ObjectArray())));
    } catch (NoSuchMethodException* e) {
        throw new RuntimeException(static_cast< Throwable* >(e));
    } catch (::java::lang::reflect::InvocationTargetException* e) {
        throw new RuntimeException(static_cast< Throwable* >(e));
    }
}

java::lang::Class* java::lang::Class::forName(String* name) /* throws(ClassNotFoundException) */
{
    clinit();
    return forName(name, true, npc(npc(::java::lang::reflect::Method::getCaller())->class__)->loader);
}

java::lang::Class* java::lang::Class::forName(String* name, bool initialize, ClassLoader* loader) /* throws(ClassNotFoundException) */
{
    clinit();
    return ::avian::Classes::forName(name, initialize, loader);
}

java::lang::Class* java::lang::Class::getComponentType()
{
    if(isArray_()) {
        auto n = getName();
        if(npc(u"[Z"_j)->equals(static_cast< Object* >(n))) {
            return ::avian::SystemClassLoader::getClass(::avian::Classes::primitiveClass(u'Z'));
        } else if(npc(u"[B"_j)->equals(static_cast< Object* >(n))) {
            return ::avian::SystemClassLoader::getClass(::avian::Classes::primitiveClass(u'B'));
        } else if(npc(u"[S"_j)->equals(static_cast< Object* >(n))) {
            return ::avian::SystemClassLoader::getClass(::avian::Classes::primitiveClass(u'S'));
        } else if(npc(u"[C"_j)->equals(static_cast< Object* >(n))) {
            return ::avian::SystemClassLoader::getClass(::avian::Classes::primitiveClass(u'C'));
        } else if(npc(u"[I"_j)->equals(static_cast< Object* >(n))) {
            return ::avian::SystemClassLoader::getClass(::avian::Classes::primitiveClass(u'I'));
        } else if(npc(u"[F"_j)->equals(static_cast< Object* >(n))) {
            return ::avian::SystemClassLoader::getClass(::avian::Classes::primitiveClass(u'F'));
        } else if(npc(u"[J"_j)->equals(static_cast< Object* >(n))) {
            return ::avian::SystemClassLoader::getClass(::avian::Classes::primitiveClass(u'J'));
        } else if(npc(u"[D"_j)->equals(static_cast< Object* >(n))) {
            return ::avian::SystemClassLoader::getClass(::avian::Classes::primitiveClass(u'D'));
        }
        if(npc(vmClass)->staticTable == nullptr)
            throw new AssertionError();

        return ::avian::SystemClassLoader::getClass(java_cast< ::avian::VMClass* >(npc(vmClass)->staticTable));
    } else {
        return nullptr;
    }
}

bool java::lang::Class::isAssignableFrom(Class* c)
{
    return ::avian::Classes::isAssignableFrom(vmClass, npc(c)->vmClass);
}

java::lang::reflect::Field* java::lang::Class::getDeclaredField(String* name) /* throws(NoSuchFieldException) */
{
    auto index = ::avian::Classes::findField(vmClass, name);
    if(index < 0) {
        throw new NoSuchFieldException(name);
    } else {
        return new ::java::lang::reflect::Field((*npc(vmClass)->fieldTable)[index]);
    }
}

java::lang::reflect::Field* java::lang::Class::getField(String* name) /* throws(NoSuchFieldException) */
{
    for (auto *c = vmClass; c != nullptr; c = npc(c)->super_) {
        auto index = ::avian::Classes::findField(c, name);
        if(index >= 0) {
            return new ::java::lang::reflect::Field((*npc(vmClass)->fieldTable)[index]);
        }
    }
    throw new NoSuchFieldException(name);
}

java::lang::reflect::Method* java::lang::Class::getDeclaredMethod(String* name, ClassArray*/*...*/ parameterTypes) /* throws(NoSuchMethodException) */
{
    if(npc(name)->startsWith(u"<"_j)) {
        throw new NoSuchMethodException(name);
    }
    auto index = ::avian::Classes::findMethod(vmClass, name, parameterTypes);
    if(index < 0) {
        throw new NoSuchMethodException(name);
    } else {
        return new ::java::lang::reflect::Method((*npc(vmClass)->methodTable)[index]);
    }
}

java::lang::reflect::Method* java::lang::Class::getMethod(String* name, ClassArray*/*...*/ parameterTypes) /* throws(NoSuchMethodException) */
{
    if(npc(name)->startsWith(u"<"_j)) {
        throw new NoSuchMethodException(name);
    }
    for (auto *c = vmClass; c != nullptr; c = npc(c)->super_) {
        auto index = ::avian::Classes::findMethod(c, name, parameterTypes);
        if(index >= 0) {
            return new ::java::lang::reflect::Method((*npc(vmClass)->methodTable)[index]);
        }
    }
    throw new NoSuchMethodException(name);
}

java::lang::reflect::Constructor* java::lang::Class::getConstructor(ClassArray*/*...*/ parameterTypes) /* throws(NoSuchMethodException) */
{
    auto index = ::avian::Classes::findMethod(vmClass, u"<init>"_j, parameterTypes);
    if(index < 0) {
        throw new NoSuchMethodException();
    } else {
        return new ::java::lang::reflect::Constructor(new ::java::lang::reflect::Method((*npc(vmClass)->methodTable)[index]));
    }
}

java::lang::reflect::Constructor* java::lang::Class::getDeclaredConstructor(ClassArray*/*...*/ parameterTypes) /* throws(NoSuchMethodException) */
{
    ::java::lang::reflect::Constructor* c = nullptr;
    auto constructors = getDeclaredConstructors();
    for (auto i = int32_t(0); i < npc(constructors)->length; ++i) {
        if(::avian::Classes::match(parameterTypes, npc((*constructors)[i])->getParameterTypes())) {
            c = (*constructors)[i];
        }
    }
    if(c == nullptr) {
        throw new NoSuchMethodException();
    } else {
        return c;
    }
}

int32_t java::lang::Class::countConstructors(bool publicOnly)
{
    auto count = int32_t(0);
    if(npc(vmClass)->methodTable != nullptr) {
        for (auto i = int32_t(0); i < npc(npc(vmClass)->methodTable)->length; ++i) {
            if(((!publicOnly) || ((npc((*npc(vmClass)->methodTable)[i])->flags & ::java::lang::reflect::Modifier::PUBLIC)) != 0) && npc(::java::lang::reflect::Method::getName((*npc(vmClass)->methodTable)[i]))->equals(static_cast< Object* >(u"<init>"_j))) {
                ++count;
            }
        }
    }
    return count;
}

java::lang::reflect::ConstructorArray* java::lang::Class::getDeclaredConstructors()
{
    auto array = new ::java::lang::reflect::ConstructorArray(countConstructors(false));
    if(npc(vmClass)->methodTable != nullptr) {
        ::avian::Classes::link(vmClass);
        auto index = int32_t(0);
        for (auto i = int32_t(0); i < npc(npc(vmClass)->methodTable)->length; ++i) {
            if(npc(::java::lang::reflect::Method::getName((*npc(vmClass)->methodTable)[i]))->equals(static_cast< Object* >(u"<init>"_j))) {
                array->set(index++, new ::java::lang::reflect::Constructor(new ::java::lang::reflect::Method((*npc(vmClass)->methodTable)[i])));
            }
        }
    }
    return array;
}

java::lang::reflect::ConstructorArray* java::lang::Class::getConstructors()
{
    auto array = new ::java::lang::reflect::ConstructorArray(countConstructors(true));
    if(npc(vmClass)->methodTable != nullptr) {
        ::avian::Classes::link(vmClass);
        auto index = int32_t(0);
        for (auto i = int32_t(0); i < npc(npc(vmClass)->methodTable)->length; ++i) {
            if(((npc((*npc(vmClass)->methodTable)[i])->flags & ::java::lang::reflect::Modifier::PUBLIC) != 0) && npc(::java::lang::reflect::Method::getName((*npc(vmClass)->methodTable)[i]))->equals(static_cast< Object* >(u"<init>"_j))) {
                array->set(index++, new ::java::lang::reflect::Constructor(new ::java::lang::reflect::Method((*npc(vmClass)->methodTable)[i])));
            }
        }
    }
    return array;
}

java::lang::reflect::FieldArray* java::lang::Class::getDeclaredFields()
{
    if(npc(vmClass)->fieldTable != nullptr) {
        auto array = new ::java::lang::reflect::FieldArray(npc(npc(vmClass)->fieldTable)->length);
        for (auto i = int32_t(0); i < npc(npc(vmClass)->fieldTable)->length; ++i) {
            array->set(i, new ::java::lang::reflect::Field((*npc(vmClass)->fieldTable)[i]));
        }
        return array;
    } else {
        return new ::java::lang::reflect::FieldArray(int32_t(0));
    }
}

int32_t java::lang::Class::countPublicFields()
{
    auto count = int32_t(0);
    if(npc(vmClass)->fieldTable != nullptr) {
        for (auto i = int32_t(0); i < npc(npc(vmClass)->fieldTable)->length; ++i) {
            if(((npc((*npc(vmClass)->fieldTable)[i])->flags & ::java::lang::reflect::Modifier::PUBLIC)) != 0) {
                ++count;
            }
        }
    }
    return count;
}

java::lang::reflect::FieldArray* java::lang::Class::getFields()
{
    auto array = new ::java::lang::reflect::FieldArray(countPublicFields());
    if(npc(vmClass)->fieldTable != nullptr) {
        ::avian::Classes::link(vmClass);
        auto ai = int32_t(0);
        for (auto i = int32_t(0); i < npc(npc(vmClass)->fieldTable)->length; ++i) {
            if(((npc((*npc(vmClass)->fieldTable)[i])->flags & ::java::lang::reflect::Modifier::PUBLIC)) != 0) {
                array->set(ai++, new ::java::lang::reflect::Field((*npc(vmClass)->fieldTable)[i]));
            }
        }
    }
    return array;
}

void java::lang::Class::getAllFields(::avian::VMClass* vmClass, ::java::util::ArrayList* fields)
{
    clinit();
    if(npc(vmClass)->super_ != nullptr) {
        getAllFields(npc(vmClass)->super_, fields);
    }
    if(npc(vmClass)->fieldTable != nullptr) {
        ::avian::Classes::link(vmClass);
        for (auto i = int32_t(0); i < npc(npc(vmClass)->fieldTable)->length; ++i) {
            npc(fields)->add(static_cast< Object* >(new ::java::lang::reflect::Field((*npc(vmClass)->fieldTable)[i])));
        }
    }
}

java::lang::reflect::FieldArray* java::lang::Class::getAllFields()
{
    auto fields = new ::java::util::ArrayList();
    getAllFields(vmClass, fields);
    return java_cast< ::java::lang::reflect::FieldArray* >(npc(fields)->toArray_(static_cast< ObjectArray* >(new ::java::lang::reflect::FieldArray(npc(fields)->size()))));
}

java::lang::reflect::MethodArray* java::lang::Class::getDeclaredMethods()
{
    return ::avian::Classes::getMethods(vmClass, false);
}

java::lang::reflect::MethodArray* java::lang::Class::getMethods()
{
    return ::avian::Classes::getMethods(vmClass, true);
}

java::lang::ClassArray* java::lang::Class::getInterfaces()
{
    if(npc(vmClass)->interfaceTable != nullptr) {
        ::avian::Classes::link(vmClass);
        auto stride = (isInterface() ? int32_t(1) : int32_t(2));
        auto array = new ClassArray(npc(npc(vmClass)->interfaceTable)->length / stride);
        for (auto i = int32_t(0); i < npc(array)->length; ++i) {
            array->set(i, ::avian::SystemClassLoader::getClass(java_cast< ::avian::VMClass* >((*npc(vmClass)->interfaceTable)[i * stride])));
        }
        return array;
    } else {
        return new ClassArray(int32_t(0));
    }
}

java::lang::ObjectArray* java::lang::Class::getEnumConstants()
{
    if(npc(Enum::class_())->isAssignableFrom(this)) {
        try {
            return java_cast< ObjectArray* >(npc(getMethod(u"values"_j, new ClassArray()))->invoke(nullptr, new ObjectArray()));
        } catch (Exception* e) {
            throw new Error();
        }
    } else {
        return nullptr;
    }
}

java::lang::ClassLoader* java::lang::Class::getClassLoader()
{
    return npc(vmClass)->loader;
}

int32_t java::lang::Class::getModifiers()
{
    return npc(vmClass)->flags;
}

bool java::lang::Class::isInterface()
{
    return (npc(vmClass)->flags & ::java::lang::reflect::Modifier::INTERFACE) != 0;
}

java::lang::Class* java::lang::Class::getSuperclass()
{
    return (npc(vmClass)->super_ == nullptr ? static_cast< Class* >(nullptr) : ::avian::SystemClassLoader::getClass(npc(vmClass)->super_));
}

bool java::lang::Class::isArray_()
{
    return npc(vmClass)->arrayDimensions != 0;
}

bool java::lang::Class::isInstance(::avian::VMClass* c, Object* o)
{
    clinit();
    return o != nullptr && ::avian::Classes::isAssignableFrom(c, ::avian::Classes::getVMClass(o));
}

bool java::lang::Class::isInstance(Object* o)
{
    return isInstance(vmClass, o);
}

bool java::lang::Class::isPrimitive()
{
    return (npc(vmClass)->vmFlags & PrimitiveFlag) != 0;
}

bool java::lang::Class::isEnum()
{
    return static_cast< Object* >(getSuperclass()) == static_cast< Object* >(Enum::class_()) && (npc(vmClass)->flags & EnumFlag) != 0;
}

java::net::URL* java::lang::Class::getResource(String* path)
{
    if(!npc(path)->startsWith(u"/"_j)) {
        auto name = new String(npc(vmClass)->name, int32_t(0), npc(npc(vmClass)->name)->length - int32_t(1), false);
        auto index = npc(name)->lastIndexOf(static_cast< int32_t >(u'/'));
        if(index >= 0) {
            path = ::java::lang::StringBuilder().append(npc(name)->substring(0, index))->append(u"/"_j)
                ->append(path)->toString();
        }
    }
    return npc(getClassLoader())->getResource(path);
}

java::io::InputStream* java::lang::Class::getResourceAsStream(String* path)
{
    auto url = getResource(path);
    try {
        return (url == nullptr ? static_cast< ::java::io::InputStream* >(nullptr) : npc(url)->openStream());
    } catch (::java::io::IOException* e) {
        return nullptr;
    }
}

bool java::lang::Class::desiredAssertionStatus()
{
    return false;
}

/* <T> */java::lang::Class* java::lang::Class::asSubclass(Class* c)
{
    if(!npc(c)->isAssignableFrom(this)) {
        throw new ClassCastException();
    }
    return java_cast< Class* >(this);
}

java::lang::Object* java::lang::Class::cast(Object* o)
{
    return java_cast< Object* >(o);
}

java::lang::Package* java::lang::Class::getPackage()
{
    if((npc(vmClass)->vmFlags & PrimitiveFlag) != 0 || isArray_()) {
        return nullptr;
    } else {
        auto name = getCanonicalName();
        auto index = npc(name)->lastIndexOf(static_cast< int32_t >(u'.'));
        if(index >= 0) {
            return new Package(npc(name)->substring(0, index), nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
        } else {
            return nullptr;
        }
    }
}

bool java::lang::Class::isAnnotationPresent(Class* class__)
{
    return java_cast< ::java::lang::annotation::Annotation* >(getAnnotation(static_cast< Class* >(class__))) != nullptr;
}

java::lang::annotation::Annotation* java::lang::Class::getAnnotation(::avian::VMClass* c, ObjectArray* a)
{
    clinit();
    if((*a)[int32_t(0)] == nullptr) {
        a->set(int32_t(0), ::java::lang::reflect::Proxy::newProxyInstance(npc(c)->loader, new ClassArray({java_cast< Class* >((*a)[int32_t(1)])}), new ::avian::AnnotationInvocationHandler(a)));
    }
    return java_cast< ::java::lang::annotation::Annotation* >((*a)[int32_t(0)]);
}

/* <T extends Annotation> */java::lang::annotation::Annotation* java::lang::Class::getAnnotation(Class* class__)
{
    for (auto *c = vmClass; c != nullptr; c = npc(c)->super_) {
        if(npc(c)->addendum != nullptr && npc(npc(c)->addendum)->annotationTable != nullptr) {
            ::avian::Classes::link(c, npc(c)->loader);
            auto table = java_cast< ObjectArray* >(npc(npc(c)->addendum)->annotationTable);
            for (auto i = int32_t(0); i < npc(table)->length; ++i) {
                auto a = java_cast< ObjectArray* >((*table)[i]);
                if((*a)[int32_t(1)] == static_cast< Object* >(class__)) {
                    return java_cast< ::java::lang::annotation::Annotation* >(getAnnotation(c, a));
                }
            }
        }
    }
    return nullptr;
}

java::lang::annotation::AnnotationArray* java::lang::Class::getDeclaredAnnotations()
{
    if(npc(npc(vmClass)->addendum)->annotationTable != nullptr) {
        ::avian::Classes::link(vmClass);
        auto table = java_cast< ObjectArray* >(npc(npc(vmClass)->addendum)->annotationTable);
        auto array = new ::java::lang::annotation::AnnotationArray(npc(table)->length);
        for (auto i = int32_t(0); i < npc(table)->length; ++i) {
            array->set(i, getAnnotation(vmClass, java_cast< ObjectArray* >((*table)[i])));
        }
        return array;
    } else {
        return new ::java::lang::annotation::AnnotationArray(int32_t(0));
    }
}

int32_t java::lang::Class::countAnnotations()
{
    auto count = int32_t(0);
    for (auto *c = vmClass; c != nullptr; c = npc(c)->super_) {
        if(npc(c)->addendum != nullptr && npc(npc(c)->addendum)->annotationTable != nullptr) {
            count += npc((java_cast< ObjectArray* >(npc(npc(c)->addendum)->annotationTable)))->length;
        }
    }
    return count;
}

java::lang::annotation::AnnotationArray* java::lang::Class::getAnnotations()
{
    auto array = new ::java::lang::annotation::AnnotationArray(countAnnotations());
    auto i = int32_t(0);
    for (auto *c = vmClass; c != nullptr; c = npc(c)->super_) {
        if(npc(c)->addendum != nullptr && npc(npc(c)->addendum)->annotationTable != nullptr) {
            auto table = java_cast< ObjectArray* >(npc(npc(c)->addendum)->annotationTable);
            for (auto j = int32_t(0); j < npc(table)->length; ++j) {
                array->set(i++, getAnnotation(vmClass, java_cast< ObjectArray* >((*table)[j])));
            }
        }
    }
    return array;
}

java::security::ProtectionDomain* java::lang::Class::getProtectionDomain()
{
    auto p = new ::java::security::Permissions();
    npc(p)->add(static_cast< ::java::security::Permission* >(new ::java::security::AllPermission()));
    return new ::java::security::ProtectionDomain(nullptr, p);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Class::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Class", 15);
    return c;
}

java::lang::Class* java::lang::Class::getClass0()
{
    return class_();
}

