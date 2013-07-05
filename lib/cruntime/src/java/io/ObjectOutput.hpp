// Generated from /runtime/java/io/ObjectOutput.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::io::ObjectOutput
    : public virtual ::java::lang::Object
{
    virtual void close() = 0;
    virtual void flush() = 0;
    virtual void write(::int8_tArray* b) = 0;
    virtual void write(::int8_tArray* b, int32_t off, int32_t len) = 0;
    virtual void write(int32_t b) = 0;
    virtual void writeObject(::java::lang::Object* obj) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
