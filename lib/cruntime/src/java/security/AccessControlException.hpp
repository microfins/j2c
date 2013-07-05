// Generated from /runtime/java/security/AccessControlException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/security/fwd-runtime.hpp>
#include <java/lang/SecurityException.hpp>

struct default_init_tag;

class java::security::AccessControlException
    : public ::java::lang::SecurityException
{

public:
    typedef ::java::lang::SecurityException super;

private:
    Permission* permission {  };
protected:
    void ctor(::java::lang::String* message);
    void ctor(::java::lang::String* message, Permission* permission);

public:
    virtual Permission* getPermission();

    // Generated
    AccessControlException(::java::lang::String* message);
    AccessControlException(::java::lang::String* message, Permission* permission);
protected:
    AccessControlException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
