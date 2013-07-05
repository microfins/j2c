// Generated from /runtime/java/io/ByteArrayOutputStream.java
#include <java/io/ByteArrayOutputStream.hpp>

#include <java/io/ByteArrayOutputStream_Cell.hpp>
#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::ByteArrayOutputStream::ByteArrayOutputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::ByteArrayOutputStream::ByteArrayOutputStream(int32_t capacity) 
    : ByteArrayOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(capacity);
}

java::io::ByteArrayOutputStream::ByteArrayOutputStream() 
    : ByteArrayOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t java::io::ByteArrayOutputStream::BufferSize;

void java::io::ByteArrayOutputStream::ctor(int32_t capacity)
{
    super::ctor();
}

void java::io::ByteArrayOutputStream::ctor()
{
    ctor(int32_t(0));
}

void java::io::ByteArrayOutputStream::reset()
{
    chain = nullptr;
    length = 0;
    buffer = nullptr;
    position = 0;
}

int32_t java::io::ByteArrayOutputStream::size()
{
    return length;
}

void java::io::ByteArrayOutputStream::write(int32_t c)
{
    if(buffer == nullptr) {
        buffer = new ::int8_tArray(BufferSize);
    } else if(position >= npc(buffer)->length) {
        flushBuffer();
        buffer = new ::int8_tArray(BufferSize);
    }
    (*buffer)[position++] = static_cast< int8_t >((c & int32_t(255)));
    ++length;
}

int8_tArray* java::io::ByteArrayOutputStream::copy(::int8_tArray* b, int32_t offset, int32_t length)
{
    auto array = new ::int8_tArray(length);
    ::java::lang::System::arraycopy(b, offset, array, 0, length);
    return array;
}

void java::io::ByteArrayOutputStream::write(::int8_tArray* b, int32_t offset, int32_t length)
{
    if(b == nullptr) {
        throw new ::java::lang::NullPointerException();
    }
    if(offset < 0 || offset + length > npc(b)->length) {
        throw new ::java::lang::ArrayIndexOutOfBoundsException();
    }
    if(length == 0)
        return;

    if(buffer != nullptr && length <= npc(buffer)->length - position) {
        ::java::lang::System::arraycopy(b, offset, buffer, position, length);
        position += length;
    } else {
        flushBuffer();
        chain = new ByteArrayOutputStream_Cell(copy(b, offset, length), int32_t(0), length, chain);
    }
    this->length += length;
}

void java::io::ByteArrayOutputStream::flushBuffer()
{
    if(position > 0) {
        auto b = buffer;
        auto p = position;
        buffer = nullptr;
        position = 0;
        chain = new ByteArrayOutputStream_Cell(b, int32_t(0), p, chain);
    }
}

int8_tArray* java::io::ByteArrayOutputStream::toByteArray_()
{
    flushBuffer();
    auto array = new ::int8_tArray(length);
    auto index = length;
    for (auto *c = chain; c != nullptr; c = npc(c)->next) {
        auto start = index - npc(c)->length;
        ::java::lang::System::arraycopy(npc(c)->array, npc(c)->offset, array, start, npc(c)->length);
        index = start;
    }
    return array;
}

java::lang::String* java::io::ByteArrayOutputStream::toString(::java::lang::String* encoding) /* throws(UnsupportedEncodingException) */
{
    return new ::java::lang::String(toByteArray_(), encoding);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::ByteArrayOutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.ByteArrayOutputStream", 29);
    return c;
}

void java::io::ByteArrayOutputStream::write(::int8_tArray* buffer)
{
    super::write(buffer);
}

java::lang::String* java::io::ByteArrayOutputStream::toString()
{
    return super::toString();
}

java::lang::Class* java::io::ByteArrayOutputStream::getClass0()
{
    return class_();
}

