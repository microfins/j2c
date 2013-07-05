// Generated from /runtime/java/lang/SecurityManager.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/security/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::SecurityManager
    : public virtual Object
{

public:
    typedef Object super;
protected:
    void ctor();

public:
    virtual void checkPermission(::java::security::Permission* perm);
    virtual void checkSecurityAccess(String* target);

    // Generated
    SecurityManager();
protected:
    SecurityManager(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
