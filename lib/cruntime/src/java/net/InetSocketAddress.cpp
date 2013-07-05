// Generated from /runtime/java/net/InetSocketAddress.java
#include <java/net/InetSocketAddress.hpp>

#include <java/lang/String.hpp>

java::net::InetSocketAddress::InetSocketAddress(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::net::InetSocketAddress::InetSocketAddress(::java::lang::String* host, int32_t port) 
    : InetSocketAddress(*static_cast< ::default_init_tag* >(0))
{
    ctor(host,port);
}

void java::net::InetSocketAddress::ctor(::java::lang::String* host, int32_t port)
{
    super::ctor();
    this->host = host;
    this->port = port;
}

java::lang::String* java::net::InetSocketAddress::getHostName()
{
    return host;
}

int32_t java::net::InetSocketAddress::getPort()
{
    return port;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::net::InetSocketAddress::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.net.InetSocketAddress", 26);
    return c;
}

java::lang::Class* java::net::InetSocketAddress::getClass0()
{
    return class_();
}

