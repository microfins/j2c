// Generated from /runtime/java/lang/annotation/Target.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/annotation/fwd-runtime.hpp>
#include <java/lang/annotation/Annotation.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray > EnumArray;

        namespace annotation
        {
typedef ::SubArray< ::java::lang::annotation::ElementType, ::java::lang::EnumArray > ElementTypeArray;
        } // annotation
    } // lang
} // java

struct java::lang::annotation::Target
    : public virtual Annotation
{
    virtual ElementTypeArray* value() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
