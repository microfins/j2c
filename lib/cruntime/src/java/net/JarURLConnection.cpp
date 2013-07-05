// Generated from /runtime/java/net/JarURLConnection.java
#include <java/net/JarURLConnection.hpp>

java::net::JarURLConnection::JarURLConnection(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::net::JarURLConnection::JarURLConnection(URL* url) 
    : JarURLConnection(*static_cast< ::default_init_tag* >(0))
{
    ctor(url);
}

void java::net::JarURLConnection::ctor(URL* url)
{
    super::ctor(url);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::net::JarURLConnection::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.net.JarURLConnection", 25);
    return c;
}

java::lang::Class* java::net::JarURLConnection::getClass0()
{
    return class_();
}

