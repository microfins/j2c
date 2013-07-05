// Generated from /runtime/java/io/ByteArrayInputStream.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/io/InputStream.hpp>

struct default_init_tag;

class java::io::ByteArrayInputStream
    : public InputStream
{

public:
    typedef InputStream super;

private:
    ::int8_tArray* array {  };
    int32_t position {  };
    int32_t limit {  };
protected:
    void ctor(::int8_tArray* array, int32_t offset, int32_t length);
    void ctor(::int8_tArray* array);

public:
    int32_t read() override;
    int32_t read(::int8_tArray* buffer, int32_t offset, int32_t bufferLength) override;
    int32_t available() override;

    // Generated
    ByteArrayInputStream(::int8_tArray* array, int32_t offset, int32_t length);
    ByteArrayInputStream(::int8_tArray* array);
protected:
    ByteArrayInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t read(::int8_tArray* buffer);

private:
    virtual ::java::lang::Class* getClass0();
};
