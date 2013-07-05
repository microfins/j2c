// Generated from /runtime/java/lang/IllegalAccessException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class java::lang::IllegalAccessException
    : public Exception
{

public:
    typedef Exception super;
protected:
    void ctor(String* message);
    void ctor();

    // Generated

public:
    IllegalAccessException(String* message);
    IllegalAccessException();
protected:
    IllegalAccessException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
