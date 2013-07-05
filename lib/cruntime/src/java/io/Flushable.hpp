// Generated from /runtime/java/io/Flushable.java

#pragma once

#include <java/io/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::io::Flushable
    : public virtual ::java::lang::Object
{
    virtual void flush() /* throws(IOException) */ = 0;

    // Generated
    static ::java::lang::Class *class_();
};
