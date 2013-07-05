// Generated from /runtime/java/io/ByteArrayInputStream.java
#include <java/io/ByteArrayInputStream.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/System.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::ByteArrayInputStream::ByteArrayInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::ByteArrayInputStream::ByteArrayInputStream(::int8_tArray* array, int32_t offset, int32_t length) 
    : ByteArrayInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(array,offset,length);
}

java::io::ByteArrayInputStream::ByteArrayInputStream(::int8_tArray* array) 
    : ByteArrayInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(array);
}

void java::io::ByteArrayInputStream::ctor(::int8_tArray* array, int32_t offset, int32_t length)
{
    super::ctor();
    this->array = array;
    position = offset;
    this->limit = offset + length;
}

void java::io::ByteArrayInputStream::ctor(::int8_tArray* array)
{
    ctor(array, int32_t(0), npc(array)->length);
}

int32_t java::io::ByteArrayInputStream::read()
{
    if(position < limit) {
        return (*array)[position++] & int32_t(255);
    } else {
        return -int32_t(1);
    }
}

int32_t java::io::ByteArrayInputStream::read(::int8_tArray* buffer, int32_t offset, int32_t bufferLength)
{
    if(bufferLength == 0) {
        return 0;
    }
    if(position >= limit) {
        return -int32_t(1);
    }
    auto remaining = limit - position;
    if(remaining < bufferLength) {
        bufferLength = remaining;
    }
    ::java::lang::System::arraycopy(array, position, buffer, offset, bufferLength);
    position += bufferLength;
    return bufferLength;
}

int32_t java::io::ByteArrayInputStream::available()
{
    return limit - position;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::ByteArrayInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.ByteArrayInputStream", 28);
    return c;
}

int32_t java::io::ByteArrayInputStream::read(::int8_tArray* buffer)
{
    return super::read(buffer);
}

java::lang::Class* java::io::ByteArrayInputStream::getClass0()
{
    return class_();
}

