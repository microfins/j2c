// Generated from /runtime/java/io/FileReader.java
#include <java/io/FileReader.hpp>

#include <java/io/FileInputStream.hpp>
#include <java/io/InputStreamReader.hpp>
#include <java/io/Reader.hpp>
#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::FileReader::FileReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::FileReader::FileReader(FileInputStream* in) 
    : FileReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

java::io::FileReader::FileReader(FileDescriptor* fd) 
    : FileReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(fd);
}

java::io::FileReader::FileReader(::java::lang::String* path)  /* throws(IOException) */
    : FileReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(path);
}

java::io::FileReader::FileReader(File* file)  /* throws(IOException) */
    : FileReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(file);
}

void java::io::FileReader::ctor(FileInputStream* in)
{
    super::ctor();
    this->in = new InputStreamReader(in);
}

void java::io::FileReader::ctor(FileDescriptor* fd)
{
    ctor(new FileInputStream(fd));
}

void java::io::FileReader::ctor(::java::lang::String* path) /* throws(IOException) */
{
    ctor(new FileInputStream(path));
}

void java::io::FileReader::ctor(File* file) /* throws(IOException) */
{
    ctor(new FileInputStream(file));
}

int32_t java::io::FileReader::read(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */
{
    return npc(in)->read(b, offset, length);
}

void java::io::FileReader::close() /* throws(IOException) */
{
    npc(in)->close();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::FileReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.FileReader", 18);
    return c;
}

int32_t java::io::FileReader::read()
{
    return super::read();
}

int32_t java::io::FileReader::read(::char16_tArray* buffer)
{
    return super::read(buffer);
}

java::lang::Class* java::io::FileReader::getClass0()
{
    return class_();
}

