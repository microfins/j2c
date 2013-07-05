// Generated from /runtime/java/nio/DirectByteBuffer.java
#include <java/nio/DirectByteBuffer.hpp>

#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <sun/misc/Unsafe.hpp>
#include <Array.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::nio::DirectByteBuffer::DirectByteBuffer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::DirectByteBuffer::DirectByteBuffer(int64_t address, int32_t capacity, bool readOnly) 
    : DirectByteBuffer(*static_cast< ::default_init_tag* >(0))
{
    ctor(address,capacity,readOnly);
}

java::nio::DirectByteBuffer::DirectByteBuffer(int64_t address, int32_t capacity) 
    : DirectByteBuffer(*static_cast< ::default_init_tag* >(0))
{
    ctor(address,capacity);
}

sun::misc::Unsafe*& java::nio::DirectByteBuffer::unsafe()
{
    clinit();
    return unsafe_;
}
sun::misc::Unsafe* java::nio::DirectByteBuffer::unsafe_;

int32_t& java::nio::DirectByteBuffer::baseOffset()
{
    clinit();
    return baseOffset_;
}
int32_t java::nio::DirectByteBuffer::baseOffset_;

void java::nio::DirectByteBuffer::ctor(int64_t address, int32_t capacity, bool readOnly)
{
    super::ctor(readOnly);
    this->address = address;
    this->capacity_ = capacity;
    this->limit_ = capacity;
    this->position_ = 0;
}

void java::nio::DirectByteBuffer::ctor(int64_t address, int32_t capacity)
{
    ctor(address, capacity, false);
}

java::nio::ByteBuffer* java::nio::DirectByteBuffer::asReadOnlyBuffer()
{
    ByteBuffer* b = new DirectByteBuffer(address, capacity_, true);
    npc(b)->position(position());
    npc(b)->limit(limit());
    return b;
}

java::nio::ByteBuffer* java::nio::DirectByteBuffer::slice()
{
    return new DirectByteBuffer(address + position_, remaining(), true);
}

void java::nio::DirectByteBuffer::doPut(int32_t position, int8_t val)
{
    npc(unsafe_)->putByte(address + position, val);
}

java::nio::ByteBuffer* java::nio::DirectByteBuffer::put(ByteBuffer* src)
{
    if(dynamic_cast< DirectByteBuffer* >(src) != nullptr) {
        checkPut(position_, npc(src)->remaining());
        auto b = java_cast< DirectByteBuffer* >(src);
        npc(unsafe_)->copyMemory(npc(b)->address + npc(b)->position_, address + position_, npc(b)->remaining());
        position_ += npc(b)->remaining();
        npc(b)->position_ += npc(b)->remaining();
        return this;
    } else {
        return super::put(src);
    }
}

java::nio::ByteBuffer* java::nio::DirectByteBuffer::put(::int8_tArray* src, int32_t offset, int32_t length)
{
    if(offset < 0 || offset + length > npc(src)->length) {
        throw new ::java::lang::ArrayIndexOutOfBoundsException();
    }
    checkPut(position_, length);
    npc(unsafe_)->copyMemory(src, baseOffset_ + offset, nullptr, address + position_, length);
    position_ += length;
    return this;
}

java::nio::ByteBuffer* java::nio::DirectByteBuffer::get(::int8_tArray* dst, int32_t offset, int32_t length)
{
    if(offset < 0 || offset + length > npc(dst)->length) {
        throw new ::java::lang::ArrayIndexOutOfBoundsException();
    }
    checkGet(position_, length);
    npc(unsafe_)->copyMemory(nullptr, address + position_, dst, baseOffset_ + offset, length);
    return this;
}

int8_t java::nio::DirectByteBuffer::doGet(int32_t position)
{
    return npc(unsafe_)->getByte(address + position);
}

java::lang::String* java::nio::DirectByteBuffer::toString()
{
    return ::java::lang::StringBuilder().append(u"(DirectByteBuffer with address: "_j)->append(address)
        ->append(u" position: "_j)
        ->append(position_)
        ->append(u" limit: "_j)
        ->append(limit_)
        ->append(u" capacity: "_j)
        ->append(capacity_)
        ->append(u")"_j)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::DirectByteBuffer::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.DirectByteBuffer", 25);
    return c;
}

void java::nio::DirectByteBuffer::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        unsafe_ = ::sun::misc::Unsafe::getUnsafe();
        baseOffset_ = npc(unsafe_)->arrayBaseOffset(int8_tArray::class_());
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int8_t java::nio::DirectByteBuffer::get()
{
    return super::get();
}

int8_t java::nio::DirectByteBuffer::get(int32_t position)
{
    return super::get(position);
}

java::nio::ByteBuffer* java::nio::DirectByteBuffer::get(::int8_tArray* dst)
{
    return super::get(dst);
}

java::nio::ByteBuffer* java::nio::DirectByteBuffer::put(int32_t offset, int8_t val)
{
    return super::put(offset, val);
}

java::nio::ByteBuffer* java::nio::DirectByteBuffer::put(int8_t val)
{
    return super::put(val);
}

java::nio::ByteBuffer* java::nio::DirectByteBuffer::put(::int8_tArray* arr)
{
    return super::put(arr);
}

java::lang::Class* java::nio::DirectByteBuffer::getClass0()
{
    return class_();
}

