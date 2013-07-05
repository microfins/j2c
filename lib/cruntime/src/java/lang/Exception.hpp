// Generated from /runtime/java/lang/Exception.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Throwable.hpp>

struct default_init_tag;

class java::lang::Exception
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
    Exception(String* message, Throwable* cause);
    Exception(String* message);
    Exception(Throwable* cause);
    Exception();
protected:
    Exception(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
