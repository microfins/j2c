// Generated from /runtime/java/lang/IllegalStateException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::lang::IllegalStateException
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
    IllegalStateException(String* message, Throwable* cause);
    IllegalStateException(String* message);
    IllegalStateException(Throwable* cause);
    IllegalStateException();
protected:
    IllegalStateException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
