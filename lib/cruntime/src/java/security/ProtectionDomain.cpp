// Generated from /runtime/java/security/ProtectionDomain.java
#include <java/security/ProtectionDomain.hpp>

#include <java/security/CodeSource.hpp>
#include <java/security/PermissionCollection.hpp>

java::security::ProtectionDomain::ProtectionDomain(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::ProtectionDomain::ProtectionDomain(CodeSource* codeSource, PermissionCollection* permissions) 
    : ProtectionDomain(*static_cast< ::default_init_tag* >(0))
{
    ctor(codeSource,permissions);
}

void java::security::ProtectionDomain::ctor(CodeSource* codeSource, PermissionCollection* permissions)
{
    super::ctor();
    this->codeSource = codeSource;
    this->permissions = permissions;
}

java::security::CodeSource* java::security::ProtectionDomain::getCodeSource()
{
    return codeSource;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::ProtectionDomain::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.ProtectionDomain", 30);
    return c;
}

java::lang::Class* java::security::ProtectionDomain::getClass0()
{
    return class_();
}

