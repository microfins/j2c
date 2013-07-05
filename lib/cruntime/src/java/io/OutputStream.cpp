// Generated from /runtime/java/io/OutputStream.java
#include <java/io/OutputStream.hpp>

#include <java/lang/NullPointerException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::OutputStream::OutputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::OutputStream::OutputStream()
    : OutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::io::OutputStream::write(::int8_tArray* buffer) /* throws(IOException) */
{
    write(buffer, 0, npc(buffer)->length);
}

void java::io::OutputStream::write(::int8_tArray* buffer, int32_t offset, int32_t length) /* throws(IOException) */
{
    for (auto i = int32_t(0); i < length; ++i) {
        write(static_cast< int32_t >((*buffer)[offset + i]));
    }
}

void java::io::OutputStream::flush() /* throws(IOException) */
{
}

void java::io::OutputStream::close() /* throws(IOException) */
{
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::OutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.OutputStream", 20);
    return c;
}

java::lang::Class* java::io::OutputStream::getClass0()
{
    return class_();
}

