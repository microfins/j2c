// Generated from /runtime/java/security/Permission.java
#include <java/security/Permission.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::security::Permission::Permission(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::Permission::Permission(::java::lang::String* name) 
    : Permission(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

void java::security::Permission::ctor(::java::lang::String* name)
{
    super::ctor();
    this->name = name;
}

java::lang::String* java::security::Permission::getName()
{
    return name;
}

java::lang::String* java::security::Permission::toString()
{
    return ::java::lang::StringBuilder().append(npc(this->getClass())->getSimpleName())->append(u'[')
        ->append(name)
        ->append(u']')->toString();
}

java::security::PermissionCollection* java::security::Permission::newPermissionCollection()
{
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::Permission::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.Permission", 24);
    return c;
}

java::lang::Class* java::security::Permission::getClass0()
{
    return class_();
}

