// Generated from /runtime/java/io/IOException.java

#pragma once

#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class java::io::IOException
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;
protected:
    void ctor(::java::lang::String* message, ::java::lang::Throwable* cause);
    void ctor(::java::lang::String* message);
    void ctor(::java::lang::Throwable* cause);
    void ctor();

    // Generated

public:
    IOException(::java::lang::String* message, ::java::lang::Throwable* cause);
    IOException(::java::lang::String* message);
    IOException(::java::lang::Throwable* cause);
    IOException();
protected:
    IOException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
