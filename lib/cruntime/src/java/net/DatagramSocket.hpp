// Generated from /runtime/java/net/DatagramSocket.java

#pragma once

#include <java/net/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::net::DatagramSocket
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    virtual SocketAddress* getRemoteSocketAddress() = 0;
    virtual void bind(SocketAddress* address) /* throws(SocketException) */ = 0;

    // Generated
    DatagramSocket();
protected:
    DatagramSocket(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
