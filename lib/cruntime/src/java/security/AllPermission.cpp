// Generated from /runtime/java/security/AllPermission.java
#include <java/security/AllPermission.hpp>

#include <java/lang/String.hpp>

java::security::AllPermission::AllPermission(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::AllPermission::AllPermission() 
    : AllPermission(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::security::AllPermission::ctor()
{
    super::ctor(u"<all>"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::AllPermission::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.AllPermission", 27);
    return c;
}

java::lang::Class* java::security::AllPermission::getClass0()
{
    return class_();
}

