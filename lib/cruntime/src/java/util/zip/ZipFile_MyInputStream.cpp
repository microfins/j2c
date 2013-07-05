// Generated from /runtime/java/util/zip/ZipFile.java
#include <java/util/zip/ZipFile_MyInputStream.hpp>

#include <java/io/RandomAccessFile.hpp>
#include <java/lang/NullPointerException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::zip::ZipFile_MyInputStream::ZipFile_MyInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::zip::ZipFile_MyInputStream::ZipFile_MyInputStream(::java::io::RandomAccessFile* file, int32_t start, int32_t length) 
    : ZipFile_MyInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(file,start,length);
}

void java::util::zip::ZipFile_MyInputStream::ctor(::java::io::RandomAccessFile* file, int32_t start, int32_t length)
{
    super::ctor();
    this->file = file;
    this->offset = start;
    this->length = length;
}

int32_t java::util::zip::ZipFile_MyInputStream::read() /* throws(IOException) */
{
    auto b = new ::int8_tArray(int32_t(1));
    auto c = read(b);
    return (c == -int32_t(1) ? -int32_t(1) : (*b)[int32_t(0)] & int32_t(255));
}

int32_t java::util::zip::ZipFile_MyInputStream::read(::int8_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */
{
    if(this->length == 0)
        return -int32_t(1);

    if(length > this->length)
        length = this->length;

    npc(file)->seek(this->offset);
    npc(file)->readFully(b, offset, length);
    this->offset += length;
    this->length -= length;
    return length;
}

void java::util::zip::ZipFile_MyInputStream::close() /* throws(IOException) */
{
    file = nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::zip::ZipFile_MyInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.zip.ZipFile.MyInputStream", 35);
    return c;
}

int32_t java::util::zip::ZipFile_MyInputStream::read(::int8_tArray* buffer)
{
    return super::read(buffer);
}

java::lang::Class* java::util::zip::ZipFile_MyInputStream::getClass0()
{
    return class_();
}

