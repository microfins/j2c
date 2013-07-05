// Generated from /runtime/java/io/ByteArrayOutputStream.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::io::ByteArrayOutputStream_Cell
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    ::int8_tArray* array {  };
    int32_t offset {  };
    int32_t length {  };
    ByteArrayOutputStream_Cell* next {  };
protected:
    void ctor(::int8_tArray* array, int32_t offset, int32_t length, ByteArrayOutputStream_Cell* next);

    // Generated

public:
    ByteArrayOutputStream_Cell(::int8_tArray* array, int32_t offset, int32_t length, ByteArrayOutputStream_Cell* next);
protected:
    ByteArrayOutputStream_Cell(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ByteArrayOutputStream;
};
