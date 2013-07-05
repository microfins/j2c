// Generated from /runtime/avian/avianvmresource/Handler.java
#include <avian/avianvmresource/Handler_ResourceInputStream.hpp>

#include <java/io/FileNotFoundException.hpp>
#include <java/io/IOException.hpp>
#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

avian::avianvmresource::Handler_ResourceInputStream::Handler_ResourceInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::avianvmresource::Handler_ResourceInputStream::Handler_ResourceInputStream(::java::lang::String* path)  /* throws(IOException) */
    : Handler_ResourceInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(path);
}

void avian::avianvmresource::Handler_ResourceInputStream::ctor(::java::lang::String* path) /* throws(IOException) */
{
    super::ctor();
    peer = open(path);
    if(peer == 0) {
        throw new ::java::io::FileNotFoundException(path);
    }
}

int32_t avian::avianvmresource::Handler_ResourceInputStream::available()
{
    return available(peer, position);
}

int32_t avian::avianvmresource::Handler_ResourceInputStream::read() /* throws(IOException) */
{
    if(peer != 0) {
        auto c = read(peer, position);
        if(c >= 0) {
            ++position;
        }
        return c;
    } else {
        throw new ::java::io::IOException();
    }
}

int32_t avian::avianvmresource::Handler_ResourceInputStream::read(::int8_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */
{
    if(peer != 0) {
        if(b == nullptr) {
            throw new ::java::lang::NullPointerException();
        }
        if(offset < 0 || offset + length > npc(b)->length) {
            throw new ::java::lang::ArrayIndexOutOfBoundsException();
        }
        auto c = read(peer, position, b, offset, length);
        if(c >= 0) {
            position += c;
        }
        return c;
    } else {
        throw new ::java::io::IOException();
    }
}

void avian::avianvmresource::Handler_ResourceInputStream::close() /* throws(IOException) */
{
    if(peer != 0) {
        close(peer);
        peer = 0;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::avianvmresource::Handler_ResourceInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.avianvmresource.Handler.ResourceInputStream", 49);
    return c;
}

int32_t avian::avianvmresource::Handler_ResourceInputStream::read(::int8_tArray* buffer)
{
    return super::read(buffer);
}

java::lang::Class* avian::avianvmresource::Handler_ResourceInputStream::getClass0()
{
    return class_();
}

