// Generated from /runtime/java/nio/ByteBuffer.java
#include <java/nio/ByteBuffer.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/nio/ArrayByteBuffer.hpp>
#include <java/nio/Buffer.hpp>
#include <java/nio/FixedArrayByteBuffer.hpp>
#include <java/nio/ReadOnlyBufferException.hpp>
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

java::nio::ByteBuffer::ByteBuffer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::ByteBuffer::ByteBuffer(bool readOnly) 
    : ByteBuffer(*static_cast< ::default_init_tag* >(0))
{
    ctor(readOnly);
}

void java::nio::ByteBuffer::ctor(bool readOnly)
{
    super::ctor();
    this->readOnly = readOnly;
}

java::nio::ByteBuffer* java::nio::ByteBuffer::allocate(int32_t capacity)
{
    clinit();
    return new ArrayByteBuffer(new ::int8_tArray(capacity), int32_t(0), capacity, false);
}

java::nio::ByteBuffer* java::nio::ByteBuffer::allocateDirect(int32_t capacity)
{
    clinit();
    return FixedArrayByteBuffer::make(capacity);
}

java::nio::ByteBuffer* java::nio::ByteBuffer::wrap(::int8_tArray* array)
{
    clinit();
    return wrap(array, 0, npc(array)->length);
}

java::nio::ByteBuffer* java::nio::ByteBuffer::wrap(::int8_tArray* array, int32_t offset, int32_t length)
{
    clinit();
    return new ArrayByteBuffer(array, offset, length, false);
}

bool java::nio::ByteBuffer::hasArray_()
{
    return false;
}

java::nio::ByteBuffer* java::nio::ByteBuffer::compact()
{
    auto remaining = static_cast< Buffer* >(this)->remaining();
    if(position_ != 0) {
        auto b = slice();
        position_ = 0;
        put(b);
    }
    position_ = remaining;
    limit(capacity());
    return this;
}

java::nio::ByteBuffer* java::nio::ByteBuffer::put(ByteBuffer* src)
{
    if(npc(src)->hasArray_()) {
        checkPut(position_, npc(src)->remaining());
        put(npc(src)->array(), npc(src)->arrayOffset() + npc(src)->position_, npc(src)->remaining());
        npc(src)->position(npc(src)->position() + npc(src)->remaining());
        return this;
    } else {
        auto buffer = new ::int8_tArray(npc(src)->remaining());
        npc(src)->get(buffer);
        return put(buffer);
    }
}

int32_t java::nio::ByteBuffer::compareTo(ByteBuffer* o)
{
    auto end = (remaining() < npc(o)->remaining() ? remaining() : npc(o)->remaining());
    for (auto i = int32_t(0); i < end; ++i) {
        auto d = get(position_ + i) - npc(o)->get(npc(o)->position_ + i);
        if(d != 0) {
            return d;
        }
    }
    return remaining() - npc(o)->remaining();
}

int32_t java::nio::ByteBuffer::compareTo(::java::lang::Object* o)
{ 
    return compareTo(dynamic_cast< ByteBuffer* >(o));
}

bool java::nio::ByteBuffer::equals(::java::lang::Object* o)
{
    return dynamic_cast< ByteBuffer* >(o) != nullptr && compareTo(java_cast< ByteBuffer* >(o)) == 0;
}

int8_tArray* java::nio::ByteBuffer::array()
{
    throw new ::java::lang::UnsupportedOperationException();
}

int32_t java::nio::ByteBuffer::arrayOffset()
{
    throw new ::java::lang::UnsupportedOperationException();
}

java::nio::ByteBuffer* java::nio::ByteBuffer::put(int32_t offset, int8_t val)
{
    checkPut(offset, 1);
    doPut(offset, val);
    return this;
}

java::nio::ByteBuffer* java::nio::ByteBuffer::put(int8_t val)
{
    put(position_, val);
    ++position_;
    return this;
}

java::nio::ByteBuffer* java::nio::ByteBuffer::put(::int8_tArray* arr)
{
    return put(arr, 0, npc(arr)->length);
}

java::nio::ByteBuffer* java::nio::ByteBuffer::putLong(int32_t position, int64_t val)
{
    checkPut(position, 8);
    doPut(position, static_cast< int8_t >(((val >> int32_t(56)) & int32_t(255))));
    doPut(position + int32_t(1), static_cast< int8_t >(((val >> int32_t(48)) & int32_t(255))));
    doPut(position + int32_t(2), static_cast< int8_t >(((val >> int32_t(40)) & int32_t(255))));
    doPut(position + int32_t(3), static_cast< int8_t >(((val >> int32_t(32)) & int32_t(255))));
    doPut(position + int32_t(4), static_cast< int8_t >(((val >> int32_t(24)) & int32_t(255))));
    doPut(position + int32_t(5), static_cast< int8_t >(((val >> int32_t(16)) & int32_t(255))));
    doPut(position + int32_t(6), static_cast< int8_t >(((val >> int32_t(8)) & int32_t(255))));
    doPut(position + int32_t(7), static_cast< int8_t >(((val) & int32_t(255))));
    return this;
}

java::nio::ByteBuffer* java::nio::ByteBuffer::putInt(int32_t position, int32_t val)
{
    checkPut(position, 4);
    doPut(position, static_cast< int8_t >(((val >> int32_t(24)) & int32_t(255))));
    doPut(position + int32_t(1), static_cast< int8_t >(((val >> int32_t(16)) & int32_t(255))));
    doPut(position + int32_t(2), static_cast< int8_t >(((val >> int32_t(8)) & int32_t(255))));
    doPut(position + int32_t(3), static_cast< int8_t >(((val) & int32_t(255))));
    return this;
}

java::nio::ByteBuffer* java::nio::ByteBuffer::putShort(int32_t position, int16_t val)
{
    checkPut(position, 2);
    doPut(position, static_cast< int8_t >(((val >> int32_t(8)) & int32_t(255))));
    doPut(position + int32_t(1), static_cast< int8_t >(((val) & int32_t(255))));
    return this;
}

java::nio::ByteBuffer* java::nio::ByteBuffer::putLong(int64_t val)
{
    putLong(position_, val);
    position_ += 8;
    return this;
}

java::nio::ByteBuffer* java::nio::ByteBuffer::putInt(int32_t val)
{
    putInt(position_, val);
    position_ += 4;
    return this;
}

java::nio::ByteBuffer* java::nio::ByteBuffer::putShort(int16_t val)
{
    putShort(position_, val);
    position_ += 2;
    return this;
}

int8_t java::nio::ByteBuffer::get()
{
    return get(position_++);
}

int8_t java::nio::ByteBuffer::get(int32_t position)
{
    checkGet(position, 1);
    return doGet(position);
}

java::nio::ByteBuffer* java::nio::ByteBuffer::get(::int8_tArray* dst)
{
    return get(dst, 0, npc(dst)->length);
}

int64_t java::nio::ByteBuffer::getLong(int32_t position)
{
    checkGet(position, 8);
    return ((static_cast< int64_t >((doGet(position) & int32_t(255)))) << int32_t(56)) | ((static_cast< int64_t >((doGet(position + int32_t(1)) & int32_t(255)))) << int32_t(48)) | ((static_cast< int64_t >((doGet(position + int32_t(2)) & int32_t(255)))) << int32_t(40))| ((static_cast< int64_t >((doGet(position + int32_t(3)) & int32_t(255)))) << int32_t(32))| ((static_cast< int64_t >((doGet(position + int32_t(4)) & int32_t(255)))) << int32_t(24))| ((static_cast< int64_t >((doGet(position + int32_t(5)) & int32_t(255)))) << int32_t(16))| ((static_cast< int64_t >((doGet(position + int32_t(6)) & int32_t(255)))) << int32_t(8))| ((static_cast< int64_t >((doGet(position + int32_t(7)) & int32_t(255)))));
}

int32_t java::nio::ByteBuffer::getInt(int32_t position)
{
    checkGet(position, 4);
    return ((static_cast< int32_t >((doGet(position) & int32_t(255)))) << int32_t(24)) | ((static_cast< int32_t >((doGet(position + int32_t(1)) & int32_t(255)))) << int32_t(16)) | ((static_cast< int32_t >((doGet(position + int32_t(2)) & int32_t(255)))) << int32_t(8))| ((static_cast< int32_t >((doGet(position + int32_t(3)) & int32_t(255)))));
}

int16_t java::nio::ByteBuffer::getShort(int32_t position)
{
    checkGet(position, 2);
    return static_cast< int16_t >((((static_cast< int32_t >((doGet(position) & int32_t(255)))) << int32_t(8)) | ((static_cast< int32_t >((doGet(position + int32_t(1)) & int32_t(255)))))));
}

int64_t java::nio::ByteBuffer::getLong()
{
    auto r = getLong(position_);
    position_ += 8;
    return r;
}

int32_t java::nio::ByteBuffer::getInt()
{
    auto r = getInt(position_);
    position_ += 4;
    return r;
}

int16_t java::nio::ByteBuffer::getShort()
{
    auto r = getShort(position_);
    position_ += 2;
    return r;
}

void java::nio::ByteBuffer::checkPut(int32_t position, int32_t amount)
{
    if(readOnly)
        throw new ReadOnlyBufferException();

    if(position < 0 || position + amount > limit_)
        throw new ::java::lang::IndexOutOfBoundsException();

}

void java::nio::ByteBuffer::checkGet(int32_t position, int32_t amount)
{
    if(amount > limit_ - position)
        throw new ::java::lang::IndexOutOfBoundsException();

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::ByteBuffer::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.ByteBuffer", 19);
    return c;
}

java::lang::Class* java::nio::ByteBuffer::getClass0()
{
    return class_();
}

