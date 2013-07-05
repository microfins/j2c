// Generated from /runtime/java/io/Closeable.java

#pragma once

#include <java/io/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::io::Closeable
    : public virtual ::java::lang::Object
{
    virtual void close() /* throws(IOException) */ = 0;

    // Generated
    static ::java::lang::Class *class_();
};
