// Generated from /runtime/java/io/OutputStreamWriter.java
#include <java/io/OutputStreamWriter.hpp>

#include <avian/Utf8.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::OutputStreamWriter::OutputStreamWriter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::OutputStreamWriter::OutputStreamWriter(OutputStream* out) 
    : OutputStreamWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor(out);
}

void java::io::OutputStreamWriter::ctor(OutputStream* out)
{
    super::ctor();
    this->out = out;
}

void java::io::OutputStreamWriter::write(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */
{
    npc(out)->write(::avian::Utf8::encode(b, offset, length));
}

void java::io::OutputStreamWriter::flush() /* throws(IOException) */
{
    npc(out)->flush();
}

void java::io::OutputStreamWriter::close() /* throws(IOException) */
{
    npc(out)->close();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::OutputStreamWriter::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.OutputStreamWriter", 26);
    return c;
}

void java::io::OutputStreamWriter::write(int32_t c)
{
    super::write(c);
}

void java::io::OutputStreamWriter::write(::char16_tArray* buffer)
{
    super::write(buffer);
}

void java::io::OutputStreamWriter::write(::java::lang::String* s)
{
    super::write(s);
}

void java::io::OutputStreamWriter::write(::java::lang::String* s, int32_t offset, int32_t length)
{
    super::write(s, offset, length);
}

java::lang::Class* java::io::OutputStreamWriter::getClass0()
{
    return class_();
}

