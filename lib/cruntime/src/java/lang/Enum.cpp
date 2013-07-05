// Generated from /runtime/java/lang/Enum.java
#include <java/lang/Enum.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Error.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
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
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray > EnumArray;
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

java::lang::Enum::Enum(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Enum::Enum(String* name, int32_t ordinal) 
    : Enum(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,ordinal);
}

void java::lang::Enum::ctor(String* name, int32_t ordinal)
{
    super::ctor();
    this->name_ = name;
    this->ordinal_ = ordinal;
}

int32_t java::lang::Enum::compareTo(Enum* other)
{
    if(getDeclaringClass() != npc(other)->getDeclaringClass()) {
        throw new ClassCastException();
    }
    return ordinal_ - npc(other)->ordinal_;
}

int32_t java::lang::Enum::compareTo(Object* o)
{ 
    return compareTo(dynamic_cast< Enum* >(o));
}

/* <T extends Enum<T>> */java::lang::Enum* java::lang::Enum::valueOf(Class* enumType, String* name)
{
    clinit();
    if(name == nullptr)
        throw new NullPointerException(u"name"_j);

    if(!npc(enumType)->isEnum())
        throw new IllegalArgumentException(::java::lang::StringBuilder().append(npc(enumType)->getCanonicalName())->append(u" is not an enum."_j)->toString());

    try {
        auto method = npc(enumType)->getMethod(u"values"_j, new ClassArray());
        auto values = java_cast< EnumArray* >(npc(method)->invoke(nullptr, new ObjectArray()));
        for(auto value : *npc(values)) {
            if(npc(name)->equals(static_cast< Object* >(npc(value)->name_))) {
                return java_cast< Enum* >(value);
            }
        }
    } catch (Exception* ex) {
        throw new Error(static_cast< Throwable* >(ex));
    }
    throw new IllegalArgumentException(::java::lang::StringBuilder().append(npc(enumType)->getCanonicalName())->append(u"."_j)
        ->append(name)
        ->append(u" is not an enum constant."_j)->toString());
}

int32_t java::lang::Enum::ordinal()
{
    return ordinal_;
}

java::lang::String* java::lang::Enum::name()
{
    return name_;
}

java::lang::String* java::lang::Enum::toString()
{
    return name_;
}

java::lang::Class* java::lang::Enum::getDeclaringClass()
{
    auto c = getClass();
    while (static_cast< Object* >(npc(c)->getSuperclass()) != static_cast< Object* >(Enum::class_())) {
        c = npc(c)->getSuperclass();
    }
    return c;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Enum::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Enum", 14);
    return c;
}

java::lang::Class* java::lang::Enum::getClass0()
{
    return class_();
}

