// Generated from /runtime/java/lang/ArrayIndexOutOfBoundsException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>

struct default_init_tag;

class java::lang::ArrayIndexOutOfBoundsException
    : public IndexOutOfBoundsException
{

public:
    typedef IndexOutOfBoundsException super;
protected:
    void ctor(String* message, Throwable* cause);
    void ctor(String* message);
    void ctor(Throwable* cause);
    void ctor();

    // Generated

public:
    ArrayIndexOutOfBoundsException(String* message, Throwable* cause);
    ArrayIndexOutOfBoundsException(String* message);
    ArrayIndexOutOfBoundsException(Throwable* cause);
    ArrayIndexOutOfBoundsException();
protected:
    ArrayIndexOutOfBoundsException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
