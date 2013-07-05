// Generated from /runtime/java/lang/ClassNotFoundException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class java::lang::ClassNotFoundException
    : public Exception
{

public:
    typedef Exception super;

private:
    Throwable* cause2 {  };
protected:
    void ctor(String* message, Throwable* cause);
    void ctor(String* message);
    void ctor();

    // Generated

public:
    ClassNotFoundException(String* message, Throwable* cause);
    ClassNotFoundException(String* message);
    ClassNotFoundException();
protected:
    ClassNotFoundException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
