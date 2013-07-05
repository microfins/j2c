// Generated from /runtime/java/nio/DirectByteBuffer.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/nio/fwd-runtime.hpp>
#include <sun/misc/fwd-runtime.hpp>
#include <java/nio/ByteBuffer.hpp>

struct default_init_tag;

class java::nio::DirectByteBuffer
    : public ByteBuffer
{

public:
    typedef ByteBuffer super;

private:
    static ::sun::misc::Unsafe* unsafe_;
    static int32_t baseOffset_;

public: /* protected */
    int64_t address {  };
protected:
    void ctor(int64_t address, int32_t capacity, bool readOnly);
    void ctor(int64_t address, int32_t capacity);

public:
    ByteBuffer* asReadOnlyBuffer() override;
    ByteBuffer* slice() override;

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

public: /* protected */
    DirectByteBuffer(int64_t address, int32_t capacity, bool readOnly);
    DirectByteBuffer(int64_t address, int32_t capacity);
protected:
    DirectByteBuffer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual int8_t get();
    virtual int8_t get(int32_t position);
    virtual ByteBuffer* get(::int8_tArray* dst);
    virtual ByteBuffer* put(int32_t offset, int8_t val);
    virtual ByteBuffer* put(int8_t val);
    virtual ByteBuffer* put(::int8_tArray* arr);

private:
    static ::sun::misc::Unsafe*& unsafe();
    static int32_t& baseOffset();
    virtual ::java::lang::Class* getClass0();
};
