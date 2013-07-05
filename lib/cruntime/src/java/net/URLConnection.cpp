// Generated from /runtime/java/net/URLConnection.java
#include <java/net/URLConnection.hpp>

#include <java/io/InputStream.hpp>
#include <java/net/URL.hpp>
#include <java/net/UnknownServiceException.hpp>

java::net::URLConnection::URLConnection(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::net::URLConnection::URLConnection(URL* url) 
    : URLConnection(*static_cast< ::default_init_tag* >(0))
{
    ctor(url);
}

void java::net::URLConnection::init()
{
    doInput = true;
    doOutput = false;
    useCaches = true;
}

void java::net::URLConnection::ctor(URL* url)
{
    super::ctor();
    init();
    this->url = url;
}

java::lang::Object* java::net::URLConnection::getContent() /* throws(IOException) */
{
    return getInputStream();
}

int32_t java::net::URLConnection::getContentLength()
{
    return -int32_t(1);
}

java::io::InputStream* java::net::URLConnection::getInputStream() /* throws(IOException) */
{
    throw new UnknownServiceException();
}

java::io::OutputStream* java::net::URLConnection::getOutputStream() /* throws(IOException) */
{
    throw new UnknownServiceException();
}

bool java::net::URLConnection::getDoInput()
{
    return doInput;
}

bool java::net::URLConnection::getDoOutput()
{
    return doOutput;
}

void java::net::URLConnection::setDoInput(bool v)
{
    doInput = v;
}

void java::net::URLConnection::setDoOutput(bool v)
{
    doInput = v;
}

void java::net::URLConnection::setUseCaches(bool v)
{
    useCaches = v;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::net::URLConnection::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.net.URLConnection", 22);
    return c;
}

java::lang::Class* java::net::URLConnection::getClass0()
{
    return class_();
}

