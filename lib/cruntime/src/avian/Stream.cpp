// Generated from /runtime/avian/Stream.java
#include <avian/Stream.hpp>

#include <java/io/EOFException.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

avian::Stream::Stream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::Stream::Stream()
    : Stream(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void avian::Stream::write1(::java::io::OutputStream* out, int32_t v) /* throws(IOException) */
{
    clinit();
    npc(out)->write(v & int32_t(255));
}

int32_t avian::Stream::read1(::java::io::InputStream* in) /* throws(IOException) */
{
    clinit();
    return npc(in)->read();
}

void avian::Stream::write2(::java::io::OutputStream* out, int32_t v) /* throws(IOException) */
{
    clinit();
    npc(out)->write((static_cast<int32_t>(static_cast<uint32_t>(v) >> int32_t(8))) & int32_t(255));
    npc(out)->write((v) & int32_t(255));
}

int32_t avian::Stream::read2(::java::io::InputStream* in) /* throws(IOException) */
{
    clinit();
    auto b1 = npc(in)->read();
    auto b2 = npc(in)->read();
    if(b2 == -int32_t(1))
        throw new ::java::io::EOFException();

    return ((b1 << int32_t(8)) | (b2 & int32_t(255)));
}

void avian::Stream::write4(::java::io::OutputStream* out, int32_t v) /* throws(IOException) */
{
    clinit();
    npc(out)->write((static_cast<int32_t>(static_cast<uint32_t>(v) >> int32_t(24))) & int32_t(255));
    npc(out)->write((static_cast<int32_t>(static_cast<uint32_t>(v) >> int32_t(16))) & int32_t(255));
    npc(out)->write((static_cast<int32_t>(static_cast<uint32_t>(v) >> int32_t(8))) & int32_t(255));
    npc(out)->write((v) & int32_t(255));
}

int32_t avian::Stream::read4(::java::io::InputStream* in) /* throws(IOException) */
{
    clinit();
    auto b1 = npc(in)->read();
    auto b2 = npc(in)->read();
    auto b3 = npc(in)->read();
    auto b4 = npc(in)->read();
    if(b4 == -int32_t(1))
        throw new ::java::io::EOFException();

    return ((b1 << int32_t(24)) | (b2 << int32_t(16)) | (b3 << int32_t(8))| (b4));
}

void avian::Stream::write8(::java::io::OutputStream* out, int64_t v) /* throws(IOException) */
{
    clinit();
    write4(out, static_cast< int32_t >((static_cast<int64_t>(static_cast<uint64_t>(v) >> int32_t(32)))) & int32_t(-1));
    write4(out, static_cast< int32_t >((v)) & int32_t(-1));
}

int64_t avian::Stream::read8(::java::io::InputStream* in) /* throws(IOException) */
{
    clinit();
    int64_t b1 = npc(in)->read();
    int64_t b2 = npc(in)->read();
    int64_t b3 = npc(in)->read();
    int64_t b4 = npc(in)->read();
    int64_t b5 = npc(in)->read();
    int64_t b6 = npc(in)->read();
    int64_t b7 = npc(in)->read();
    int64_t b8 = npc(in)->read();
    if(b8 == -int32_t(1))
        throw new ::java::io::EOFException();

    return ((b1 << int32_t(56)) | (b2 << int32_t(48)) | (b3 << int32_t(40))| (b4 << int32_t(32))| (b5 << int32_t(24))| (b6 << int32_t(16))| (b7 << int32_t(8))| (b8));
}

void avian::Stream::set4(::int8_tArray* array, int32_t offset, int32_t v)
{
    clinit();
    (*array)[offset] = static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(v) >> int32_t(24))) & int32_t(255)));
    (*array)[offset + int32_t(1)] = static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(v) >> int32_t(16))) & int32_t(255)));
    (*array)[offset + int32_t(2)] = static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(v) >> int32_t(8))) & int32_t(255)));
    (*array)[offset + int32_t(3)] = static_cast< int8_t >(((v) & int32_t(255)));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::Stream::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.Stream", 12);
    return c;
}

java::lang::Class* avian::Stream::getClass0()
{
    return class_();
}

