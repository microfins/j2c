// Generated from /runtime/java/security/SecurityPermission.java
#include <java/security/SecurityPermission.hpp>

java::security::SecurityPermission::SecurityPermission(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::SecurityPermission::SecurityPermission(::java::lang::String* name) 
    : SecurityPermission(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

void java::security::SecurityPermission::ctor(::java::lang::String* name)
{
    super::ctor(name);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::SecurityPermission::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.SecurityPermission", 32);
    return c;
}

java::lang::Class* java::security::SecurityPermission::getClass0()
{
    return class_();
}

