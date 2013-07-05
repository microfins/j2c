// Generated from /runtime/avian/Stream.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class avian::Stream
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static void write1(::java::io::OutputStream* out, int32_t v) /* throws(IOException) */;
    static int32_t read1(::java::io::InputStream* in) /* throws(IOException) */;
    static void write2(::java::io::OutputStream* out, int32_t v) /* throws(IOException) */;
    static int32_t read2(::java::io::InputStream* in) /* throws(IOException) */;
    static void write4(::java::io::OutputStream* out, int32_t v) /* throws(IOException) */;
    static int32_t read4(::java::io::InputStream* in) /* throws(IOException) */;
    static void write8(::java::io::OutputStream* out, int64_t v) /* throws(IOException) */;
    static int64_t read8(::java::io::InputStream* in) /* throws(IOException) */;
    static void set4(::int8_tArray* array, int32_t offset, int32_t v);

    // Generated
    Stream();
protected:
    Stream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
