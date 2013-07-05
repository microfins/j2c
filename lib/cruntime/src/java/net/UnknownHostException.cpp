// Generated from /runtime/java/net/UnknownHostException.java
#include <java/net/UnknownHostException.hpp>

java::net::UnknownHostException::UnknownHostException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::net::UnknownHostException::UnknownHostException(::java::lang::String* host) 
    : UnknownHostException(*static_cast< ::default_init_tag* >(0))
{
    ctor(host);
}

java::net::UnknownHostException::UnknownHostException() 
    : UnknownHostException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::net::UnknownHostException::ctor(::java::lang::String* host)
{
    super::ctor(host);
}

void java::net::UnknownHostException::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::net::UnknownHostException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.net.UnknownHostException", 29);
    return c;
}

java::lang::Class* java::net::UnknownHostException::getClass0()
{
    return class_();
}

