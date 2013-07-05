// Generated from /runtime/java/security/AccessController.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/security/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::security::AccessController
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static ::java::lang::Object* doPrivileged(PrivilegedAction* action);
    static void checkPermission(Permission* perm) /* throws(AccessControlException) */;

    // Generated
    AccessController();
protected:
    AccessController(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
