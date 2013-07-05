// Generated from /runtime/java/security/CodeSource.java
#include <java/security/CodeSource.hpp>

#include <java/net/URL.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace security
    {
        namespace cert
        {
typedef ::SubArray< ::java::security::cert::Certificate, ::java::lang::ObjectArray > CertificateArray;
        } // cert
    } // security
} // java

java::security::CodeSource::CodeSource(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::CodeSource::CodeSource(::java::net::URL* url, ::java::security::cert::CertificateArray* certificates) 
    : CodeSource(*static_cast< ::default_init_tag* >(0))
{
    ctor(url,certificates);
}

void java::security::CodeSource::ctor(::java::net::URL* url, ::java::security::cert::CertificateArray* certificates)
{
    super::ctor();
    this->url = url;
}

java::net::URL* java::security::CodeSource::getLocation()
{
    return url;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::CodeSource::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.CodeSource", 24);
    return c;
}

java::lang::Class* java::security::CodeSource::getClass0()
{
    return class_();
}

