// Generated from /runtime/java/io/FileOutputStream.java
#include <java/io/FileOutputStream.hpp>

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

java::io::FileOutputStream::FileOutputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::FileOutputStream::FileOutputStream(FileDescriptor* fd) 
    : FileOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(fd);
}

java::io::FileOutputStream::FileOutputStream(::java::lang::String* path)  /* throws(IOException) */
    : FileOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(path);
}

java::io::FileOutputStream::FileOutputStream(::java::lang::String* path, bool append)  /* throws(IOException) */
    : FileOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(path,append);
}

java::io::FileOutputStream::FileOutputStream(File* file)  /* throws(IOException) */
    : FileOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(file);
}

void java::io::FileOutputStream::ctor(FileDescriptor* fd)
{
    super::ctor();
    this->fd = npc(fd)->value;
}

void java::io::FileOutputStream::ctor(::java::lang::String* path) /* throws(IOException) */
{
    ctor(path, false);
}

void java::io::FileOutputStream::ctor(::java::lang::String* path, bool append) /* throws(IOException) */
{
    super::ctor();
    fd = open(path, append);
}

void java::io::FileOutputStream::ctor(File* file) /* throws(IOException) */
{
    ctor(npc(file)->getPath());
}

void java::io::FileOutputStream::write(int32_t c) /* throws(IOException) */
{
    write(fd, c);
}

void java::io::FileOutputStream::write(::int8_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */
{
    if(b == nullptr) {
        throw new ::java::lang::NullPointerException();
    }
    if(offset < 0 || offset + length > npc(b)->length) {
        throw new ::java::lang::ArrayIndexOutOfBoundsException();
    }
    write(fd, b, offset, length);
}

void java::io::FileOutputStream::close() /* throws(IOException) */
{
    if(fd != -int32_t(1)) {
        close(fd);
        fd = -int32_t(1);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::FileOutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.FileOutputStream", 24);
    return c;
}

void java::io::FileOutputStream::write(::int8_tArray* buffer)
{
    super::write(buffer);
}

java::lang::Class* java::io::FileOutputStream::getClass0()
{
    return class_();
}

