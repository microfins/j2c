// Generated from /runtime/avian/file/Handler.java
#include <avian/file/Handler_FileURLConnection.hpp>

#include <java/io/File.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/net/URL.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

avian::file::Handler_FileURLConnection::Handler_FileURLConnection(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::file::Handler_FileURLConnection::Handler_FileURLConnection(::java::net::URL* url) 
    : Handler_FileURLConnection(*static_cast< ::default_init_tag* >(0))
{
    ctor(url);
}

void avian::file::Handler_FileURLConnection::ctor(::java::net::URL* url)
{
    super::ctor(url);
}

int32_t avian::file::Handler_FileURLConnection::getContentLength()
{
    return static_cast< int32_t >((new ::java::io::File(npc(url)->getFile()))->length());
}

java::io::InputStream* avian::file::Handler_FileURLConnection::getInputStream() /* throws(IOException) */
{
    return new ::java::io::FileInputStream(npc(url)->getFile());
}

void avian::file::Handler_FileURLConnection::connect()
{
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::file::Handler_FileURLConnection::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.file.Handler.FileURLConnection", 36);
    return c;
}

java::lang::Class* avian::file::Handler_FileURLConnection::getClass0()
{
    return class_();
}

