// Generated from /runtime/java/io/ByteArrayOutputStream.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/io/OutputStream.hpp>

struct default_init_tag;

class java::io::ByteArrayOutputStream
    : public OutputStream
{

public:
    typedef OutputStream super;

private:
    static constexpr int32_t BufferSize { int32_t(32) };
    ByteArrayOutputStream_Cell* chain {  };
    int32_t length {  };
    ::int8_tArray* buffer {  };
    int32_t position {  };
protected:
    void ctor(int32_t capacity);
    void ctor();

public:
    virtual void reset();
    virtual int32_t size();
    void write(int32_t c) override;

private:
    ::int8_tArray* copy(::int8_tArray* b, int32_t offset, int32_t length);

public:
    void write(::int8_tArray* b, int32_t offset, int32_t length) override;

private:
    void flushBuffer();

public:
    virtual ::int8_tArray* toByteArray_();
    virtual ::java::lang::String* toString(::java::lang::String* encoding) /* throws(UnsupportedEncodingException) */;

    // Generated
    ByteArrayOutputStream(int32_t capacity);
    ByteArrayOutputStream();
protected:
    ByteArrayOutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void write(::int8_tArray* buffer);
    virtual ::java::lang::String* toString();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ByteArrayOutputStream_Cell;
};
