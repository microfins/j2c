// Generated from /runtime/java/lang/reflect/InvocationHandler.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/reflect/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::lang::reflect::InvocationHandler
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::Object* invoke(::java::lang::Object* proxy, Method* method, ::java::lang::ObjectArray* arguments) /* throws(Throwable) */ = 0;

    // Generated
    static ::java::lang::Class *class_();
};
