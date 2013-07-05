// Generated from /runtime/avian/avianvmresource/Handler.java
#include <avian/avianvmresource/Handler.hpp>

#include <avian/avianvmresource/Handler_ResourceConnection.hpp>

avian::avianvmresource::Handler::Handler(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::avianvmresource::Handler::Handler()
    : Handler(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::net::URLConnection* avian::avianvmresource::Handler::openConnection(::java::net::URL* url)
{
    return new Handler_ResourceConnection(url);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::avianvmresource::Handler::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.avianvmresource.Handler", 29);
    return c;
}

java::lang::Class* avian::avianvmresource::Handler::getClass0()
{
    return class_();
}

