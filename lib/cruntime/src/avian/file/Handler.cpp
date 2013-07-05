// Generated from /runtime/avian/file/Handler.java
#include <avian/file/Handler.hpp>

#include <avian/file/Handler_FileURLConnection.hpp>

avian::file::Handler::Handler(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::file::Handler::Handler()
    : Handler(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::net::URLConnection* avian::file::Handler::openConnection(::java::net::URL* url)
{
    return new Handler_FileURLConnection(url);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::file::Handler::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.file.Handler", 18);
    return c;
}

java::lang::Class* avian::file::Handler::getClass0()
{
    return class_();
}

