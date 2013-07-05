// Generated from /runtime/java/lang/AbstractMethodError.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/IncompatibleClassChangeError.hpp>

struct default_init_tag;

class java::lang::AbstractMethodError
    : public IncompatibleClassChangeError
{

public:
    typedef IncompatibleClassChangeError super;
protected:
    void ctor();
    void ctor(String* message);

    // Generated

public:
    AbstractMethodError();
    AbstractMethodError(String* message);
protected:
    AbstractMethodError(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
