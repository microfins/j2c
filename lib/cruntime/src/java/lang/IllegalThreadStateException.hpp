// Generated from /runtime/java/lang/IllegalThreadStateException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/IllegalArgumentException.hpp>

struct default_init_tag;

class java::lang::IllegalThreadStateException
    : public IllegalArgumentException
{

public:
    typedef IllegalArgumentException super;
protected:
    void ctor(String* message, Throwable* cause);
    void ctor(String* message);
    void ctor(Throwable* cause);
    void ctor();

    // Generated

public:
    IllegalThreadStateException(String* message, Throwable* cause);
    IllegalThreadStateException(String* message);
    IllegalThreadStateException(Throwable* cause);
    IllegalThreadStateException();
protected:
    IllegalThreadStateException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
