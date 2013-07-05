// Generated from /runtime/java/nio/channels/Channel.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/nio/channels/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::nio::channels::Channel
    : public virtual ::java::lang::Object
{
    virtual void close() /* throws(IOException) */ = 0;
    virtual bool isOpen() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
