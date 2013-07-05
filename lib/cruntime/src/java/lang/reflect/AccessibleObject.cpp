// Generated from /runtime/java/lang/reflect/AccessibleObject.java
#include <java/lang/reflect/AccessibleObject.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/annotation/Annotation.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
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

java::lang::reflect::AccessibleObject::AccessibleObject(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::reflect::AccessibleObject::AccessibleObject()
    : AccessibleObject(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t java::lang::reflect::AccessibleObject::Accessible;

bool java::lang::reflect::AccessibleObject::isAnnotationPresent(::java::lang::Class* class__)
{
    return java_cast< ::java::lang::annotation::Annotation* >(getAnnotation(class__)) != nullptr;
}

void java::lang::reflect::AccessibleObject::setAccessible(AccessibleObjectArray* array, bool v)
{
    clinit();
    for(auto o : *npc(array)) 
                npc(o)->setAccessible(v);

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::reflect::AccessibleObject::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.reflect.AccessibleObject", 34);
    return c;
}

java::lang::Class* java::lang::reflect::AccessibleObject::getClass0()
{
    return class_();
}

