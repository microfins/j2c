// Generated from /runtime/java/lang/IllegalArgumentException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::lang::IllegalArgumentException
    : public RuntimeException
{

public:
    typedef RuntimeException super;
protected:
    void ctor(String* message, Throwable* cause);
    void ctor(String* message);
    void ctor(Throwable* cause);
    void ctor();

    // Generated

public:
    IllegalArgumentException(String* message, Throwable* cause);
    IllegalArgumentException(String* message);
    IllegalArgumentException(Throwable* cause);
    IllegalArgumentException();
protected:
    IllegalArgumentException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
