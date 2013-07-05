// Generated from /runtime/java/io/BufferedWriter.java
#include <java/io/BufferedWriter.hpp>

#include <java/io/Writer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/System.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::BufferedWriter::BufferedWriter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::BufferedWriter::BufferedWriter(Writer* out, int32_t size) 
    : BufferedWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor(out,size);
}

java::io::BufferedWriter::BufferedWriter(Writer* out) 
    : BufferedWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor(out);
}

void java::io::BufferedWriter::ctor(Writer* out, int32_t size)
{
    super::ctor();
    this->out = out;
    this->buffer = new ::char16_tArray(size);
}

void java::io::BufferedWriter::ctor(Writer* out)
{
    ctor(out, int32_t(4096));
}

void java::io::BufferedWriter::drain() /* throws(IOException) */
{
    if(position > 0) {
        npc(out)->write(buffer, int32_t(0), position);
        position = 0;
    }
}

void java::io::BufferedWriter::write(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */
{
    if(length > npc(buffer)->length - position) {
        drain();
        npc(out)->write(b, offset, length);
    } else {
        ::java::lang::System::arraycopy(b, offset, buffer, position, length);
        position += length;
    }
}

void java::io::BufferedWriter::flush() /* throws(IOException) */
{
    drain();
    npc(out)->flush();
}

void java::io::BufferedWriter::close() /* throws(IOException) */
{
    flush();
    npc(out)->close();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::BufferedWriter::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.BufferedWriter", 22);
    return c;
}

void java::io::BufferedWriter::write(int32_t c)
{
    super::write(c);
}

void java::io::BufferedWriter::write(::char16_tArray* buffer)
{
    super::write(buffer);
}

void java::io::BufferedWriter::write(::java::lang::String* s)
{
    super::write(s);
}

void java::io::BufferedWriter::write(::java::lang::String* s, int32_t offset, int32_t length)
{
    super::write(s, offset, length);
}

java::lang::Class* java::io::BufferedWriter::getClass0()
{
    return class_();
}

