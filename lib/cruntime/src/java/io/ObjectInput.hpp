// Generated from /runtime/java/io/ObjectInput.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::io::ObjectInput
    : public virtual ::java::lang::Object
{
    virtual int32_t available() = 0;
    virtual void close() = 0;
    virtual void read() = 0;
    virtual void read(::int8_tArray* b) = 0;
    virtual void read(::int8_tArray* b, int32_t off, int32_t len) = 0;
    virtual ::java::lang::Object* readObject() = 0;
    virtual int64_t skip(int64_t n) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
