// Generated from /runtime/java/lang/RuntimeException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class java::lang::RuntimeException
    : public Exception
{

public:
    typedef Exception super;
protected:
    void ctor(String* message, Throwable* cause);
    void ctor(String* message);
    void ctor(Throwable* cause);
    void ctor();

    // Generated

public:
    RuntimeException(String* message, Throwable* cause);
    RuntimeException(String* message);
    RuntimeException(Throwable* cause);
    RuntimeException();
protected:
    RuntimeException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
