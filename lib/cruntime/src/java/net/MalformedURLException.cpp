// Generated from /runtime/java/net/MalformedURLException.java
#include <java/net/MalformedURLException.hpp>

java::net::MalformedURLException::MalformedURLException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::net::MalformedURLException::MalformedURLException(::java::lang::String* message) 
    : MalformedURLException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::net::MalformedURLException::MalformedURLException() 
    : MalformedURLException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::net::MalformedURLException::ctor(::java::lang::String* message)
{
    super::ctor(message);
}

void java::net::MalformedURLException::ctor()
{
    ctor(nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::net::MalformedURLException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.net.MalformedURLException", 30);
    return c;
}

java::lang::Class* java::net::MalformedURLException::getClass0()
{
    return class_();
}

