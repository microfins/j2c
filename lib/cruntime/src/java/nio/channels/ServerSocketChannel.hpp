// Generated from /runtime/java/nio/channels/ServerSocketChannel.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/nio/channels/fwd-runtime.hpp>
#include <java/nio/channels/SelectableChannel.hpp>

struct default_init_tag;

class java::nio::channels::ServerSocketChannel
    : public SelectableChannel
{

public:
    typedef SelectableChannel super;

private:
    SocketChannel* channel {  };
protected:
    void ctor() /* throws(IOException) */;

public:
    static ServerSocketChannel* open() /* throws(IOException) */;
    int32_t socketFD() override;
    void handleReadyOps(int32_t ops) override;
    SelectableChannel* configureBlocking(bool v) /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;
    virtual SocketChannel* accept() /* throws(IOException) */;
    virtual ::java::net::ServerSocket* socket();

private:
    int32_t doAccept() /* throws(IOException) */;
    int32_t doListen(::java::lang::String* host, int32_t port) /* throws(IOException) */;
    static int32_t natDoAccept(int32_t socket) /* throws(IOException) */;
    static int32_t natDoListen(::java::lang::String* host, int32_t port) /* throws(IOException) */;

    // Generated
    ServerSocketChannel();
protected:
    ServerSocketChannel(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ServerSocketChannel_Handle;
};
