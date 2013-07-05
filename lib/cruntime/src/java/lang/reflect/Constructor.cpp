// Generated from /runtime/java/lang/reflect/Constructor.java
#include <java/lang/reflect/Constructor.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/annotation/Annotation.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <java/lang/reflect/Method.hpp>
#include <java/lang/reflect/Type.hpp>
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

java::lang::reflect::Constructor::Constructor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::reflect::Constructor::Constructor(Method* method) 
    : Constructor(*static_cast< ::default_init_tag* >(0))
{
    ctor(method);
}

void java::lang::reflect::Constructor::ctor(Method* method)
{
    super::ctor();
    this->method = method;
}

bool java::lang::reflect::Constructor::equals(::java::lang::Object* o)
{
    return dynamic_cast< Constructor* >(o) != nullptr && npc(npc((java_cast< Constructor* >(o)))->method)->equals(method);
}

bool java::lang::reflect::Constructor::isAccessible()
{
    return npc(method)->isAccessible();
}

void java::lang::reflect::Constructor::setAccessible(bool v)
{
    npc(method)->setAccessible(v);
}

java::lang::Class* java::lang::reflect::Constructor::getDeclaringClass()
{
    return npc(method)->getDeclaringClass();
}

java::lang::ClassArray* java::lang::reflect::Constructor::getParameterTypes()
{
    return npc(method)->getParameterTypes();
}

int32_t java::lang::reflect::Constructor::getModifiers()
{
    return npc(method)->getModifiers();
}

java::lang::String* java::lang::reflect::Constructor::getName()
{
    return npc(method)->getName();
}

/* <T extends Annotation> */java::lang::annotation::Annotation* java::lang::reflect::Constructor::getAnnotation(::java::lang::Class* class__)
{
    return java_cast< ::java::lang::annotation::Annotation* >(npc(method)->getAnnotation(static_cast< ::java::lang::Class* >(class__)));
}

java::lang::annotation::AnnotationArray* java::lang::reflect::Constructor::getAnnotations()
{
    return npc(method)->getAnnotations();
}

java::lang::annotation::AnnotationArray* java::lang::reflect::Constructor::getDeclaredAnnotations()
{
    return npc(method)->getDeclaredAnnotations();
}

java::lang::Object* java::lang::reflect::Constructor::newInstance(::java::lang::ObjectArray*/*...*/ arguments) /* throws(InvocationTargetException, InstantiationException, IllegalAccessException) */
{
    auto v = java_cast< ::java::lang::Object* >(make(npc(npc(method)->getDeclaringClass())->vmClass));
    npc(method)->invoke(v, arguments);
    return v;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::reflect::Constructor::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.reflect.Constructor", 29);
    return c;
}

void java::lang::reflect::Constructor::setAccessible(AccessibleObjectArray* array, bool v)
{
    super::setAccessible(array, v);
}

java::lang::Class* java::lang::reflect::Constructor::getClass0()
{
    return class_();
}

