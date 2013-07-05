// Generated from /runtime/java/io/BufferedInputStream.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/io/InputStream.hpp>

struct default_init_tag;

class java::io::BufferedInputStream
    : public InputStream
{

public:
    typedef InputStream super;

private:
    InputStream* in {  };
    ::int8_tArray* buffer {  };
    int32_t position {  };
    int32_t limit {  };
protected:
    void ctor(InputStream* in, int32_t size);
    void ctor(InputStream* in);

private:
    void fill() /* throws(IOException) */;

public:
    int32_t read() /* throws(IOException) */ override;
    int32_t read(::int8_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */ override;
    int32_t available() /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

    // Generated
    BufferedInputStream(InputStream* in, int32_t size);
    BufferedInputStream(InputStream* in);
protected:
    BufferedInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t read(::int8_tArray* buffer);

private:
    virtual ::java::lang::Class* getClass0();
};
