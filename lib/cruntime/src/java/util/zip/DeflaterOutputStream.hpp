// Generated from /runtime/java/util/zip/DeflaterOutputStream.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/util/zip/fwd-runtime.hpp>
#include <java/io/OutputStream.hpp>

struct default_init_tag;

class java::util::zip::DeflaterOutputStream
    : public ::java::io::OutputStream
{

public:
    typedef ::java::io::OutputStream super;

private:
    ::java::io::OutputStream* out {  };
    Deflater* deflater {  };
    ::int8_tArray* buffer {  };
protected:
    void ctor(::java::io::OutputStream* out, Deflater* deflater, int32_t bufferSize);
    void ctor(::java::io::OutputStream* out, Deflater* deflater);
    void ctor(::java::io::OutputStream* out);

public:
    void write(int32_t b) /* throws(IOException) */ override;
    void write(::int8_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */ override;

private:
    void deflate() /* throws(IOException) */;

public:
    void close() /* throws(IOException) */ override;

    // Generated
    DeflaterOutputStream(::java::io::OutputStream* out, Deflater* deflater, int32_t bufferSize);
    DeflaterOutputStream(::java::io::OutputStream* out, Deflater* deflater);
    DeflaterOutputStream(::java::io::OutputStream* out);
protected:
    DeflaterOutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void write(::int8_tArray* buffer);

private:
    virtual ::java::lang::Class* getClass0();
};
