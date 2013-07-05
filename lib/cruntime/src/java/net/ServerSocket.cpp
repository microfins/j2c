// Generated from /runtime/java/net/ServerSocket.java
#include <java/net/ServerSocket.hpp>

java::net::ServerSocket::ServerSocket(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::net::ServerSocket::ServerSocket()
    : ServerSocket(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::net::ServerSocket::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.net.ServerSocket", 21);
    return c;
}

java::lang::Class* java::net::ServerSocket::getClass0()
{
    return class_();
}

