// Generated from /runtime/java/lang/InterruptedException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class java::lang::InterruptedException
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
    InterruptedException(String* message, Throwable* cause);
    InterruptedException(String* message);
    InterruptedException(Throwable* cause);
    InterruptedException();
protected:
    InterruptedException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
