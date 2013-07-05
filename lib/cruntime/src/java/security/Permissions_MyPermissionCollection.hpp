// Generated from /runtime/java/security/Permissions.java

#pragma once

#include <java/security/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/security/PermissionCollection.hpp>

struct default_init_tag;

class java::security::Permissions_MyPermissionCollection
    : public PermissionCollection
{

public:
    typedef PermissionCollection super;

private:
    ::java::util::Set* permissions {  };

public:
    void add(Permission* p) override;

    // Generated
    Permissions_MyPermissionCollection();
protected:
    void ctor();
    Permissions_MyPermissionCollection(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class Permissions;
};
