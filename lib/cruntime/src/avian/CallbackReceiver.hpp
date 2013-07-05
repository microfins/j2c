// Generated from /runtime/avian/CallbackReceiver.java

#pragma once

#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct avian::CallbackReceiver
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::Object* receive(Callback* callback) /* throws(Exception) */ = 0;

    // Generated
    static ::java::lang::Class *class_();
};
