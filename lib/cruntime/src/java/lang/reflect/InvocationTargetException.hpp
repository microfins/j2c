// Generated from /runtime/java/lang/reflect/InvocationTargetException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/reflect/fwd-runtime.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class java::lang::reflect::InvocationTargetException
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;

private:
    ::java::lang::Throwable* target {  };
protected:
    void ctor(::java::lang::Throwable* targetException, ::java::lang::String* message);
    void ctor(::java::lang::Throwable* targetException);
    void ctor();

public:
    virtual ::java::lang::Throwable* getTargetException();

    // Generated
    InvocationTargetException(::java::lang::Throwable* targetException, ::java::lang::String* message);
    InvocationTargetException(::java::lang::Throwable* targetException);
    InvocationTargetException();
protected:
    InvocationTargetException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
