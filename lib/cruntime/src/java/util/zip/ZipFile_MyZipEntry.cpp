// Generated from /runtime/java/util/zip/ZipFile.java
#include <java/util/zip/ZipFile_MyZipEntry.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/String.hpp>
#include <java/util/zip/ZipFile_Window.hpp>
#include <java/util/zip/ZipFile.hpp>

java::util::zip::ZipFile_MyZipEntry::ZipFile_MyZipEntry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::zip::ZipFile_MyZipEntry::ZipFile_MyZipEntry(ZipFile_Window* window, int32_t pointer) 
    : ZipFile_MyZipEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor(window,pointer);
}

void java::util::zip::ZipFile_MyZipEntry::ctor(ZipFile_Window* window, int32_t pointer)
{
    super::ctor();
    this->window = window;
    this->pointer_ = pointer;
}

java::lang::String* java::util::zip::ZipFile_MyZipEntry::getName()
{
    try {
        return ZipFile::entryName(window, pointer_);
    } catch (::java::io::IOException* e) {
        return nullptr;
    }
}

int32_t java::util::zip::ZipFile_MyZipEntry::getCompressedSize()
{
    try {
        return ZipFile::compressedSize(window, pointer_);
    } catch (::java::io::IOException* e) {
        return 0;
    }
}

int32_t java::util::zip::ZipFile_MyZipEntry::getSize()
{
    try {
        return ZipFile::uncompressedSize(window, pointer_);
    } catch (::java::io::IOException* e) {
        return 0;
    }
}

int32_t java::util::zip::ZipFile_MyZipEntry::pointer()
{
    return pointer_;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::zip::ZipFile_MyZipEntry::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.zip.ZipFile.MyZipEntry", 32);
    return c;
}

java::lang::Class* java::util::zip::ZipFile_MyZipEntry::getClass0()
{
    return class_();
}

