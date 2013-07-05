// Generated from /runtime/java/lang/Comparable.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::lang::Comparable
    : public virtual Object
{
    virtual int32_t compareTo(Object* o) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
