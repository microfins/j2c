// Generated from /runtime/java/net/SocketException.java
#include <java/net/SocketException.hpp>

java::net::SocketException::SocketException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::net::SocketException::SocketException(::java::lang::String* message) 
    : SocketException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::net::SocketException::SocketException() 
    : SocketException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::net::SocketException::ctor(::java::lang::String* message)
{
    super::ctor(message);
}

void java::net::SocketException::ctor()
{
    ctor(nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::net::SocketException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.net.SocketException", 24);
    return c;
}

java::lang::Class* java::net::SocketException::getClass0()
{
    return class_();
}

