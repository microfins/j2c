// Generated from /runtime/java/lang/SecurityManager.java
#include <java/lang/SecurityManager.hpp>

#include <java/security/AccessController.hpp>
#include <java/security/SecurityPermission.hpp>

java::lang::SecurityManager::SecurityManager(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::SecurityManager::SecurityManager() 
    : SecurityManager(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::SecurityManager::ctor()
{
    super::ctor();
}

void java::lang::SecurityManager::checkPermission(::java::security::Permission* perm)
{
    ::java::security::AccessController::checkPermission(perm);
}

void java::lang::SecurityManager::checkSecurityAccess(String* target)
{
    checkPermission(new ::java::security::SecurityPermission(target));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::SecurityManager::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.SecurityManager", 25);
    return c;
}

java::lang::Class* java::lang::SecurityManager::getClass0()
{
    return class_();
}

