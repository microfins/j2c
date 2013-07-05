// Generated from /runtime/java/security/PrivilegedAction.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/security/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::security::PrivilegedAction
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::Object* run() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
