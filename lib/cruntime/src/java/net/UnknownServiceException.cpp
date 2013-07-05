// Generated from /runtime/java/net/UnknownServiceException.java
#include <java/net/UnknownServiceException.hpp>

java::net::UnknownServiceException::UnknownServiceException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::net::UnknownServiceException::UnknownServiceException(::java::lang::String* message) 
    : UnknownServiceException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::net::UnknownServiceException::UnknownServiceException() 
    : UnknownServiceException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::net::UnknownServiceException::ctor(::java::lang::String* message)
{
    super::ctor(message);
}

void java::net::UnknownServiceException::ctor()
{
    ctor(nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::net::UnknownServiceException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.net.UnknownServiceException", 32);
    return c;
}

java::lang::Class* java::net::UnknownServiceException::getClass0()
{
    return class_();
}

