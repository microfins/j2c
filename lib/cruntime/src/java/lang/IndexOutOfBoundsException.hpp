// Generated from /runtime/java/lang/IndexOutOfBoundsException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::lang::IndexOutOfBoundsException
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
    IndexOutOfBoundsException(String* message, Throwable* cause);
    IndexOutOfBoundsException(String* message);
    IndexOutOfBoundsException(Throwable* cause);
    IndexOutOfBoundsException();
protected:
    IndexOutOfBoundsException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
