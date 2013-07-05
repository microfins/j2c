// Generated from /runtime/java/lang/NegativeArraySizeException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::lang::NegativeArraySizeException
    : public RuntimeException
{

public:
    typedef RuntimeException super;
protected:
    void ctor(String* message);
    void ctor();

    // Generated

public:
    NegativeArraySizeException(String* message);
    NegativeArraySizeException();
protected:
    NegativeArraySizeException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
