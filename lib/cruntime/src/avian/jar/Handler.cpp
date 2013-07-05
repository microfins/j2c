// Generated from /runtime/avian/jar/Handler.java
#include <avian/jar/Handler.hpp>

#include <avian/jar/Handler_MyJarURLConnection.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/net/MalformedURLException.hpp>
#include <java/net/URL.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

avian::jar::Handler::Handler(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::jar::Handler::Handler()
    : Handler(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::net::URLConnection* avian::jar::Handler::openConnection(::java::net::URL* url)
{
    return new Handler_MyJarURLConnection(url);
}

void avian::jar::Handler::parseURL(::java::net::URL* url, ::java::lang::String* s, int32_t start, int32_t end) /* throws(MalformedURLException) */
{
    s = npc(npc(s)->toString())->substring(4);
    auto index = npc(s)->indexOf(u"!/"_j);
    if(index < 0) {
        throw new ::java::net::MalformedURLException();
    }
    auto file = new ::java::net::URL(npc(s)->substring(0, index));
    if(!npc(u"file"_j)->equals(static_cast< ::java::lang::Object* >(npc(file)->getProtocol()))) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"protocol "_j)->append(npc(file)->getProtocol())
            ->append(u" not yet supported"_j)->toString());
    }
    npc(url)->set(u"jar"_j, u""_j, -int32_t(1), s, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::jar::Handler::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.jar.Handler", 17);
    return c;
}

java::lang::Class* avian::jar::Handler::getClass0()
{
    return class_();
}

