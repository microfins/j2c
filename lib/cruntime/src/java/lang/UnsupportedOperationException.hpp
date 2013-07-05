// Generated from /runtime/java/lang/UnsupportedOperationException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::lang::UnsupportedOperationException
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
    UnsupportedOperationException(String* message, Throwable* cause);
    UnsupportedOperationException(String* message);
    UnsupportedOperationException(Throwable* cause);
    UnsupportedOperationException();
protected:
    UnsupportedOperationException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
