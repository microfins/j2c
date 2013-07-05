// Generated from /runtime/java/io/RandomAccessFile.java
#include <java/io/RandomAccessFile.hpp>

#include <java/io/EOFException.hpp>
#include <java/io/File.hpp>
#include <java/io/IOException.hpp>
#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::RandomAccessFile::RandomAccessFile(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::RandomAccessFile::RandomAccessFile(::java::lang::String* name, ::java::lang::String* mode)  /* throws(FileNotFoundException) */
    : RandomAccessFile(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,mode);
}

void java::io::RandomAccessFile::init()
{
    position = int32_t(0);
}

void java::io::RandomAccessFile::ctor(::java::lang::String* name, ::java::lang::String* mode) /* throws(FileNotFoundException) */
{
    super::ctor();
    init();
    if(!npc(mode)->equals(static_cast< ::java::lang::Object* >(u"r"_j)))
        throw new ::java::lang::IllegalArgumentException();

    file = new File(name);
    open();
}

void java::io::RandomAccessFile::open() /* throws(FileNotFoundException) */
{
    auto result = new ::int64_tArray(int32_t(2));
    open(npc(file)->getPath(), result);
    peer = (*result)[int32_t(0)];
    length_ = (*result)[int32_t(1)];
}

void java::io::RandomAccessFile::refresh() /* throws(IOException) */
{
    if(npc(file)->length() != length_) {
        close();
        open();
    }
}

int64_t java::io::RandomAccessFile::length() /* throws(IOException) */
{
    refresh();
    return length_;
}

int64_t java::io::RandomAccessFile::getFilePointer() /* throws(IOException) */
{
    return position;
}

void java::io::RandomAccessFile::seek(int64_t position) /* throws(IOException) */
{
    if(position < 0 || position > length())
        throw new IOException();

    this->position = position;
}

int32_t java::io::RandomAccessFile::skipBytes(int32_t count) /* throws(IOException) */
{
    if(position + count > length())
        throw new IOException();

    this->position = position + count;
    return count;
}

int32_t java::io::RandomAccessFile::read(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */
{
    if(b == nullptr)
        throw new ::java::lang::IllegalArgumentException();

    if(peer == 0)
        throw new IOException();

    if(len == 0)
        return 0;

    if(position + len > this->length_)
        throw new EOFException();

    if(off < 0 || off + len > npc(b)->length)
        throw new ::java::lang::ArrayIndexOutOfBoundsException();

    auto bytesRead = readBytes(peer, position, b, off, len);
    position += bytesRead;
    return bytesRead;
}

int32_t java::io::RandomAccessFile::read(::int8_tArray* b) /* throws(IOException) */
{
    if(b == nullptr)
        throw new ::java::lang::IllegalArgumentException();

    if(peer == 0)
        throw new IOException();

    if(npc(b)->length == 0)
        return 0;

    if(position + npc(b)->length > this->length_)
        throw new EOFException();

    auto bytesRead = readBytes(peer, position, b, 0, npc(b)->length);
    position += bytesRead;
    return bytesRead;
}

void java::io::RandomAccessFile::readFully(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */
{
    if(b == nullptr)
        throw new ::java::lang::IllegalArgumentException();

    if(peer == 0)
        throw new IOException();

    if(len == 0)
        return;

    if(position + len > this->length_)
        throw new EOFException();

    if(off < 0 || off + len > npc(b)->length)
        throw new ::java::lang::ArrayIndexOutOfBoundsException();

    auto n = int32_t(0);
    do {
        auto count = readBytes(peer, position, b, off + n, len - n);
        position += count;
        if(count == 0)
            throw new EOFException();

        n += count;
    } while (n < len);
}

void java::io::RandomAccessFile::readFully(::int8_tArray* b) /* throws(IOException) */
{
    readFully(b, 0, npc(b)->length);
}

void java::io::RandomAccessFile::close() /* throws(IOException) */
{
    if(peer != 0) {
        close(peer);
        peer = 0;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::RandomAccessFile::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.RandomAccessFile", 24);
    return c;
}

java::lang::Class* java::io::RandomAccessFile::getClass0()
{
    return class_();
}

