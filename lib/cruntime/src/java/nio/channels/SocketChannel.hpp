// Generated from /runtime/java/nio/channels/SocketChannel.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/net/fwd-runtime.hpp>
#include <java/nio/fwd-runtime.hpp>
#include <java/nio/channels/fwd-runtime.hpp>
#include <java/nio/channels/SelectableChannel.hpp>
#include <java/nio/channels/ReadableByteChannel.hpp>
#include <java/nio/channels/GatheringByteChannel.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
    } // lang

    namespace nio
    {
typedef ::SubArray< ::java::nio::Buffer, ::java::lang::ObjectArray > BufferArray;
typedef ::SubArray< ::java::nio::ByteBuffer, BufferArray, ::java::lang::ComparableArray > ByteBufferArray;
    } // nio
} // java

struct default_init_tag;

class java::nio::channels::SocketChannel
    : public SelectableChannel
    , public virtual ReadableByteChannel
    , public virtual GatheringByteChannel
{

public:
    typedef SelectableChannel super;
    static constexpr int32_t InvalidSocket { int32_t(-1) };

public: /* package */
    int32_t socket_ {  };
    bool connected {  };
    bool readyToConnect {  };
    bool blocking {  };

public:
    static SocketChannel* open() /* throws(IOException) */;
    SelectableChannel* configureBlocking(bool v) /* throws(IOException) */ override;
    virtual bool isBlocking();
    virtual bool isConnected();
    virtual ::java::net::Socket* socket();
    virtual bool connect(::java::net::SocketAddress* address) /* throws(IOException) */;
    virtual bool finishConnect() /* throws(IOException) */;
    void close() /* throws(IOException) */ override;

private:
    int32_t doConnect(::java::lang::String* host, int32_t port) /* throws(IOException) */;

public:
    int32_t read(::java::nio::ByteBuffer* b) /* throws(IOException) */ override;
    int32_t write(::java::nio::ByteBuffer* b) /* throws(IOException) */ override;
    int64_t write(::java::nio::ByteBufferArray* srcs) /* throws(IOException) */ override;
    int64_t write(::java::nio::ByteBufferArray* srcs, int32_t offset, int32_t length) /* throws(IOException) */ override;

private:
    void closeSocket();

public: /* package */
    int32_t socketFD() override;
    void handleReadyOps(int32_t ops) override;

private:
    static void configureBlocking(int32_t socket, bool blocking) /* throws(IOException) */;
    static void natSetTcpNoDelay(int32_t socket, bool on) /* throws(SocketException) */;
    static int32_t natDoConnect(::java::lang::String* host, int32_t port, bool blocking, ::boolArray* connected) /* throws(IOException) */;
    static void natFinishConnect(int32_t socket) /* throws(IOException) */;
    static int32_t natRead(int32_t socket, ::int8_tArray* buffer, int32_t offset, int32_t length, bool blocking) /* throws(IOException) */;
    static int32_t natWrite(int32_t socket, ::int8_tArray* buffer, int32_t offset, int32_t length, bool blocking) /* throws(IOException) */;
    static void natThrowWriteError(int32_t socket) /* throws(IOException) */;
    static void natCloseSocket(int32_t socket);

    // Generated

public:
    SocketChannel();
protected:
    void ctor();
    SocketChannel(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    virtual bool isOpen();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SocketChannel_Handle;
};
