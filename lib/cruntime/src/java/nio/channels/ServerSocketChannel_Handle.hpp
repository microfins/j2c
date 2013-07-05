// Generated from /runtime/java/nio/channels/ServerSocketChannel.java

#pragma once

#include <java/net/fwd-runtime.hpp>
#include <java/nio/channels/fwd-runtime.hpp>
#include <java/net/ServerSocket.hpp>

struct default_init_tag;

class java::nio::channels::ServerSocketChannel_Handle
    : public ::java::net::ServerSocket
{

public:
    typedef ::java::net::ServerSocket super;
    void bind(::java::net::SocketAddress* address) /* throws(IOException) */ override;

    // Generated
    ServerSocketChannel_Handle(ServerSocketChannel *ServerSocketChannel_this);
protected:
    ServerSocketChannel_Handle(ServerSocketChannel *ServerSocketChannel_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ServerSocketChannel *ServerSocketChannel_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class ServerSocketChannel;
};
