// Generated from /runtime/java/security/Permissions.java
#include <java/security/Permissions.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/security/Permission.hpp>
#include <java/security/PermissionCollection.hpp>
#include <java/security/Permissions_MyPermissionCollection.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>

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

java::security::Permissions::Permissions(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::Permissions::Permissions()
    : Permissions(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::security::Permissions::ctor()
{
    super::ctor();
    init();
}

void java::security::Permissions::init()
{
    collections = new ::java::util::HashMap();
}

void java::security::Permissions::add(Permission* p)
{
    auto c = npc(p)->getClass();
    auto pc = java_cast< PermissionCollection* >(npc(collections)->get(c));
    if(pc == nullptr) {
        pc = npc(p)->newPermissionCollection();
        if(pc == nullptr) {
            pc = new Permissions_MyPermissionCollection();
        }
        npc(collections)->put(c, pc);
    }
    npc(pc)->add(p);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::Permissions::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.Permissions", 25);
    return c;
}

java::lang::Class* java::security::Permissions::getClass0()
{
    return class_();
}

