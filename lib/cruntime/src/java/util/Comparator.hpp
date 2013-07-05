// Generated from /runtime/java/util/Comparator.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::util::Comparator
    : public virtual ::java::lang::Object
{
    virtual int32_t compare(::java::lang::Object* o1, ::java::lang::Object* o2) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
