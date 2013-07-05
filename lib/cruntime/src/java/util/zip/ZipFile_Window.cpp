// Generated from /runtime/java/util/zip/ZipFile.java
#include <java/util/zip/ZipFile_Window.hpp>

#include <java/io/RandomAccessFile.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::zip::ZipFile_Window::ZipFile_Window(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::zip::ZipFile_Window::ZipFile_Window(::java::io::RandomAccessFile* file, int32_t size) 
    : ZipFile_Window(*static_cast< ::default_init_tag* >(0))
{
    ctor(file,size);
}

void java::util::zip::ZipFile_Window::ctor(::java::io::RandomAccessFile* file, int32_t size)
{
    super::ctor();
    this->file = file;
    data = new ::int8_tArray(size);
}

int32_t java::util::zip::ZipFile_Window::seek(int32_t start, int32_t length) /* throws(IOException) */
{
    auto fileLength = static_cast< int32_t >(npc(file)->length());
    if(length > npc(data)->length) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"length "_j)->append(length)
            ->append(u" greater than buffer length "_j)
            ->append(npc(data)->length)->toString());
    }
    if(start < 0) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"negative start "_j)->append(start)->toString());
    }
    if(start + length > fileLength) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"end "_j)->append((start + length))
            ->append(u" greater than file length "_j)
            ->append(fileLength)->toString());
    }
    if(start < this->start || start + length > this->start + this->length) {
        this->length = ::java::lang::Math::min(npc(data)->length, fileLength);
        this->start = start - ((this->length - length) / int32_t(2));
        if(this->start < 0) {
            this->start = 0;
        } else if(this->start + this->length > fileLength) {
            this->start = fileLength - this->length;
        }
        npc(file)->seek(this->start);
        npc(file)->readFully(data, 0, this->length);
    }
    return start - this->start;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::zip::ZipFile_Window::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.zip.ZipFile.Window", 28);
    return c;
}

java::lang::Class* java::util::zip::ZipFile_Window::getClass0()
{
    return class_();
}

