// Generated from /runtime/java/lang/annotation/RetentionPolicy.java
#include <java/lang/annotation/RetentionPolicy.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray > EnumArray;

        namespace annotation
        {
typedef ::SubArray< ::java::lang::annotation::RetentionPolicy, ::java::lang::EnumArray > RetentionPolicyArray;
        } // annotation
    } // lang
} // java

java::lang::annotation::RetentionPolicy::RetentionPolicy(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::annotation::RetentionPolicy::RetentionPolicy(::java::lang::String* name, int ordinal)
    : RetentionPolicy(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

java::lang::annotation::RetentionPolicy* java::lang::annotation::RetentionPolicy::CLASS = new ::java::lang::annotation::RetentionPolicy(u"CLASS"_j, 0);
java::lang::annotation::RetentionPolicy* java::lang::annotation::RetentionPolicy::RUNTIME = new ::java::lang::annotation::RetentionPolicy(u"RUNTIME"_j, 1);
java::lang::annotation::RetentionPolicy* java::lang::annotation::RetentionPolicy::SOURCE = new ::java::lang::annotation::RetentionPolicy(u"SOURCE"_j, 2);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::annotation::RetentionPolicy::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.annotation.RetentionPolicy", 36);
    return c;
}

java::lang::annotation::RetentionPolicy* java::lang::annotation::RetentionPolicy::valueOf(::java::lang::String* a0)
{
    if(CLASS->toString()->equals(a0))
        return CLASS;
    if(RUNTIME->toString()->equals(a0))
        return RUNTIME;
    if(SOURCE->toString()->equals(a0))
        return SOURCE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

java::lang::annotation::RetentionPolicyArray* java::lang::annotation::RetentionPolicy::values()
{
    return new java::lang::annotation::RetentionPolicyArray({
        CLASS,
        RUNTIME,
        SOURCE,
    });
}

java::lang::Class* java::lang::annotation::RetentionPolicy::getClass0()
{
    return class_();
}

