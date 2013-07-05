// Generated from /runtime/java/lang/reflect/Member.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/reflect/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::lang::reflect::Member
    : public virtual ::java::lang::Object
{
    static constexpr int32_t PUBLIC { int32_t(0) };
    static constexpr int32_t DECLARED { int32_t(1) };
    virtual ::java::lang::Class* getDeclaringClass() = 0;
    virtual int32_t getModifiers() = 0;
    virtual ::java::lang::String* getName() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
