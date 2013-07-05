// Generated from /runtime/java/net/URL.java
#include <java/net/URL.hpp>

#include <avian/avianvmresource/Handler.hpp>
#include <avian/file/Handler.hpp>
#include <avian/http/Handler.hpp>
#include <avian/jar/Handler.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/net/MalformedURLException.hpp>
#include <java/net/URLConnection.hpp>
#include <java/net/URLStreamHandler.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::net::URL::URL(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::net::URL::URL(::java::lang::String* s)  /* throws(MalformedURLException) */
    : URL(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

void java::net::URL::ctor(::java::lang::String* s) /* throws(MalformedURLException) */
{
    super::ctor();
    auto colon = npc(s)->indexOf(static_cast< int32_t >(u':'));
    auto slash = npc(s)->indexOf(static_cast< int32_t >(u'/'));
    if(colon > 0 && (slash < 0 || colon < slash)) {
        handler = findHandler(npc(s)->substring(0, colon));
        npc(handler)->parseURL(this, s, colon + int32_t(1), npc(s)->length());
    } else {
        throw new MalformedURLException(s);
    }
}

java::lang::String* java::net::URL::toString()
{
    return npc(handler)->toExternalForm(this);
}

java::lang::String* java::net::URL::getProtocol()
{
    return protocol;
}

java::lang::String* java::net::URL::getHost()
{
    return host;
}

int32_t java::net::URL::getPort()
{
    return port;
}

java::lang::String* java::net::URL::getFile()
{
    return file;
}

java::lang::String* java::net::URL::getRef()
{
    return ref;
}

java::lang::String* java::net::URL::getPath()
{
    return path;
}

java::lang::String* java::net::URL::getQuery()
{
    return query;
}

java::net::URLConnection* java::net::URL::openConnection() /* throws(IOException) */
{
    return npc(handler)->openConnection(this);
}

java::io::InputStream* java::net::URL::openStream() /* throws(IOException) */
{
    return npc(openConnection())->getInputStream();
}

java::lang::Object* java::net::URL::getContent() /* throws(IOException) */
{
    return openStream();
}

java::net::URLStreamHandler* java::net::URL::findHandler(::java::lang::String* protocol) /* throws(MalformedURLException) */
{
    clinit();
    if(npc(u"http"_j)->equals(static_cast< ::java::lang::Object* >(protocol)) || npc(u"https"_j)->equals(static_cast< ::java::lang::Object* >(protocol))) {
        return new ::avian::http::Handler();
    } else if(npc(u"avianvmresource"_j)->equals(static_cast< ::java::lang::Object* >(protocol))) {
        return new ::avian::avianvmresource::Handler();
    } else if(npc(u"file"_j)->equals(static_cast< ::java::lang::Object* >(protocol))) {
        return new ::avian::file::Handler();
    } else if(npc(u"jar"_j)->equals(static_cast< ::java::lang::Object* >(protocol))) {
        return new ::avian::jar::Handler();
    } else {
        throw new MalformedURLException(::java::lang::StringBuilder().append(u"unknown protocol: "_j)->append(protocol)->toString());
    }
}

void java::net::URL::set(::java::lang::String* protocol, ::java::lang::String* host, int32_t port, ::java::lang::String* file, ::java::lang::String* ref)
{
    this->protocol = protocol;
    this->host = host;
    this->port = port;
    this->file = file;
    this->ref = ref;
    auto q = npc(file)->lastIndexOf(static_cast< int32_t >(u'?'));
    if(q != -int32_t(1)) {
        this->query = npc(file)->substring(q + int32_t(1));
        this->path = npc(file)->substring(0, q);
    } else {
        this->path = file;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::net::URL::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.net.URL", 12);
    return c;
}

java::lang::Class* java::net::URL::getClass0()
{
    return class_();
}

