// Generated from /runtime/java/security/PermissionCollection.java
#include <java/security/PermissionCollection.hpp>

java::security::PermissionCollection::PermissionCollection(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::PermissionCollection::PermissionCollection()
    : PermissionCollection(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::PermissionCollection::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.PermissionCollection", 34);
    return c;
}

java::lang::Class* java::security::PermissionCollection::getClass0()
{
    return class_();
}

