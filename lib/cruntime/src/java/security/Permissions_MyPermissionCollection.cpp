// Generated from /runtime/java/security/Permissions.java
#include <java/security/Permissions_MyPermissionCollection.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/security/Permission.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Set.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::security::Permissions_MyPermissionCollection::Permissions_MyPermissionCollection(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::Permissions_MyPermissionCollection::Permissions_MyPermissionCollection()
    : Permissions_MyPermissionCollection(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::security::Permissions_MyPermissionCollection::ctor()
{
    super::ctor();
    init();
}

void java::security::Permissions_MyPermissionCollection::init()
{
    permissions = new ::java::util::HashSet();
}

void java::security::Permissions_MyPermissionCollection::add(Permission* p)
{
    npc(permissions)->add(p);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::Permissions_MyPermissionCollection::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.Permissions.MyPermissionCollection", 48);
    return c;
}

java::lang::Class* java::security::Permissions_MyPermissionCollection::getClass0()
{
    return class_();
}

