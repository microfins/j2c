// Generated from /runtime/java/lang/annotation/RetentionPolicy.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/annotation/fwd-runtime.hpp>
#include <java/lang/Enum.hpp>

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

struct default_init_tag;

class java::lang::annotation::RetentionPolicy final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static RetentionPolicy *CLASS;
    static RetentionPolicy *RUNTIME;
    static RetentionPolicy *SOURCE;

    // Generated

public:
    RetentionPolicy(::java::lang::String* name, int ordinal);
protected:
    RetentionPolicy(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static RetentionPolicy* valueOf(::java::lang::String* a0);
    static RetentionPolicyArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
