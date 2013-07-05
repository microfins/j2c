// Generated from /runtime/java/io/Reader.java
#include <java/io/Reader.hpp>

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

java::io::Reader::Reader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::Reader::Reader()
    : Reader(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t java::io::Reader::read() /* throws(IOException) */
{
    auto buffer = new ::char16_tArray(int32_t(1));
    auto c = read(buffer);
    if(c <= 0) {
        return -int32_t(1);
    } else {
        return static_cast< int32_t >((*buffer)[int32_t(0)]);
    }
}

int32_t java::io::Reader::read(::char16_tArray* buffer) /* throws(IOException) */
{
    return read(buffer, 0, npc(buffer)->length);
}

bool java::io::Reader::markSupported()
{
    return false;
}

void java::io::Reader::mark(int32_t readAheadLimit) /* throws(IOException) */
{
    throw new IOException(u"mark not supported"_j);
}

void java::io::Reader::reset() /* throws(IOException) */
{
    throw new IOException(u"reset not supported"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::Reader::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.Reader", 14);
    return c;
}

java::lang::Class* java::io::Reader::getClass0()
{
    return class_();
}

