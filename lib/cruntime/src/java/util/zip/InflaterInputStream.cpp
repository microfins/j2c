// Generated from /runtime/java/util/zip/InflaterInputStream.java
#include <java/util/zip/InflaterInputStream.hpp>

#include <java/io/EOFException.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/zip/DataFormatException.hpp>
#include <java/util/zip/Inflater.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::zip::InflaterInputStream::InflaterInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::zip::InflaterInputStream::InflaterInputStream(::java::io::InputStream* in, Inflater* inflater, int32_t bufferSize) 
    : InflaterInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,inflater,bufferSize);
}

java::util::zip::InflaterInputStream::InflaterInputStream(::java::io::InputStream* in, Inflater* inflater) 
    : InflaterInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,inflater);
}

java::util::zip::InflaterInputStream::InflaterInputStream(::java::io::InputStream* in) 
    : InflaterInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void java::util::zip::InflaterInputStream::ctor(::java::io::InputStream* in, Inflater* inflater, int32_t bufferSize)
{
    super::ctor();
    this->in = in;
    this->inflater = inflater;
    this->buffer = new ::int8_tArray(bufferSize);
}

void java::util::zip::InflaterInputStream::ctor(::java::io::InputStream* in, Inflater* inflater)
{
    ctor(in, inflater, int32_t(4) * int32_t(1024));
}

void java::util::zip::InflaterInputStream::ctor(::java::io::InputStream* in)
{
    ctor(in, new Inflater());
}

int32_t java::util::zip::InflaterInputStream::read() /* throws(IOException) */
{
    auto buffer = new ::int8_tArray(int32_t(1));
    auto c = read(buffer);
    return (c < 0 ? c : ((*buffer)[int32_t(0)] & int32_t(255)));
}

int32_t java::util::zip::InflaterInputStream::read(::int8_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */
{
    if(npc(inflater)->finished()) {
        return -int32_t(1);
    }
    while (true) {
        if(npc(inflater)->needsInput()) {
            auto count = npc(in)->read(buffer);
            if(count > 0) {
                npc(inflater)->setInput(buffer, 0, count);
            } else {
                throw new ::java::io::EOFException();
            }
        }
        try {
            auto count = npc(inflater)->inflate(b, offset, length);
            if(count > 0) {
                return count;
            } else if(npc(inflater)->needsDictionary()) {
                throw new ::java::io::IOException(u"missing dictionary"_j);
            } else if(npc(inflater)->finished()) {
                return -int32_t(1);
            }
        } catch (DataFormatException* e) {
            throw new ::java::io::IOException(static_cast< ::java::lang::Throwable* >(e));
        }
    }
}

int32_t java::util::zip::InflaterInputStream::available() /* throws(IOException) */
{
    return npc(inflater)->finished() ? int32_t(0) : int32_t(1);
}

void java::util::zip::InflaterInputStream::close() /* throws(IOException) */
{
    npc(in)->close();
    npc(inflater)->dispose();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::zip::InflaterInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.zip.InflaterInputStream", 33);
    return c;
}

int32_t java::util::zip::InflaterInputStream::read(::int8_tArray* buffer)
{
    return super::read(buffer);
}

java::lang::Class* java::util::zip::InflaterInputStream::getClass0()
{
    return class_();
}

