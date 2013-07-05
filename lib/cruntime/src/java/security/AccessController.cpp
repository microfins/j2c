// Generated from /runtime/java/security/AccessController.java
#include <java/security/AccessController.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/security/PrivilegedAction.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::security::AccessController::AccessController(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::AccessController::AccessController()
    : AccessController(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::Object* java::security::AccessController::doPrivileged(PrivilegedAction* action)
{
    clinit();
    return java_cast< ::java::lang::Object* >(npc(action)->run());
}

void java::security::AccessController::checkPermission(Permission* perm) /* throws(AccessControlException) */
{
    clinit();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::AccessController::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.AccessController", 30);
    return c;
}

java::lang::Class* java::security::AccessController::getClass0()
{
    return class_();
}

