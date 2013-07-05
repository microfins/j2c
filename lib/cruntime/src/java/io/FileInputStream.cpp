// Generated from /runtime/java/io/FileInputStream.java
#include <java/io/FileInputStream.hpp>

#include <java/io/File.hpp>
#include <java/io/FileDescriptor.hpp>
#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::FileInputStream::FileInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::FileInputStream::FileInputStream(FileDescriptor* fd) 
    : FileInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(fd);
}

java::io::FileInputStream::FileInputStream(::java::lang::String* path)  /* throws(IOException) */
    : FileInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(path);
}

java::io::FileInputStream::FileInputStream(File* file)  /* throws(IOException) */
    : FileInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(file);
}

void java::io::FileInputStream::ctor(FileDescriptor* fd)
{
    super::ctor();
    this->fd = npc(fd)->value;
}

void java::io::FileInputStream::ctor(::java::lang::String* path) /* throws(IOException) */
{
    super::ctor();
    fd = open(path);
    remaining = static_cast< int32_t >((new File(path))->length());
}

void java::io::FileInputStream::ctor(File* file) /* throws(IOException) */
{
    ctor(npc(file)->getPath());
}

int32_t java::io::FileInputStream::available() /* throws(IOException) */
{
    return remaining;
}

int32_t java::io::FileInputStream::read() /* throws(IOException) */
{
    auto c = read(fd);
    if(c >= 0 && remaining > 0) {
        --remaining;
    }
    return c;
}

int32_t java::io::FileInputStream::read(::int8_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */
{
    if(b == nullptr) {
        throw new ::java::lang::NullPointerException();
    }
    if(offset < 0 || offset + length > npc(b)->length) {
        throw new ::java::lang::ArrayIndexOutOfBoundsException();
    }
    auto c = read(fd, b, offset, length);
    if(c > 0 && remaining > 0) {
        remaining -= c;
    }
    return c;
}

void java::io::FileInputStream::close() /* throws(IOException) */
{
    if(fd != -int32_t(1)) {
        close(fd);
        fd = -int32_t(1);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::FileInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.FileInputStream", 23);
    return c;
}

int32_t java::io::FileInputStream::read(::int8_tArray* buffer)
{
    return super::read(buffer);
}

java::lang::Class* java::io::FileInputStream::getClass0()
{
    return class_();
}

