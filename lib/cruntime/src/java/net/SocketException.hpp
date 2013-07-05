// Generated from /runtime/java/net/SocketException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/io/IOException.hpp>

struct default_init_tag;

class java::net::SocketException
    : public ::java::io::IOException
{

public:
    typedef ::java::io::IOException super;
protected:
    void ctor(::java::lang::String* message);
    void ctor();

    // Generated

public:
    SocketException(::java::lang::String* message);
    SocketException();
protected:
    SocketException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
