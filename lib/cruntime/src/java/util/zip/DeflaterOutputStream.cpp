// Generated from /runtime/java/util/zip/DeflaterOutputStream.java
#include <java/util/zip/DeflaterOutputStream.hpp>

#include <java/io/IOException.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/util/zip/Deflater.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::zip::DeflaterOutputStream::DeflaterOutputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::zip::DeflaterOutputStream::DeflaterOutputStream(::java::io::OutputStream* out, Deflater* deflater, int32_t bufferSize) 
    : DeflaterOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(out,deflater,bufferSize);
}

java::util::zip::DeflaterOutputStream::DeflaterOutputStream(::java::io::OutputStream* out, Deflater* deflater) 
    : DeflaterOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(out,deflater);
}

java::util::zip::DeflaterOutputStream::DeflaterOutputStream(::java::io::OutputStream* out) 
    : DeflaterOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(out);
}

void java::util::zip::DeflaterOutputStream::ctor(::java::io::OutputStream* out, Deflater* deflater, int32_t bufferSize)
{
    super::ctor();
    this->out = out;
    this->deflater = deflater;
    this->buffer = new ::int8_tArray(bufferSize);
}

void java::util::zip::DeflaterOutputStream::ctor(::java::io::OutputStream* out, Deflater* deflater)
{
    ctor(out, deflater, int32_t(4) * int32_t(1024));
}

void java::util::zip::DeflaterOutputStream::ctor(::java::io::OutputStream* out)
{
    ctor(out, new Deflater());
}

void java::util::zip::DeflaterOutputStream::write(int32_t b) /* throws(IOException) */
{
    auto buffer = new ::int8_tArray(int32_t(1));
    (*buffer)[int32_t(0)] = static_cast< int8_t >((b & int32_t(255)));
    write(buffer, int32_t(0), int32_t(1));
}

void java::util::zip::DeflaterOutputStream::write(::int8_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */
{
    if(npc(deflater)->finished()) {
        throw new ::java::io::IOException(u"Already at end of stream"_j);
    } else if(offset < 0) {
        throw new ::java::lang::IndexOutOfBoundsException(u"Offset can't be less than zero"_j);
    } else if(length < 0) {
        throw new ::java::lang::IndexOutOfBoundsException(u"Length can't be less than zero"_j);
    } else if(npc(b)->length - (offset + length) < 0) {
        throw new ::java::lang::IndexOutOfBoundsException(u"Offset + Length is larger than the input byte array"_j);
    } else if(length == 0) {
        return;
    }
    npc(deflater)->setInput(b, offset, length);
    while (npc(deflater)->getRemaining() > 0) {
        deflate();
    }
}

void java::util::zip::DeflaterOutputStream::deflate() /* throws(IOException) */
{
    auto len = npc(deflater)->deflate(buffer, 0, npc(buffer)->length);
    if(len > 0) {
        npc(out)->write(buffer, 0, len);
    }
}

void java::util::zip::DeflaterOutputStream::close() /* throws(IOException) */
{
    npc(deflater)->finish();
    while (!npc(deflater)->finished()) {
        deflate();
    }
    npc(out)->close();
    npc(deflater)->dispose();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::zip::DeflaterOutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.zip.DeflaterOutputStream", 34);
    return c;
}

void java::util::zip::DeflaterOutputStream::write(::int8_tArray* buffer)
{
    super::write(buffer);
}

java::lang::Class* java::util::zip::DeflaterOutputStream::getClass0()
{
    return class_();
}

