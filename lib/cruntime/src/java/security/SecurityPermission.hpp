// Generated from /runtime/java/security/SecurityPermission.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/security/fwd-runtime.hpp>
#include <java/security/BasicPermission.hpp>

struct default_init_tag;

class java::security::SecurityPermission
    : public BasicPermission
{

public:
    typedef BasicPermission super;
protected:
    void ctor(::java::lang::String* name);

    // Generated

public:
    SecurityPermission(::java::lang::String* name);
protected:
    SecurityPermission(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
