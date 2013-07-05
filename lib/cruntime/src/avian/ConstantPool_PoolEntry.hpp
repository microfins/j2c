// Generated from /runtime/avian/ConstantPool.java

#pragma once

#include <avian/fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct avian::ConstantPool_PoolEntry
    : public virtual ::java::lang::Object
{
    virtual void writeTo(::java::io::OutputStream* out) /* throws(IOException) */ = 0;

    // Generated
    static ::java::lang::Class *class_();
};
