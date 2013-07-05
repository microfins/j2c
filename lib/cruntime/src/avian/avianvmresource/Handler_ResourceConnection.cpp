// Generated from /runtime/avian/avianvmresource/Handler.java
#include <avian/avianvmresource/Handler_ResourceConnection.hpp>

#include <avian/avianvmresource/Handler_ResourceInputStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/net/URL.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

avian::avianvmresource::Handler_ResourceConnection::Handler_ResourceConnection(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::avianvmresource::Handler_ResourceConnection::Handler_ResourceConnection(::java::net::URL* url) 
    : Handler_ResourceConnection(*static_cast< ::default_init_tag* >(0))
{
    ctor(url);
}

void avian::avianvmresource::Handler_ResourceConnection::ctor(::java::net::URL* url)
{
    super::ctor(url);
}

int32_t avian::avianvmresource::Handler_ResourceConnection::getContentLength()
{
    return Handler_ResourceInputStream::getContentLength(npc(url)->getFile());
}

java::io::InputStream* avian::avianvmresource::Handler_ResourceConnection::getInputStream() /* throws(IOException) */
{
    return new Handler_ResourceInputStream(npc(url)->getFile());
}

void avian::avianvmresource::Handler_ResourceConnection::connect()
{
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::avianvmresource::Handler_ResourceConnection::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.avianvmresource.Handler.ResourceConnection", 48);
    return c;
}

java::lang::Class* avian::avianvmresource::Handler_ResourceConnection::getClass0()
{
    return class_();
}

