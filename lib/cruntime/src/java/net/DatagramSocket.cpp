// Generated from /runtime/java/net/DatagramSocket.java
#include <java/net/DatagramSocket.hpp>

java::net::DatagramSocket::DatagramSocket(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::net::DatagramSocket::DatagramSocket()
    : DatagramSocket(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::net::DatagramSocket::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.net.DatagramSocket", 23);
    return c;
}

java::lang::Class* java::net::DatagramSocket::getClass0()
{
    return class_();
}

