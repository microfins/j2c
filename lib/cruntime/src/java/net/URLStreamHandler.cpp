// Generated from /runtime/java/net/URLStreamHandler.java
#include <java/net/URLStreamHandler.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/net/URL.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::net::URLStreamHandler::URLStreamHandler(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::net::URLStreamHandler::URLStreamHandler()
    : URLStreamHandler(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::net::URLStreamHandler::parseURL(URL* url, ::java::lang::String* s, int32_t start, int32_t end) /* throws(MalformedURLException) */
{
    auto protocol = npc(s)->substring(0, start - int32_t(1));
    s = npc(s)->substring(start, end);
    ::java::lang::String* host = nullptr;
    auto port = -int32_t(1);
    if(npc(s)->startsWith(u"//"_j)) {
        s = npc(s)->substring(2);
        auto colon = npc(s)->indexOf(static_cast< int32_t >(u':'));
        auto slash = npc(s)->indexOf(static_cast< int32_t >(u'/'));
        if(slash < 0) {
            if(colon < 0) {
                host = s;
            } else {
                host = npc(s)->substring(0, colon);
                port = ::java::lang::Integer::parseInt(npc(s)->substring(colon + int32_t(1)));
            }
            s = u""_j;
        } else {
            if(colon < 0 || colon > slash) {
                host = npc(s)->substring(0, slash);
            } else {
                host = npc(s)->substring(0, colon);
                port = ::java::lang::Integer::parseInt(npc(s)->substring(colon + int32_t(1), slash));
            }
            s = npc(s)->substring(slash);
        }
    }
    ::java::lang::String* file = nullptr;
    if(npc(s)->length() > 0) {
        file = s;
    }
    npc(url)->set(protocol, host, port, file, nullptr);
}

bool java::net::URLStreamHandler::equals(::java::lang::String* a, ::java::lang::String* b)
{
    clinit();
    return (a == nullptr && b == nullptr) || (a != nullptr && npc(a)->equals(static_cast< ::java::lang::Object* >(b)));
}

bool java::net::URLStreamHandler::equals(URL* a, URL* b)
{
    return equals(npc(a)->getHost(), npc(b)->getHost()) && (npc(a)->getPort() == npc(b)->getPort()) && equals(npc(a)->getFile(), npc(b)->getFile());
}

java::lang::String* java::net::URLStreamHandler::toExternalForm(URL* url)
{
    auto sb = new ::java::lang::StringBuilder();
    npc(npc(sb)->append(npc(url)->getProtocol()))->append(u":"_j);
    if(npc(url)->getHost() != nullptr) {
        npc(npc(sb)->append(u"//"_j))->append(npc(url)->getHost());
        if(npc(url)->getPort() >= 0) {
            npc(npc(sb)->append(u":"_j))->append(npc(url)->getPort());
        }
    }
    if(npc(url)->getFile() != nullptr) {
        npc(sb)->append(npc(url)->getFile());
    }
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::net::URLStreamHandler::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.net.URLStreamHandler", 25);
    return c;
}

bool java::net::URLStreamHandler::equals(::java::lang::Object* o)
{
    return super::equals(o);
}

java::lang::Class* java::net::URLStreamHandler::getClass0()
{
    return class_();
}

