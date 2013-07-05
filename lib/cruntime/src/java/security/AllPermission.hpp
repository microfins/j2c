// Generated from /runtime/java/security/AllPermission.java

#pragma once

#include <java/security/fwd-runtime.hpp>
#include <java/security/Permission.hpp>

struct default_init_tag;

class java::security::AllPermission
    : public Permission
{

public:
    typedef Permission super;
protected:
    void ctor();

    // Generated

public:
    AllPermission();
protected:
    AllPermission(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
