// Generated from /runtime/java/security/AccessControlException.java
#include <java/security/AccessControlException.hpp>

#include <java/security/Permission.hpp>

java::security::AccessControlException::AccessControlException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::AccessControlException::AccessControlException(::java::lang::String* message) 
    : AccessControlException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::security::AccessControlException::AccessControlException(::java::lang::String* message, Permission* permission) 
    : AccessControlException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,permission);
}

void java::security::AccessControlException::ctor(::java::lang::String* message)
{
    ctor(message, nullptr);
}

void java::security::AccessControlException::ctor(::java::lang::String* message, Permission* permission)
{
    super::ctor(message);
    this->permission = permission;
}

java::security::Permission* java::security::AccessControlException::getPermission()
{
    return permission;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::AccessControlException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.AccessControlException", 36);
    return c;
}

java::lang::Class* java::security::AccessControlException::getClass0()
{
    return class_();
}

