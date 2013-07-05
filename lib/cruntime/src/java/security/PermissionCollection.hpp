// Generated from /runtime/java/security/PermissionCollection.java

#pragma once

#include <java/security/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::security::PermissionCollection
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    virtual void add(Permission* p) = 0;

    // Generated
    PermissionCollection();
protected:
    PermissionCollection(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
