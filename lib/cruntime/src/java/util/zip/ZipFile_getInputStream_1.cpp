// Generated from /runtime/java/util/zip/ZipFile.java
#include <java/util/zip/ZipFile_getInputStream_1.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/util/zip/ZipFile.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::zip::ZipFile_getInputStream_1::ZipFile_getInputStream_1(ZipFile *ZipFile_this, int32_t pointer, ::java::io::InputStream* in, Inflater* inflater, int32_t bufferSize)
    : super(*static_cast< ::default_init_tag* >(0))
    , ZipFile_this(ZipFile_this)
    , pointer(pointer)
{
    clinit();
    init();
    ctor(in, inflater, bufferSize);
}

java::util::zip::ZipFile_getInputStream_1::ZipFile_getInputStream_1(ZipFile *ZipFile_this, int32_t pointer, ::java::io::InputStream* in, Inflater* inflater)
    : super(*static_cast< ::default_init_tag* >(0))
    , ZipFile_this(ZipFile_this)
    , pointer(pointer)
{
    clinit();
    init();
    ctor(in, inflater);
}

java::util::zip::ZipFile_getInputStream_1::ZipFile_getInputStream_1(ZipFile *ZipFile_this, int32_t pointer, ::java::io::InputStream* in)
    : super(*static_cast< ::default_init_tag* >(0))
    , ZipFile_this(ZipFile_this)
    , pointer(pointer)
{
    clinit();
    init();
    ctor(in);
}

void java::util::zip::ZipFile_getInputStream_1::init()
{
    remaining = ZipFile::uncompressedSize(ZipFile_this->window, pointer);
}

int32_t java::util::zip::ZipFile_getInputStream_1::read() /* throws(IOException) */
{
    auto c = super::read();
    if(c >= 0) {
        --remaining;
    }
    return c;
}

int32_t java::util::zip::ZipFile_getInputStream_1::read(::int8_tArray* buffer) /* throws(IOException) */
{
    return read(buffer, int32_t(0), npc(buffer)->length);
}

int32_t java::util::zip::ZipFile_getInputStream_1::read(::int8_tArray* buffer, int32_t offset, int32_t length) /* throws(IOException) */
{
    auto c = super::read(buffer, offset, length);
    if(c > 0) {
        remaining -= c;
    }
    return c;
}

int32_t java::util::zip::ZipFile_getInputStream_1::available()
{
    return remaining;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::zip::ZipFile_getInputStream_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* java::util::zip::ZipFile_getInputStream_1::getClass0()
{
    return class_();
}

