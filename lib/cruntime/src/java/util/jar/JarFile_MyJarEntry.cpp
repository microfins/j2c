// Generated from /runtime/java/util/jar/JarFile.java
#include <java/util/jar/JarFile_MyJarEntry.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/String.hpp>
#include <java/util/zip/ZipFile_Window.hpp>
#include <java/util/zip/ZipFile.hpp>

java::util::jar::JarFile_MyJarEntry::JarFile_MyJarEntry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::jar::JarFile_MyJarEntry::JarFile_MyJarEntry(::java::util::zip::ZipFile_Window* window, int32_t pointer) 
    : JarFile_MyJarEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor(window,pointer);
}

void java::util::jar::JarFile_MyJarEntry::ctor(::java::util::zip::ZipFile_Window* window, int32_t pointer)
{
    super::ctor();
    this->window = window;
    this->pointer_ = pointer;
}

java::lang::String* java::util::jar::JarFile_MyJarEntry::getName()
{
    try {
        return ::java::util::zip::ZipFile::entryName(window, pointer_);
    } catch (::java::io::IOException* e) {
        return nullptr;
    }
}

int32_t java::util::jar::JarFile_MyJarEntry::getCompressedSize()
{
    try {
        return ::java::util::zip::ZipFile::compressedSize(window, pointer_);
    } catch (::java::io::IOException* e) {
        return 0;
    }
}

int32_t java::util::jar::JarFile_MyJarEntry::getSize()
{
    try {
        return ::java::util::zip::ZipFile::uncompressedSize(window, pointer_);
    } catch (::java::io::IOException* e) {
        return 0;
    }
}

int32_t java::util::jar::JarFile_MyJarEntry::pointer()
{
    return pointer_;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::jar::JarFile_MyJarEntry::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.jar.JarFile.MyJarEntry", 32);
    return c;
}

java::lang::Class* java::util::jar::JarFile_MyJarEntry::getClass0()
{
    return class_();
}

