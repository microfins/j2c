// Generated from /runtime/java/io/BufferedInputStream.java
#include <java/io/BufferedInputStream.hpp>

#include <java/io/InputStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/System.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::BufferedInputStream::BufferedInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::BufferedInputStream::BufferedInputStream(InputStream* in, int32_t size) 
    : BufferedInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,size);
}

java::io::BufferedInputStream::BufferedInputStream(InputStream* in) 
    : BufferedInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void java::io::BufferedInputStream::ctor(InputStream* in, int32_t size)
{
    super::ctor();
    this->in = in;
    this->buffer = new ::int8_tArray(size);
}

void java::io::BufferedInputStream::ctor(InputStream* in)
{
    ctor(in, int32_t(4096));
}

void java::io::BufferedInputStream::fill() /* throws(IOException) */
{
    position = 0;
    limit = npc(in)->read(buffer);
}

int32_t java::io::BufferedInputStream::read() /* throws(IOException) */
{
    if(position >= limit) {
        fill();
        if(limit == -int32_t(1)) {
            return -int32_t(1);
        }
    }
    return (*buffer)[position++] & int32_t(255);
}

int32_t java::io::BufferedInputStream::read(::int8_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */
{
    auto count = int32_t(0);
    if(position < limit) {
        auto remaining = limit - position;
        if(remaining > length) {
            remaining = length;
        }
        ::java::lang::System::arraycopy(buffer, position, b, offset, remaining);
        count += remaining;
        position += remaining;
        offset += remaining;
        length -= remaining;
    }
    while (length > 0) {
        auto c = npc(in)->read(b, offset, length);
        if(c == -int32_t(1)) {
            if(count == 0) {
                count = -int32_t(1);
            }
            break;
        } else {
            offset += c;
            count += c;
            length -= c;
            if(npc(in)->available() <= 0) {
                break;
            }
        }
    }
    return count;
}

int32_t java::io::BufferedInputStream::available() /* throws(IOException) */
{
    return npc(in)->available() + (limit - position);
}

void java::io::BufferedInputStream::close() /* throws(IOException) */
{
    npc(in)->close();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::BufferedInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.BufferedInputStream", 27);
    return c;
}

int32_t java::io::BufferedInputStream::read(::int8_tArray* buffer)
{
    return super::read(buffer);
}

java::lang::Class* java::io::BufferedInputStream::getClass0()
{
    return class_();
}

