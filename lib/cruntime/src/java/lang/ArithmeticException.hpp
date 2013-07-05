// Generated from /runtime/java/lang/ArithmeticException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::lang::ArithmeticException
    : public RuntimeException
{

public:
    typedef RuntimeException super;
protected:
    void ctor(String* message);
    void ctor();

    // Generated

public:
    ArithmeticException(String* message);
    ArithmeticException();
protected:
    ArithmeticException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
