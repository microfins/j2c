// Generated from /runtime/java/net/Socket.java
#include <java/net/Socket.hpp>

java::net::Socket::Socket(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::net::Socket::Socket()
    : Socket(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::net::Socket::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.net.Socket", 15);
    return c;
}

java::lang::Class* java::net::Socket::getClass0()
{
    return class_();
}

