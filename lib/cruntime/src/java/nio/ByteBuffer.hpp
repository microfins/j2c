// Generated from /runtime/java/nio/ByteBuffer.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/nio/fwd-runtime.hpp>
#include <java/nio/Buffer.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class java::nio::ByteBuffer
    : public Buffer
    , public virtual ::java::lang::Comparable
{

public:
    typedef Buffer super;

private:
    bool readOnly {  };
protected:
    void ctor(bool readOnly);

public:
    static ByteBuffer* allocate(int32_t capacity);
    static ByteBuffer* allocateDirect(int32_t capacity);
    static ByteBuffer* wrap(::int8_tArray* array);
    static ByteBuffer* wrap(::int8_tArray* array, int32_t offset, int32_t length);
    virtual ByteBuffer* asReadOnlyBuffer() = 0;
    virtual ByteBuffer* slice() = 0;

public: /* protected */
    virtual void doPut(int32_t offset, int8_t val) = 0;

public:
    virtual ByteBuffer* put(::int8_tArray* arr, int32_t offset, int32_t len) = 0;

public: /* protected */
    virtual int8_t doGet(int32_t offset) = 0;

public:
    virtual ByteBuffer* get(::int8_tArray* dst, int32_t offset, int32_t length) = 0;
    virtual bool hasArray_();
    virtual ByteBuffer* compact();
    virtual ByteBuffer* put(ByteBuffer* src);
    virtual int32_t compareTo(ByteBuffer* o);
    bool equals(::java::lang::Object* o) override;
    virtual ::int8_tArray* array();
    virtual int32_t arrayOffset();
    virtual ByteBuffer* put(int32_t offset, int8_t val);
    virtual ByteBuffer* put(int8_t val);
    virtual ByteBuffer* put(::int8_tArray* arr);
    virtual ByteBuffer* putLong(int32_t position, int64_t val);
    virtual ByteBuffer* putInt(int32_t position, int32_t val);
    virtual ByteBuffer* putShort(int32_t position, int16_t val);
    virtual ByteBuffer* putLong(int64_t val);
    virtual ByteBuffer* putInt(int32_t val);
    virtual ByteBuffer* putShort(int16_t val);
    virtual int8_t get();
    virtual int8_t get(int32_t position);
    virtual ByteBuffer* get(::int8_tArray* dst);
    virtual int64_t getLong(int32_t position);
    virtual int32_t getInt(int32_t position);
    virtual int16_t getShort(int32_t position);
    virtual int64_t getLong();
    virtual int32_t getInt();
    virtual int16_t getShort();

public: /* protected */
    virtual void checkPut(int32_t position, int32_t amount);
    virtual void checkGet(int32_t position, int32_t amount);

    // Generated
    ByteBuffer(bool readOnly);
protected:
    ByteBuffer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(::java::lang::Object* o) override;

private:
    virtual ::java::lang::Class* getClass0();
};
