// Generated from /runtime/java/io/BufferedOutputStream.java
#include <java/io/BufferedOutputStream.hpp>

#include <java/io/OutputStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/System.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::BufferedOutputStream::BufferedOutputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::BufferedOutputStream::BufferedOutputStream(OutputStream* out, int32_t size) 
    : BufferedOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(out,size);
}

java::io::BufferedOutputStream::BufferedOutputStream(OutputStream* out) 
    : BufferedOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(out);
}

void java::io::BufferedOutputStream::ctor(OutputStream* out, int32_t size)
{
    super::ctor();
    this->out = out;
    this->buffer = new ::int8_tArray(size);
}

void java::io::BufferedOutputStream::ctor(OutputStream* out)
{
    ctor(out, int32_t(4096));
}

void java::io::BufferedOutputStream::drain() /* throws(IOException) */
{
    if(position > 0) {
        npc(out)->write(buffer, 0, position);
        position = 0;
    }
}

void java::io::BufferedOutputStream::write(int32_t c) /* throws(IOException) */
{
    if(position >= npc(buffer)->length) {
        drain();
    }
    (*buffer)[position++] = static_cast< int8_t >((c & int32_t(255)));
}

void java::io::BufferedOutputStream::write(::int8_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */
{
    if(length > npc(buffer)->length - position) {
        drain();
        npc(out)->write(b, offset, length);
    } else {
        ::java::lang::System::arraycopy(b, offset, buffer, position, length);
        position += length;
    }
}

void java::io::BufferedOutputStream::flush() /* throws(IOException) */
{
    drain();
    npc(out)->flush();
}

void java::io::BufferedOutputStream::close() /* throws(IOException) */
{
    flush();
    npc(out)->close();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::BufferedOutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.BufferedOutputStream", 28);
    return c;
}

void java::io::BufferedOutputStream::write(::int8_tArray* buffer)
{
    super::write(buffer);
}

java::lang::Class* java::io::BufferedOutputStream::getClass0()
{
    return class_();
}

