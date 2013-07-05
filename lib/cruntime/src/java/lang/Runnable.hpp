// Generated from /runtime/java/lang/Runnable.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::lang::Runnable
    : public virtual Object
{
    virtual void run() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
