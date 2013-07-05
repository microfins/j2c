// Generated from /runtime/java/nio/channels/SocketChannel.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/nio/channels/fwd-runtime.hpp>
#include <java/net/Socket.hpp>

struct default_init_tag;

class java::nio::channels::SocketChannel_Handle
    : public ::java::net::Socket
{

public:
    typedef ::java::net::Socket super;
    void setTcpNoDelay(bool on) /* throws(SocketException) */ override;

    // Generated
    SocketChannel_Handle(SocketChannel *SocketChannel_this);
protected:
    SocketChannel_Handle(SocketChannel *SocketChannel_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    SocketChannel *SocketChannel_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class SocketChannel;
};
