// Generated from /runtime/java/nio/FixedArrayByteBuffer.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/nio/fwd-runtime.hpp>
#include <java/nio/DirectByteBuffer.hpp>

struct default_init_tag;

class java::nio::FixedArrayByteBuffer
    : public DirectByteBuffer
{

public:
    typedef DirectByteBuffer super;

private:
    ::int8_tArray* array {  };
    int32_t arrayOffset {  };
protected:
    void ctor(int64_t address, ::int8_tArray* array, int32_t offset, int32_t capacity, bool readOnly);

public:
    static FixedArrayByteBuffer* make(int32_t capacity);

private:
    static ::int8_tArray* allocateFixed(int32_t capacity, ::int64_tArray* address);

public:
    ByteBuffer* asReadOnlyBuffer() override;
    ByteBuffer* slice() override;
    ::java::lang::String* toString() override;

    // Generated

private:
    FixedArrayByteBuffer(int64_t address, ::int8_tArray* array, int32_t offset, int32_t capacity, bool readOnly);
protected:
    FixedArrayByteBuffer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
