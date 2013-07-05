// Generated from /runtime/java/lang/ExceptionInInitializerError.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Error.hpp>

struct default_init_tag;

class java::lang::ExceptionInInitializerError
    : public Error
{

public:
    typedef Error super;

private:
    Throwable* cause2 {  };
protected:
    void ctor(String* message);
    void ctor();

    // Generated

public:
    ExceptionInInitializerError(String* message);
    ExceptionInInitializerError();
protected:
    ExceptionInInitializerError(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
