// Generated from /runtime/java/lang/reflect/Method.java
#include <java/lang/reflect/Method.hpp>

#include <avian/Classes.hpp>
#include <avian/MethodAddendum.hpp>
#include <avian/SystemClassLoader.hpp>
#include <avian/VMClass.hpp>
#include <avian/VMMethod.hpp>
#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/annotation/Annotation.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <java/lang/reflect/Modifier.hpp>
#include <java/lang/reflect/Type.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
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

java::lang::reflect::Method::Method(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::reflect::Method::Method(::avian::VMMethod* vmMethod) 
    : Method(*static_cast< ::default_init_tag* >(0))
{
    ctor(vmMethod);
}

void java::lang::reflect::Method::ctor(::avian::VMMethod* vmMethod)
{
    super::ctor();
    this->vmMethod = vmMethod;
}

bool java::lang::reflect::Method::isAccessible()
{
    return accessible;
}

void java::lang::reflect::Method::setAccessible(bool v)
{
    accessible = v;
}

java::lang::Class* java::lang::reflect::Method::getDeclaringClass()
{
    return ::avian::SystemClassLoader::getClass(npc(vmMethod)->class__);
}

int32_t java::lang::reflect::Method::getModifiers()
{
    return npc(vmMethod)->flags;
}

java::lang::String* java::lang::reflect::Method::getName()
{
    return getName(vmMethod);
}

java::lang::String* java::lang::reflect::Method::getName(::avian::VMMethod* vmMethod)
{
    clinit();
    return new ::java::lang::String(npc(vmMethod)->name, int32_t(0), npc(npc(vmMethod)->name)->length - int32_t(1), false);
}

java::lang::String* java::lang::reflect::Method::getSpec()
{
    return getSpec(vmMethod);
}

java::lang::String* java::lang::reflect::Method::getSpec(::avian::VMMethod* vmMethod)
{
    clinit();
    return new ::java::lang::String(npc(vmMethod)->spec, int32_t(0), npc(npc(vmMethod)->spec)->length - int32_t(1), false);
}

java::lang::ClassArray* java::lang::reflect::Method::getParameterTypes()
{
    return ::avian::Classes::getParameterTypes(vmMethod);
}

java::lang::Object* java::lang::reflect::Method::invoke(::java::lang::Object* instance, ::java::lang::ObjectArray*/*...*/ arguments) /* throws(InvocationTargetException, IllegalAccessException) */
{
    if((npc(vmMethod)->flags & Modifier::STATIC) != 0 || ::java::lang::Class::isInstance(npc(vmMethod)->class__, instance)) {
        if((npc(vmMethod)->flags & Modifier::STATIC) != 0) {
            instance = nullptr;
        }
        if(arguments == nullptr) {
            if(npc(vmMethod)->parameterCount > 0) {
                throw new ::java::lang::NullPointerException();
            }
            arguments = new ::java::lang::ObjectArray(int32_t(0));
        }
        if(npc(arguments)->length == npc(vmMethod)->parameterCount) {
            return invoke(vmMethod, instance, arguments);
        } else {
            throw new ::java::lang::ArrayIndexOutOfBoundsException();
        }
    } else {
        throw new ::java::lang::IllegalArgumentException();
    }
}

java::lang::Class* java::lang::reflect::Method::getReturnType()
{
    for (auto i = int32_t(0); i < npc(npc(vmMethod)->spec)->length - int32_t(1); ++i) {
        if((*npc(vmMethod)->spec)[i] == u')') {
            return ::avian::Classes::forCanonicalName(npc(npc(vmMethod)->class__)->loader, new ::java::lang::String(npc(vmMethod)->spec, i + int32_t(1), npc(npc(vmMethod)->spec)->length - i - int32_t(2), false));
        }
    }
    throw new ::java::lang::RuntimeException();
}

/* <T extends Annotation> */java::lang::annotation::Annotation* java::lang::reflect::Method::getAnnotation(::java::lang::Class* class__)
{
    if(npc(vmMethod)->hasAnnotations()) {
        auto table = java_cast< ::java::lang::ObjectArray* >(npc(npc(vmMethod)->addendum)->annotationTable);
        for (auto i = int32_t(0); i < npc(table)->length; ++i) {
            auto a = java_cast< ::java::lang::ObjectArray* >((*table)[i]);
            if((*a)[int32_t(1)] == static_cast< ::java::lang::Object* >(class__)) {
                return java_cast< ::java::lang::annotation::Annotation* >(::avian::Classes::getAnnotation(npc(npc(vmMethod)->class__)->loader, a));
            }
        }
    }
    return nullptr;
}

java::lang::annotation::AnnotationArray* java::lang::reflect::Method::getAnnotations()
{
    if(npc(vmMethod)->hasAnnotations()) {
        auto table = java_cast< ::java::lang::ObjectArray* >(npc(npc(vmMethod)->addendum)->annotationTable);
        auto array = new ::java::lang::annotation::AnnotationArray(npc(table)->length);
        for (auto i = int32_t(0); i < npc(table)->length; ++i) {
            array->set(i, ::avian::Classes::getAnnotation(npc(npc(vmMethod)->class__)->loader, java_cast< ::java::lang::ObjectArray* >((*table)[i])));
        }
        return array;
    } else {
        return new ::java::lang::annotation::AnnotationArray(int32_t(0));
    }
}

java::lang::annotation::AnnotationArray* java::lang::reflect::Method::getDeclaredAnnotations()
{
    return getAnnotations();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::reflect::Method::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.reflect.Method", 24);
    return c;
}

void java::lang::reflect::Method::setAccessible(AccessibleObjectArray* array, bool v)
{
    super::setAccessible(array, v);
}

java::lang::Class* java::lang::reflect::Method::getClass0()
{
    return class_();
}

