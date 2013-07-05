// Generated from /runtime/java/util/concurrent/Callable.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/util/concurrent/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::util::concurrent::Callable
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::Object* call() /* throws(Exception) */ = 0;

    // Generated
    static ::java::lang::Class *class_();
};
