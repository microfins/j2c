// Generated from /runtime/java/lang/RuntimePermission.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/security/BasicPermission.hpp>

struct default_init_tag;

class java::lang::RuntimePermission
    : public ::java::security::BasicPermission
{

public:
    typedef ::java::security::BasicPermission super;
protected:
    void ctor(String* name);

    // Generated

public:
    RuntimePermission(String* name);
protected:
    RuntimePermission(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
