// Generated from /runtime/java/security/Permission.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/security/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::security::Permission
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::lang::String* name {  };
protected:
    void ctor(::java::lang::String* name);

public:
    virtual ::java::lang::String* getName();
    ::java::lang::String* toString() override;
    virtual PermissionCollection* newPermissionCollection();

    // Generated
    Permission(::java::lang::String* name);
protected:
    Permission(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
