// Generated from /runtime/java/security/BasicPermission.java
#include <java/security/BasicPermission.hpp>

java::security::BasicPermission::BasicPermission(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::BasicPermission::BasicPermission(::java::lang::String* name) 
    : BasicPermission(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

void java::security::BasicPermission::ctor(::java::lang::String* name)
{
    super::ctor(name);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::BasicPermission::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.BasicPermission", 29);
    return c;
}

java::lang::Class* java::security::BasicPermission::getClass0()
{
    return class_();
}

