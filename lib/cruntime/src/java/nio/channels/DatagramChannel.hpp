// Generated from /runtime/java/nio/channels/DatagramChannel.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/nio/fwd-runtime.hpp>
#include <java/nio/channels/fwd-runtime.hpp>
#include <java/nio/channels/SelectableChannel.hpp>
#include <java/nio/channels/ReadableByteChannel.hpp>
#include <java/nio/channels/WritableByteChannel.hpp>

struct default_init_tag;

class java::nio::channels::DatagramChannel
    : public SelectableChannel
    , public virtual ReadableByteChannel
    , public virtual WritableByteChannel
{

public:
    typedef SelectableChannel super;
    static constexpr int32_t InvalidSocket { int32_t(-1) };

private:
    int32_t socket_ {  };
    bool blocking {  };
    bool connected {  };

public:
    SelectableChannel* configureBlocking(bool v) /* throws(IOException) */ override;

private:
    void configureBlocking() /* throws(IOException) */;

public: /* package */
    int32_t socketFD() override;
    void handleReadyOps(int32_t ops) override;

public:
    static DatagramChannel* open(::java::net::ProtocolFamily* family) /* throws(IOException) */;
    static DatagramChannel* open() /* throws(IOException) */;
    virtual ::java::net::DatagramSocket* socket();
    virtual DatagramChannel* bind(::java::net::SocketAddress* address) /* throws(IOException) */;
    virtual DatagramChannel* connect(::java::net::SocketAddress* address) /* throws(IOException) */;
    int32_t write(::java::nio::ByteBuffer* b) /* throws(IOException) */ override;
    int32_t read(::java::nio::ByteBuffer* b) /* throws(IOException) */ override;
    virtual ::java::net::SocketAddress* receive(::java::nio::ByteBuffer* b) /* throws(IOException) */;

private:
    static ::java::lang::String* ipv4ToString(int32_t address);

public:
    virtual bool isConnected();
    virtual DatagramChannel* disconnect() /* throws(IOException) */;

private:
    static void configureBlocking(int32_t socket, bool blocking) /* throws(IOException) */;
    static int32_t bind(::java::lang::String* hostname, int32_t port) /* throws(IOException) */;
    static int32_t connect(::java::lang::String* hostname, int32_t port) /* throws(IOException) */;
    static int32_t write(int32_t socket, ::int8_tArray* array, int32_t offset, int32_t length, bool blocking) /* throws(IOException) */;
    static int32_t receive(int32_t socket, ::int8_tArray* array, int32_t offset, int32_t length, bool blocking, ::int32_tArray* address) /* throws(IOException) */;

    // Generated

public:
    DatagramChannel();
protected:
    void ctor();
    DatagramChannel(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    virtual void close();
    virtual bool isOpen();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DatagramChannel_Handle;
};
