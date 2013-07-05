// Generated from /runtime/java/io/InputStream.java
#include <java/io/InputStream.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::InputStream::InputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::InputStream::InputStream()
    : InputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t java::io::InputStream::read(::int8_tArray* buffer) /* throws(IOException) */
{
    return read(buffer, 0, npc(buffer)->length);
}

int32_t java::io::InputStream::read(::int8_tArray* buffer, int32_t offset, int32_t length) /* throws(IOException) */
{
    for (auto i = int32_t(0); i < length; ++i) {
        auto c = read();
        if(c == -int32_t(1)) {
            if(i == 0) {
                return -int32_t(1);
            } else {
                return i;
            }
        } else {
            (*buffer)[offset + i] = static_cast< int8_t >((c & int32_t(255)));
        }
    }
    return length;
}

int64_t java::io::InputStream::skip(int64_t count) /* throws(IOException) */
{
    int64_t const Max = int32_t(8) * int32_t(1024);
    auto size = static_cast< int32_t >((count < Max ? count : Max));
    auto buffer = new ::int8_tArray(size);
    auto remaining = count;
    int32_t c;
    while ((c = read(buffer, 0, static_cast< int32_t >((size < remaining ? static_cast< int64_t >(size) : remaining)))) >= 0 && remaining > 0) {
        remaining -= c;
    }
    return count - remaining;
}

int32_t java::io::InputStream::available() /* throws(IOException) */
{
    return 0;
}

void java::io::InputStream::mark(int32_t limit)
{
}

void java::io::InputStream::reset() /* throws(IOException) */
{
    throw new IOException(u"mark/reset not supported"_j);
}

bool java::io::InputStream::markSupported()
{
    return false;
}

void java::io::InputStream::close() /* throws(IOException) */
{
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::InputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.InputStream", 19);
    return c;
}

java::lang::Class* java::io::InputStream::getClass0()
{
    return class_();
}

