// Generated from /runtime/java/nio/FixedArrayByteBuffer.java
#include <java/nio/FixedArrayByteBuffer.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::nio::FixedArrayByteBuffer::FixedArrayByteBuffer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::FixedArrayByteBuffer::FixedArrayByteBuffer(int64_t address, ::int8_tArray* array, int32_t offset, int32_t capacity, bool readOnly) 
    : FixedArrayByteBuffer(*static_cast< ::default_init_tag* >(0))
{
    ctor(address,array,offset,capacity,readOnly);
}

void java::nio::FixedArrayByteBuffer::ctor(int64_t address, ::int8_tArray* array, int32_t offset, int32_t capacity, bool readOnly)
{
    super::ctor(address, capacity, readOnly);
    this->array = array;
    this->arrayOffset = offset;
}

java::nio::FixedArrayByteBuffer* java::nio::FixedArrayByteBuffer::make(int32_t capacity)
{
    clinit();
    auto address = new ::int64_tArray(int32_t(1));
    auto array = allocateFixed(capacity, address);
    return new FixedArrayByteBuffer((*address)[int32_t(0)], array, int32_t(0), capacity, false);
}

java::nio::ByteBuffer* java::nio::FixedArrayByteBuffer::asReadOnlyBuffer()
{
    ByteBuffer* b = new FixedArrayByteBuffer(address, array, arrayOffset, capacity_, true);
    npc(b)->position(position());
    npc(b)->limit(limit());
    return b;
}

java::nio::ByteBuffer* java::nio::FixedArrayByteBuffer::slice()
{
    return new FixedArrayByteBuffer(address + position_, array, arrayOffset + position_, remaining(), true);
}

java::lang::String* java::nio::FixedArrayByteBuffer::toString()
{
    return ::java::lang::StringBuilder().append(u"(FixedArrayByteBuffer with address: "_j)->append(address)
        ->append(u" array: "_j)
        ->append(static_cast< ::java::lang::Object* >(array))
        ->append(u" arrayOffset: "_j)
        ->append(arrayOffset)
        ->append(u" position: "_j)
        ->append(position_)
        ->append(u" limit: "_j)
        ->append(limit_)
        ->append(u" capacity: "_j)
        ->append(capacity_)
        ->append(u")"_j)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::FixedArrayByteBuffer::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.FixedArrayByteBuffer", 29);
    return c;
}

java::lang::Class* java::nio::FixedArrayByteBuffer::getClass0()
{
    return class_();
}

