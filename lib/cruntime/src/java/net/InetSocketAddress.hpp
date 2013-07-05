// Generated from /runtime/java/net/InetSocketAddress.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/net/SocketAddress.hpp>

struct default_init_tag;

class java::net::InetSocketAddress
    : public SocketAddress
{

public:
    typedef SocketAddress super;

private:
    ::java::lang::String* host {  };
    int32_t port {  };
protected:
    void ctor(::java::lang::String* host, int32_t port);

public:
    virtual ::java::lang::String* getHostName();
    virtual int32_t getPort();

    // Generated
    InetSocketAddress(::java::lang::String* host, int32_t port);
protected:
    InetSocketAddress(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
