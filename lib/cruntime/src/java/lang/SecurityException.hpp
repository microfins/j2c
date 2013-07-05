// Generated from /runtime/java/lang/SecurityException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::lang::SecurityException
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
    SecurityException(String* message, Throwable* cause);
    SecurityException(String* message);
    SecurityException(Throwable* cause);
    SecurityException();
protected:
    SecurityException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
