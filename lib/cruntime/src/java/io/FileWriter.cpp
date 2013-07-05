// Generated from /runtime/java/io/FileWriter.java
#include <java/io/FileWriter.hpp>

#include <java/io/FileOutputStream.hpp>
#include <java/io/OutputStreamWriter.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::FileWriter::FileWriter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::FileWriter::FileWriter(FileOutputStream* out) 
    : FileWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor(out);
}

java::io::FileWriter::FileWriter(FileDescriptor* fd) 
    : FileWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor(fd);
}

java::io::FileWriter::FileWriter(::java::lang::String* path)  /* throws(IOException) */
    : FileWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor(path);
}

java::io::FileWriter::FileWriter(File* file)  /* throws(IOException) */
    : FileWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor(file);
}

void java::io::FileWriter::ctor(FileOutputStream* out)
{
    super::ctor();
    this->out = new OutputStreamWriter(out);
}

void java::io::FileWriter::ctor(FileDescriptor* fd)
{
    ctor(new FileOutputStream(fd));
}

void java::io::FileWriter::ctor(::java::lang::String* path) /* throws(IOException) */
{
    ctor(new FileOutputStream(path));
}

void java::io::FileWriter::ctor(File* file) /* throws(IOException) */
{
    ctor(new FileOutputStream(file));
}

void java::io::FileWriter::write(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */
{
    npc(out)->write(b, offset, length);
}

void java::io::FileWriter::flush() /* throws(IOException) */
{
    npc(out)->flush();
}

void java::io::FileWriter::close() /* throws(IOException) */
{
    npc(out)->close();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::FileWriter::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.FileWriter", 18);
    return c;
}

void java::io::FileWriter::write(int32_t c)
{
    super::write(c);
}

void java::io::FileWriter::write(::char16_tArray* buffer)
{
    super::write(buffer);
}

void java::io::FileWriter::write(::java::lang::String* s)
{
    super::write(s);
}

void java::io::FileWriter::write(::java::lang::String* s, int32_t offset, int32_t length)
{
    super::write(s, offset, length);
}

java::lang::Class* java::io::FileWriter::getClass0()
{
    return class_();
}

