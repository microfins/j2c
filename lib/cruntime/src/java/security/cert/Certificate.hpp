// Generated from /runtime/java/security/cert/Certificate.java

#pragma once

#include <java/security/cert/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::security::cert::Certificate
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

    // Generated
    Certificate();
protected:
    Certificate(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
