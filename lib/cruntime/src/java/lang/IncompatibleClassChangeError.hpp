// Generated from /runtime/java/lang/IncompatibleClassChangeError.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/LinkageError.hpp>

struct default_init_tag;

class java::lang::IncompatibleClassChangeError
    : public LinkageError
{

public:
    typedef LinkageError super;
protected:
    void ctor(String* message);
    void ctor();

    // Generated

public:
    IncompatibleClassChangeError(String* message);
    IncompatibleClassChangeError();
protected:
    IncompatibleClassChangeError(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
