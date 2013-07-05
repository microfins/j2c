// Generated from /runtime/java/net/UnknownHostException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/io/IOException.hpp>

struct default_init_tag;

class java::net::UnknownHostException
    : public ::java::io::IOException
{

public:
    typedef ::java::io::IOException super;
protected:
    void ctor(::java::lang::String* host);
    void ctor();

    // Generated

public:
    UnknownHostException(::java::lang::String* host);
    UnknownHostException();
protected:
    UnknownHostException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
