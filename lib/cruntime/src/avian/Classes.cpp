// Generated from /runtime/avian/Classes.java
#include <avian/Classes.hpp>

#include <avian/Addendum.hpp>
#include <avian/AnnotationInvocationHandler.hpp>
#include <avian/ClassAddendum.hpp>
#include <avian/FieldAddendum.hpp>
#include <avian/MethodAddendum.hpp>
#include <avian/Singleton.hpp>
#include <avian/Stream.hpp>
#include <avian/SystemClassLoader.hpp>
#include <avian/VMClass.hpp>
#include <avian/VMField.hpp>
#include <avian/VMMethod.hpp>
#include <java/io/ByteArrayInputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/AssertionError.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/Byte.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/ClassNotFoundException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Float.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NoClassDefFoundError.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <java/lang/Throwable.hpp>
#include <java/lang/annotation/Annotation.hpp>
#include <java/lang/reflect/AccessibleObject.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <java/lang/reflect/Member.hpp>
#include <java/lang/reflect/Method.hpp>
#include <java/lang/reflect/Modifier.hpp>
#include <java/lang/reflect/Proxy.hpp>
#include <java/lang/reflect/Type.hpp>
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

        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AccessibleObject, ::java::lang::ObjectArray, AnnotatedElementArray > AccessibleObjectArray;
typedef ::SubArray< ::java::lang::reflect::Member, ::java::lang::ObjectArray > MemberArray;
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

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
avian::Classes::Classes(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::Classes::Classes()
    : Classes(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t avian::Classes::LinkFlag;

avian::VMClass* avian::Classes::loadVMClass(::java::lang::ClassLoader* loader, ::int8_tArray* nameBytes, int32_t offset, int32_t length)
{
    clinit();
    auto spec = new ::int8_tArray(length + int32_t(1));
    ::java::lang::System::arraycopy(nameBytes, offset, spec, 0, length);
    try {
        auto c = resolveVMClass(loader, spec);
        if(c == nullptr) {
            throw new ::java::lang::NoClassDefFoundError();
        }
        return c;
    } catch (::java::lang::ClassNotFoundException* e) {
        auto error = new ::java::lang::NoClassDefFoundError(new ::java::lang::String(nameBytes, offset, length));
        npc(error)->initCause(e);
        throw error;
    }
}

java::lang::Object* avian::Classes::parseAnnotationValue(::java::lang::ClassLoader* loader, ::java::lang::Object* pool, ::java::io::InputStream* in) /* throws(IOException) */
{
    clinit();
    switch (Stream::read1(in)) {
    case u'Z':
        return ::java::lang::Boolean::valueOf(Singleton::getInt(pool, Stream::read2(in) - int32_t(1)) != 0);
    case u'B':
        return ::java::lang::Byte::valueOf(static_cast< int8_t >(Singleton::getInt(pool, Stream::read2(in) - int32_t(1))));
    case u'C':
        return ::java::lang::Character::valueOf(static_cast< char16_t >(Singleton::getInt(pool, Stream::read2(in) - int32_t(1))));
    case u'S':
        return ::java::lang::Short::valueOf(static_cast< int16_t >(Singleton::getInt(pool, Stream::read2(in) - int32_t(1))));
    case u'I':
        return ::java::lang::Integer::valueOf(Singleton::getInt(pool, Stream::read2(in) - int32_t(1)));
    case u'F':
        return ::java::lang::Float::valueOf(::java::lang::Float::intBitsToFloat(Singleton::getInt(pool, Stream::read2(in) - int32_t(1))));
    case u'J': {
            return ::java::lang::Long::valueOf(Singleton::getLong(pool, Stream::read2(in) - int32_t(1)));
        }
    case u'D': {
            return ::java::lang::Double::valueOf(::java::lang::Double::longBitsToDouble(Singleton::getLong(pool, Stream::read2(in) - int32_t(1))));
        }
    case u's': {
            auto data = java_cast< ::int8_tArray* >(Singleton::getObject(pool, Stream::read2(in) - int32_t(1)));
            return new ::java::lang::String(data, int32_t(0), npc(data)->length - int32_t(1));
        }
    case u'e': {
            auto typeName = java_cast< ::int8_tArray* >(Singleton::getObject(pool, Stream::read2(in) - int32_t(1)));
            auto name = java_cast< ::int8_tArray* >(Singleton::getObject(pool, Stream::read2(in) - int32_t(1)));
            return java_cast< ::java::lang::Enum* >(::java::lang::Enum::valueOf(SystemClassLoader::getClass(loadVMClass(loader, typeName, 1, npc(typeName)->length - int32_t(3))), new ::java::lang::String(name, int32_t(0), npc(name)->length - int32_t(1))));
        }
    case u'c': {
            auto name = java_cast< ::int8_tArray* >(Singleton::getObject(pool, Stream::read2(in) - int32_t(1)));
            return SystemClassLoader::getClass(loadVMClass(loader, name, 1, npc(name)->length - int32_t(3)));
        }
    case u'@':
        return parseAnnotation(loader, pool, in);
    case u'[': {
            auto array = new ::java::lang::ObjectArray(Stream::read2(in));
            for (auto i = int32_t(0); i < npc(array)->length; ++i) {
                array->set(i, parseAnnotationValue(loader, pool, in));
            }
            return array;
        }
    default:
        throw new ::java::lang::AssertionError();
    }

}

java::lang::ObjectArray* avian::Classes::parseAnnotation(::java::lang::ClassLoader* loader, ::java::lang::Object* pool, ::java::io::InputStream* in) /* throws(IOException) */
{
    clinit();
    auto typeName = java_cast< ::int8_tArray* >(Singleton::getObject(pool, Stream::read2(in) - int32_t(1)));
    auto annotation = new ::java::lang::ObjectArray((Stream::read2(in) + int32_t(1)) * int32_t(2));
    annotation->set(int32_t(1), SystemClassLoader::getClass(loadVMClass(loader, typeName, 1, npc(typeName)->length - int32_t(3))));
    for (auto i = int32_t(2); i < npc(annotation)->length; i += 2) {
        auto name = java_cast< ::int8_tArray* >(Singleton::getObject(pool, Stream::read2(in) - int32_t(1)));
        annotation->set(i, new ::java::lang::String(name, int32_t(0), npc(name)->length - int32_t(1)));
        annotation->set(i + int32_t(1), parseAnnotationValue(loader, pool, in));
    }
    return annotation;
}

java::lang::ObjectArray* avian::Classes::parseAnnotationTable(::java::lang::ClassLoader* loader, ::java::lang::Object* pool, ::java::io::InputStream* in) /* throws(IOException) */
{
    clinit();
    auto table = new ::java::lang::ObjectArray(Stream::read2(in));
    for (auto i = int32_t(0); i < npc(table)->length; ++i) {
        table->set(i, parseAnnotation(loader, pool, in));
    }
    return table;
}

void avian::Classes::parseAnnotationTable(::java::lang::ClassLoader* loader, Addendum* addendum)
{
    clinit();
    if(addendum != nullptr && dynamic_cast< ::int8_tArray* >(npc(addendum)->annotationTable) != nullptr) {
        try {
            npc(addendum)->annotationTable = parseAnnotationTable(loader, npc(addendum)->pool, new ::java::io::ByteArrayInputStream(java_cast< ::int8_tArray* >(npc(addendum)->annotationTable)));
        } catch (::java::io::IOException* e) {
            auto error = new ::java::lang::AssertionError();
            npc(error)->initCause(e);
            throw error;
        }
    }
}

int32_t avian::Classes::resolveSpec(::java::lang::ClassLoader* loader, ::int8_tArray* spec, int32_t start)
{
    clinit();
    int32_t result;
    int32_t end;
    switch ((*spec)[start]) {
    case u'L':
        ++start;
        end = start;
        while ((*spec)[end] != u';') 
                        ++end;

        result = end + int32_t(1);
        break;
    case u'[':
        end = start + int32_t(1);
        while ((*spec)[end] == u'[') 
                        ++end;

        switch ((*spec)[end]) {
        case u'L':
            ++end;
            while ((*spec)[end] != u';') 
                                ++end;

            ++end;
            break;
        default:
            ++end;
        }

        result = end;
        break;
    default:
        return start + int32_t(1);
    }

    loadVMClass(loader, spec, start, end - start);
    return result;
}

void avian::Classes::link(VMClass* c, ::java::lang::ClassLoader* loader)
{
    clinit();
    acquireClassLock();
    {
        auto finally0 = finally([&] {
            releaseClassLock();
        });
        {
            if((npc(c)->vmFlags & LinkFlag) == 0) {
                if(npc(c)->super_ != nullptr) {
                    link(npc(c)->super_, loader);
                }
                parseAnnotationTable(loader, npc(c)->addendum);
                if(npc(c)->interfaceTable != nullptr) {
                    auto stride = ((npc(c)->flags & ::java::lang::reflect::Modifier::INTERFACE) != 0 ? int32_t(1) : int32_t(2));
                    for (auto i = int32_t(0); i < npc(npc(c)->interfaceTable)->length; i += stride) {
                        link(java_cast< VMClass* >((*npc(c)->interfaceTable)[i]), loader);
                    }
                }
                if(npc(c)->methodTable != nullptr) {
                    for (auto i = int32_t(0); i < npc(npc(c)->methodTable)->length; ++i) {
                        auto m = (*npc(c)->methodTable)[i];
                        for (auto j = int32_t(1); j < npc(npc(m)->spec)->length; ) {
                            j = resolveSpec(loader, npc(m)->spec, j);
                        }
                        parseAnnotationTable(loader, npc(m)->addendum);
                    }
                }
                if(npc(c)->fieldTable != nullptr) {
                    for (auto i = int32_t(0); i < npc(npc(c)->fieldTable)->length; ++i) {
                        auto f = (*npc(c)->fieldTable)[i];
                        resolveSpec(loader, npc(f)->spec, 0);
                        parseAnnotationTable(loader, npc(f)->addendum);
                    }
                }
                npc(c)->vmFlags |= LinkFlag;
            }
        }
    }

}

void avian::Classes::link(VMClass* c)
{
    clinit();
    link(c, npc(c)->loader);
}

java::lang::Class* avian::Classes::forName(::java::lang::String* name, bool initialize, ::java::lang::ClassLoader* loader) /* throws(ClassNotFoundException) */
{
    clinit();
    if(loader == nullptr) {
        loader = npc(::java::lang::Class::class_())->getClassLoader();
    }
    auto c = npc(loader)->loadClass(name);
    auto vmc = SystemClassLoader::vmClass(c);
    Classes::link(vmc, loader);
    if(initialize) {
        Classes::initialize(vmc);
    }
    return c;
}

java::lang::Class* avian::Classes::forCanonicalName(::java::lang::String* name)
{
    clinit();
    return forCanonicalName(nullptr, name);
}

java::lang::Class* avian::Classes::forCanonicalName(::java::lang::ClassLoader* loader, ::java::lang::String* name)
{
    clinit();
    try {
        if(npc(name)->startsWith(u"["_j)) {
            return forName(name, true, loader);
        } else if(npc(name)->startsWith(u"L"_j)) {
            return forName(npc(name)->substring(1, npc(name)->length() - int32_t(1)), true, loader);
        } else {
            if(npc(name)->length() == 1) {
                return SystemClassLoader::getClass(Classes::primitiveClass(npc(name)->charAt(int32_t(0))));
            } else {
                throw new ::java::lang::ClassNotFoundException(name);
            }
        }
    } catch (::java::lang::ClassNotFoundException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
}

int32_t avian::Classes::next(char16_t c, ::java::lang::String* s, int32_t start)
{
    clinit();
    for (auto i = start; i < npc(s)->length(); ++i) {
        if(npc(s)->charAt(i) == c)
            return i;

    }
    throw new ::java::lang::RuntimeException();
}

java::lang::ClassArray* avian::Classes::getParameterTypes(VMMethod* vmMethod)
{
    clinit();
    int32_t count = npc(vmMethod)->parameterCount;
    auto types = new ::java::lang::ClassArray(count);
    auto index = int32_t(0);
    auto spec = new ::java::lang::String(npc(vmMethod)->spec, int32_t(1), npc(npc(vmMethod)->spec)->length - int32_t(2));
    try {
        for (auto i = int32_t(0); i < npc(spec)->length(); ++i) {
            auto c = npc(spec)->charAt(i);
            if(c == u')') {
                break;
            } else if(c == u'L') {
                auto start = i + int32_t(1);
                i = next(u';', spec, start);
                auto name = npc(npc(spec)->substring(start, i))->replace(u'/', u'.');
                types->set(index++, ::java::lang::Class::forName(name, true, npc(npc(vmMethod)->class__)->loader));
            } else if(c == u'[') {
                auto start = i;
                while (npc(spec)->charAt(i) == u'[') 
                                        ++i;

                if(npc(spec)->charAt(i) == u'L') {
                    i = next(u';', spec, i + int32_t(1));
                    auto name = npc(npc(spec)->substring(start, i))->replace(u'/', u'.');
                    types->set(index++, ::java::lang::Class::forName(name, true, npc(npc(vmMethod)->class__)->loader));
                } else {
                    auto name = npc(spec)->substring(start, i + int32_t(1));
                    types->set(index++, forCanonicalName(npc(npc(vmMethod)->class__)->loader, name));
                }
            } else {
                auto name = npc(spec)->substring(i, i + int32_t(1));
                types->set(index++, forCanonicalName(npc(npc(vmMethod)->class__)->loader, name));
            }
        }
    } catch (::java::lang::ClassNotFoundException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
    return types;
}

int32_t avian::Classes::findField(VMClass* vmClass, ::java::lang::String* name)
{
    clinit();
    if(npc(vmClass)->fieldTable != nullptr) {
        Classes::link(vmClass);
        for (auto i = int32_t(0); i < npc(npc(vmClass)->fieldTable)->length; ++i) {
            if(npc(toString(npc((*npc(vmClass)->fieldTable)[i])->name))->equals(static_cast< ::java::lang::Object* >(name))) {
                return i;
            }
        }
    }
    return -int32_t(1);
}

java::lang::String* avian::Classes::toString(::int8_tArray* array)
{
    clinit();
    return new ::java::lang::String(array, int32_t(0), npc(array)->length - int32_t(1));
}

bool avian::Classes::match(::java::lang::ClassArray* a, ::java::lang::ClassArray* b)
{
    clinit();
    if(npc(a)->length == npc(b)->length) {
        for (auto i = int32_t(0); i < npc(a)->length; ++i) {
            if(!npc((*a)[i])->isAssignableFrom((*b)[i])) {
                return false;
            }
        }
        return true;
    } else {
        return false;
    }
}

int32_t avian::Classes::findMethod(VMClass* vmClass, ::java::lang::String* name, ::java::lang::ClassArray* parameterTypes)
{
    clinit();
    if(npc(vmClass)->methodTable != nullptr) {
        Classes::link(vmClass);
        if(parameterTypes == nullptr) {
            parameterTypes = new ::java::lang::ClassArray(int32_t(0));
        }
        for (auto i = int32_t(0); i < npc(npc(vmClass)->methodTable)->length; ++i) {
            if(npc(toString(npc((*npc(vmClass)->methodTable)[i])->name))->equals(static_cast< ::java::lang::Object* >(name)) && match(parameterTypes, getParameterTypes((*npc(vmClass)->methodTable)[i]))) {
                return i;
            }
        }
    }
    return -int32_t(1);
}

int32_t avian::Classes::countMethods(VMClass* vmClass, bool publicOnly)
{
    clinit();
    auto count = int32_t(0);
    if(npc(vmClass)->methodTable != nullptr) {
        for (auto i = int32_t(0); i < npc(npc(vmClass)->methodTable)->length; ++i) {
            if(((!publicOnly) || ((npc((*npc(vmClass)->methodTable)[i])->flags & ::java::lang::reflect::Modifier::PUBLIC)) != 0) && (!npc(toString(npc((*npc(vmClass)->methodTable)[i])->name))->startsWith(u"<"_j))) {
                ++count;
            }
        }
    }
    return count;
}

java::lang::reflect::MethodArray* avian::Classes::getMethods(VMClass* vmClass, bool publicOnly)
{
    clinit();
    auto array = new ::java::lang::reflect::MethodArray(countMethods(vmClass, publicOnly));
    if(npc(vmClass)->methodTable != nullptr) {
        Classes::link(vmClass);
        auto ai = int32_t(0);
        for (auto i = int32_t(0); i < npc(npc(vmClass)->methodTable)->length; ++i) {
            if((((npc((*npc(vmClass)->methodTable)[i])->flags & ::java::lang::reflect::Modifier::PUBLIC) != 0) || (!publicOnly)) && !npc(toString(npc((*npc(vmClass)->methodTable)[i])->name))->startsWith(u"<"_j)) {
                array->set(ai++, makeMethod(SystemClassLoader::getClass(vmClass), i));
            }
        }
    }
    return array;
}

java::lang::annotation::Annotation* avian::Classes::getAnnotation(::java::lang::ClassLoader* loader, ::java::lang::ObjectArray* a)
{
    clinit();
    if((*a)[int32_t(0)] == nullptr) {
        a->set(int32_t(0), ::java::lang::reflect::Proxy::newProxyInstance(loader, new ::java::lang::ClassArray({java_cast< ::java::lang::Class* >((*a)[int32_t(1)])}), new AnnotationInvocationHandler(a)));
    }
    return java_cast< ::java::lang::annotation::Annotation* >((*a)[int32_t(0)]);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::Classes::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.Classes", 13);
    return c;
}

java::lang::String* avian::Classes::toString()
{
    return super::toString();
}

java::lang::Class* avian::Classes::getClass0()
{
    return class_();
}

