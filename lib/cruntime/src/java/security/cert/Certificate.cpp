// Generated from /runtime/java/security/cert/Certificate.java
#include <java/security/cert/Certificate.hpp>

java::security::cert::Certificate::Certificate(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::cert::Certificate::Certificate()
    : Certificate(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::cert::Certificate::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.cert.Certificate", 30);
    return c;
}

java::lang::Class* java::security::cert::Certificate::getClass0()
{
    return class_();
}

