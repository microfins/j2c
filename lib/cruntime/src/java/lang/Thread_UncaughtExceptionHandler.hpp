// Generated from /runtime/java/lang/Thread.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::lang::Thread_UncaughtExceptionHandler
    : public virtual Object
{
    virtual void uncaughtException(Thread* t, Throwable* e) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
