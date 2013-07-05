// Generated from /runtime/java/io/BufferedOutputStream.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/io/OutputStream.hpp>

struct default_init_tag;

class java::io::BufferedOutputStream
    : public OutputStream
{

public:
    typedef OutputStream super;

private:
    OutputStream* out {  };
    ::int8_tArray* buffer {  };
    int32_t position {  };
protected:
    void ctor(OutputStream* out, int32_t size);
    void ctor(OutputStream* out);

private:
    void drain() /* throws(IOException) */;

public:
    void write(int32_t c) /* throws(IOException) */ override;
    void write(::int8_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */ override;
    void flush() /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

    // Generated
    BufferedOutputStream(OutputStream* out, int32_t size);
    BufferedOutputStream(OutputStream* out);
protected:
    BufferedOutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void write(::int8_tArray* buffer);

private:
    virtual ::java::lang::Class* getClass0();
};
