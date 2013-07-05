// Generated from /runtime/java/nio/ArrayByteBuffer.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/nio/fwd-runtime.hpp>
#include <java/nio/ByteBuffer.hpp>

struct default_init_tag;

class java::nio::ArrayByteBuffer
    : public ByteBuffer
{

public:
    typedef ByteBuffer super;

private:
    ::int8_tArray* array_ {  };
    int32_t arrayOffset_ {  };
protected:
    void ctor(::int8_tArray* array, int32_t offset, int32_t length, bool readOnly);

public:
    ByteBuffer* asReadOnlyBuffer() override;
    bool hasArray_() override;
    ::int8_tArray* array() override;
    ByteBuffer* slice() override;
    int32_t arrayOffset() override;

public: /* protected */
    void doPut(int32_t position, int8_t val) override;

public:
    ByteBuffer* put(ByteBuffer* src) override;
    ByteBuffer* put(::int8_tArray* src, int32_t offset, int32_t length) override;
    ByteBuffer* get(::int8_tArray* dst, int32_t offset, int32_t length) override;

public: /* protected */
    int8_t doGet(int32_t position) override;

public:
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    ArrayByteBuffer(::int8_tArray* array, int32_t offset, int32_t length, bool readOnly);
protected:
    ArrayByteBuffer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int8_t get();
    virtual int8_t get(int32_t position);
    virtual ByteBuffer* get(::int8_tArray* dst);
    virtual ByteBuffer* put(int32_t offset, int8_t val);
    virtual ByteBuffer* put(int8_t val);
    virtual ByteBuffer* put(::int8_tArray* arr);

private:
    virtual ::java::lang::Class* getClass0();
};
