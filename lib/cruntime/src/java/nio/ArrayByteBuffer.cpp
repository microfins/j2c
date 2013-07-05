// Generated from /runtime/java/nio/ArrayByteBuffer.java
#include <java/nio/ArrayByteBuffer.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::nio::ArrayByteBuffer::ArrayByteBuffer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::ArrayByteBuffer::ArrayByteBuffer(::int8_tArray* array, int32_t offset, int32_t length, bool readOnly) 
    : ArrayByteBuffer(*static_cast< ::default_init_tag* >(0))
{
    ctor(array,offset,length,readOnly);
}

void java::nio::ArrayByteBuffer::ctor(::int8_tArray* array, int32_t offset, int32_t length, bool readOnly)
{
    super::ctor(readOnly);
    this->array_ = array;
    this->arrayOffset_ = offset;
    this->capacity_ = length;
    this->limit_ = length;
    this->position_ = 0;
}

java::nio::ByteBuffer* java::nio::ArrayByteBuffer::asReadOnlyBuffer()
{
    ByteBuffer* b = new ArrayByteBuffer(array_, arrayOffset_, capacity_, true);
    npc(b)->position(position());
    npc(b)->limit(limit());
    return b;
}

bool java::nio::ArrayByteBuffer::hasArray_()
{
    return true;
}

int8_tArray* java::nio::ArrayByteBuffer::array()
{
    return array_;
}

java::nio::ByteBuffer* java::nio::ArrayByteBuffer::slice()
{
    return new ArrayByteBuffer(array_, arrayOffset_ + position_, remaining(), true);
}

int32_t java::nio::ArrayByteBuffer::arrayOffset()
{
    return arrayOffset_;
}

void java::nio::ArrayByteBuffer::doPut(int32_t position, int8_t val)
{
    (*array_)[arrayOffset_ + position] = val;
}

java::nio::ByteBuffer* java::nio::ArrayByteBuffer::put(ByteBuffer* src)
{
    auto length = npc(src)->remaining();
    checkPut(position_, length);
    npc(src)->get(array_, arrayOffset_ + position_, length);
    position_ += length;
    return this;
}

java::nio::ByteBuffer* java::nio::ArrayByteBuffer::put(::int8_tArray* src, int32_t offset, int32_t length)
{
    checkPut(position_, length);
    ::java::lang::System::arraycopy(src, offset, array_, arrayOffset_ + position_, length);
    position_ += length;
    return this;
}

java::nio::ByteBuffer* java::nio::ArrayByteBuffer::get(::int8_tArray* dst, int32_t offset, int32_t length)
{
    checkGet(position_, length);
    ::java::lang::System::arraycopy(array_, arrayOffset_ + position_, dst, offset, length);
    position_ += length;
    return this;
}

int8_t java::nio::ArrayByteBuffer::doGet(int32_t position)
{
    return (*array_)[arrayOffset_ + position];
}

java::lang::String* java::nio::ArrayByteBuffer::toString()
{
    return ::java::lang::StringBuilder().append(u"(ArrayByteBuffer with array: "_j)->append(static_cast< ::java::lang::Object* >(array_))
        ->append(u" arrayOffset: "_j)
        ->append(arrayOffset_)
        ->append(u" position: "_j)
        ->append(position_)
        ->append(u" limit: "_j)
        ->append(limit_)
        ->append(u" capacity: "_j)
        ->append(capacity_)
        ->append(u")"_j)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::ArrayByteBuffer::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.ArrayByteBuffer", 24);
    return c;
}

int8_t java::nio::ArrayByteBuffer::get()
{
    return super::get();
}

int8_t java::nio::ArrayByteBuffer::get(int32_t position)
{
    return super::get(position);
}

java::nio::ByteBuffer* java::nio::ArrayByteBuffer::get(::int8_tArray* dst)
{
    return super::get(dst);
}

java::nio::ByteBuffer* java::nio::ArrayByteBuffer::put(int32_t offset, int8_t val)
{
    return super::put(offset, val);
}

java::nio::ByteBuffer* java::nio::ArrayByteBuffer::put(int8_t val)
{
    return super::put(val);
}

java::nio::ByteBuffer* java::nio::ArrayByteBuffer::put(::int8_tArray* arr)
{
    return super::put(arr);
}

java::lang::Class* java::nio::ArrayByteBuffer::getClass0()
{
    return class_();
}

