// Generated from /runtime/java/nio/channels/DatagramChannel.java

#pragma once

#include <java/net/fwd-runtime.hpp>
#include <java/nio/channels/fwd-runtime.hpp>
#include <java/net/DatagramSocket.hpp>

struct default_init_tag;

class java::nio::channels::DatagramChannel_Handle
    : public ::java::net::DatagramSocket
{

public:
    typedef ::java::net::DatagramSocket super;
    ::java::net::SocketAddress* getRemoteSocketAddress() override;
    void bind(::java::net::SocketAddress* address) /* throws(SocketException) */ override;

    // Generated
    DatagramChannel_Handle(DatagramChannel *DatagramChannel_this);
protected:
    DatagramChannel_Handle(DatagramChannel *DatagramChannel_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    DatagramChannel *DatagramChannel_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class DatagramChannel;
};
