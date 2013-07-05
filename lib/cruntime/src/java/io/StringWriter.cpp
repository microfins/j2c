// Generated from /runtime/java/io/StringWriter.java
#include <java/io/StringWriter.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::StringWriter::StringWriter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::StringWriter::StringWriter()
    : StringWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::io::StringWriter::ctor()
{
    super::ctor();
    init();
}

void java::io::StringWriter::init()
{
    out = new ::java::lang::StringBuilder();
}

void java::io::StringWriter::write(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */
{
    npc(out)->append(b, offset, length);
}

java::lang::String* java::io::StringWriter::toString()
{
    return npc(out)->toString();
}

void java::io::StringWriter::flush() /* throws(IOException) */
{
}

void java::io::StringWriter::close() /* throws(IOException) */
{
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::StringWriter::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.StringWriter", 20);
    return c;
}

void java::io::StringWriter::write(int32_t c)
{
    super::write(c);
}

void java::io::StringWriter::write(::char16_tArray* buffer)
{
    super::write(buffer);
}

void java::io::StringWriter::write(::java::lang::String* s)
{
    super::write(s);
}

void java::io::StringWriter::write(::java::lang::String* s, int32_t offset, int32_t length)
{
    super::write(s, offset, length);
}

java::lang::Class* java::io::StringWriter::getClass0()
{
    return class_();
}

