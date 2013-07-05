// Generated from /runtime/java/io/FilterOutputStream.java
#include <java/io/FilterOutputStream.hpp>

#include <java/io/OutputStream.hpp>
#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::FilterOutputStream::FilterOutputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::FilterOutputStream::FilterOutputStream(OutputStream* out) 
    : FilterOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(out);
}

void java::io::FilterOutputStream::ctor(OutputStream* out)
{
    super::ctor();
    this->out = out;
}

void java::io::FilterOutputStream::close() /* throws(IOException) */
{
    npc(out)->close();
}

void java::io::FilterOutputStream::flush() /* throws(IOException) */
{
    npc(out)->flush();
}

void java::io::FilterOutputStream::write(::int8_tArray* b) /* throws(IOException) */
{
    npc(out)->write(b);
}

void java::io::FilterOutputStream::write(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */
{
    npc(out)->write(b, off, len);
}

void java::io::FilterOutputStream::write(int32_t b) /* throws(IOException) */
{
    npc(out)->write(b);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::FilterOutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.FilterOutputStream", 26);
    return c;
}

java::lang::Class* java::io::FilterOutputStream::getClass0()
{
    return class_();
}

