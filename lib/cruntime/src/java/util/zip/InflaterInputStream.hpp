// Generated from /runtime/java/util/zip/InflaterInputStream.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/util/zip/fwd-runtime.hpp>
#include <java/io/InputStream.hpp>

struct default_init_tag;

class java::util::zip::InflaterInputStream
    : public ::java::io::InputStream
{

public:
    typedef ::java::io::InputStream super;

private:
    ::java::io::InputStream* in {  };
    Inflater* inflater {  };
    ::int8_tArray* buffer {  };
protected:
    void ctor(::java::io::InputStream* in, Inflater* inflater, int32_t bufferSize);
    void ctor(::java::io::InputStream* in, Inflater* inflater);
    void ctor(::java::io::InputStream* in);

public:
    int32_t read() /* throws(IOException) */ override;
    int32_t read(::int8_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */ override;
    int32_t available() /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

    // Generated
    InflaterInputStream(::java::io::InputStream* in, Inflater* inflater, int32_t bufferSize);
    InflaterInputStream(::java::io::InputStream* in, Inflater* inflater);
    InflaterInputStream(::java::io::InputStream* in);
protected:
    InflaterInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t read(::int8_tArray* buffer);

private:
    virtual ::java::lang::Class* getClass0();
};
