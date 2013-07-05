// Generated from /runtime/avian/http/Handler.java
#include <avian/http/Handler.hpp>

#include <java/lang/UnsupportedOperationException.hpp>

avian::http::Handler::Handler(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::http::Handler::Handler()
    : Handler(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::net::URLConnection* avian::http::Handler::openConnection(::java::net::URL* url)
{
    throw new ::java::lang::UnsupportedOperationException();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::http::Handler::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.http.Handler", 18);
    return c;
}

java::lang::Class* avian::http::Handler::getClass0()
{
    return class_();
}

