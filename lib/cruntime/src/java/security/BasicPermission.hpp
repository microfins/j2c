// Generated from /runtime/java/security/BasicPermission.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/security/fwd-runtime.hpp>
#include <java/security/Permission.hpp>

struct default_init_tag;

class java::security::BasicPermission
    : public Permission
{

public:
    typedef Permission super;
protected:
    void ctor(::java::lang::String* name);

    // Generated

public:
    BasicPermission(::java::lang::String* name);
protected:
    BasicPermission(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
