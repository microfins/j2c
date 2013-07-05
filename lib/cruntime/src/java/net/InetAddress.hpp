// Generated from /runtime/java/net/InetAddress.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::net::InetAddress
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* address {  };
protected:
    void ctor(::java::lang::String* address);

public:
    virtual ::java::lang::String* getHostAddress();
    static InetAddress* getByName(::java::lang::String* name) /* throws(UnknownHostException) */;

private:
    static ::java::lang::String* ipv4AddressToString(int32_t address);
    static int32_t ipv4AddressForName(::java::lang::String* name);

    // Generated
    InetAddress(::java::lang::String* address);
protected:
    InetAddress(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
