// Generated from /runtime/java/io/Writer.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Closeable.hpp>
#include <java/io/Flushable.hpp>

struct default_init_tag;

class java::io::Writer
    : public virtual ::java::lang::Object
    , public virtual Closeable
    , public virtual Flushable
{

public:
    typedef ::java::lang::Object super;
    virtual void write(int32_t c) /* throws(IOException) */;
    virtual void write(::char16_tArray* buffer) /* throws(IOException) */;
    virtual void write(::java::lang::String* s) /* throws(IOException) */;
    virtual void write(::java::lang::String* s, int32_t offset, int32_t length) /* throws(IOException) */;
    virtual void write(::char16_tArray* buffer, int32_t offset, int32_t length) /* throws(IOException) */ = 0;
    /*void flush(); (already declared) */
    /*void close(); (already declared) */

    // Generated
    Writer();
protected:
    Writer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
