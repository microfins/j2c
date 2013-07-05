// Generated from /runtime/java/net/MalformedURLException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class java::net::MalformedURLException
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;
protected:
    void ctor(::java::lang::String* message);
    void ctor();

    // Generated

public:
    MalformedURLException(::java::lang::String* message);
    MalformedURLException();
protected:
    MalformedURLException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
