// Generated from /runtime/java/lang/IllegalAccessError.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/IncompatibleClassChangeError.hpp>

struct default_init_tag;

class java::lang::IllegalAccessError
    : public IncompatibleClassChangeError
{

public:
    typedef IncompatibleClassChangeError super;
protected:
    void ctor(String* message);
    void ctor();

    // Generated

public:
    IllegalAccessError(String* message);
    IllegalAccessError();
protected:
    IllegalAccessError(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
