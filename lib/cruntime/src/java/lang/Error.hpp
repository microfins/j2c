// Generated from /runtime/java/lang/Error.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Throwable.hpp>

struct default_init_tag;

class java::lang::Error
    : public Throwable
{

public:
    typedef Throwable super;
protected:
    void ctor(String* message, Throwable* cause);
    void ctor(String* message);
    void ctor(Throwable* cause);
    void ctor();

    // Generated

public:
    Error(String* message, Throwable* cause);
    Error(String* message);
    Error(Throwable* cause);
    Error();
protected:
    Error(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
