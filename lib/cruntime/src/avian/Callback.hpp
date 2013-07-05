// Generated from /runtime/avian/Callback.java

#pragma once

#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct avian::Callback
    : public virtual ::java::lang::Object
{
    virtual void handleResult(::java::lang::Object* result) = 0;
    virtual void handleException(::java::lang::Throwable* exception) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
