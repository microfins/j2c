// Generated from /runtime/java/nio/channels/SocketChannel.java
#include <java/nio/channels/SocketChannel.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/net/InetSocketAddress.hpp>
#include <java/net/Socket.hpp>
#include <java/net/SocketAddress.hpp>
#include <java/nio/Buffer.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/nio/channels/SelectionKey.hpp>
#include <java/nio/channels/Selector.hpp>
#include <java/nio/channels/SocketChannel_Handle.hpp>
#include <java/nio/channels/UnsupportedAddressTypeException.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::nio::channels::SocketChannel::SocketChannel(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::channels::SocketChannel::SocketChannel()
    : SocketChannel(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::nio::channels::SocketChannel::ctor()
{
    super::ctor();
    init();
}

void java::nio::channels::SocketChannel::init()
{
    socket_ = SocketChannel::InvalidSocket;
    connected = false;
    readyToConnect = false;
    blocking = true;
}

constexpr int32_t java::nio::channels::SocketChannel::InvalidSocket;

java::nio::channels::SocketChannel* java::nio::channels::SocketChannel::open() /* throws(IOException) */
{
    clinit();
    ::java::net::Socket::init_();
    return new SocketChannel();
}

java::nio::channels::SelectableChannel* java::nio::channels::SocketChannel::configureBlocking(bool v) /* throws(IOException) */
{
    blocking = v;
    if(socket_ != InvalidSocket) {
        configureBlocking(socket_, v);
    }
    return this;
}

bool java::nio::channels::SocketChannel::isBlocking()
{
    return blocking;
}

bool java::nio::channels::SocketChannel::isConnected()
{
    return connected;
}

java::net::Socket* java::nio::channels::SocketChannel::socket()
{
    return new SocketChannel_Handle(this);
}

bool java::nio::channels::SocketChannel::connect(::java::net::SocketAddress* address) /* throws(IOException) */
{
    ::java::net::InetSocketAddress* a;
    try {
        a = java_cast< ::java::net::InetSocketAddress* >(address);
    } catch (::java::lang::ClassCastException* e) {
        throw new UnsupportedAddressTypeException();
    }
    socket_ = doConnect(npc(a)->getHostName(), npc(a)->getPort());
    configureBlocking(blocking);
    return connected;
}

bool java::nio::channels::SocketChannel::finishConnect() /* throws(IOException) */
{
    if(!connected) {
        while (!readyToConnect) {
            auto selector = Selector::open();
            auto key = register_(selector, SelectionKey::OP_CONNECT, nullptr);
            if(blocking) {
                npc(selector)->select();
            } else {
                npc(selector)->selectNow();
                break;
            }
        }
        natFinishConnect(socket_);
        connected = readyToConnect;
    }
    return connected;
}

void java::nio::channels::SocketChannel::close() /* throws(IOException) */
{
    if(isOpen()) {
        super::close();
        closeSocket();
    }
}

int32_t java::nio::channels::SocketChannel::doConnect(::java::lang::String* host, int32_t port) /* throws(IOException) */
{
    if(host == nullptr)
        throw new ::java::lang::NullPointerException();

    auto b = new ::boolArray(int32_t(1));
    auto s = natDoConnect(host, port, blocking, b);
    connected = (*b)[int32_t(0)];
    return s;
}

int32_t java::nio::channels::SocketChannel::read(::java::nio::ByteBuffer* b) /* throws(IOException) */
{
    if(!isOpen())
        return -int32_t(1);

    if(npc(b)->remaining() == 0)
        return 0;

    auto array = npc(b)->array();
    if(array == nullptr)
        throw new ::java::lang::NullPointerException();

    auto r = natRead(socket_, array, npc(b)->arrayOffset() + npc(b)->position(), npc(b)->remaining(), blocking);
    if(r > 0) {
        npc(b)->position(npc(b)->position() + r);
    }
    return r;
}

int32_t java::nio::channels::SocketChannel::write(::java::nio::ByteBuffer* b) /* throws(IOException) */
{
    if(!connected) {
        natThrowWriteError(socket_);
    }
    if(npc(b)->remaining() == 0)
        return 0;

    auto array = npc(b)->array();
    if(array == nullptr)
        throw new ::java::lang::NullPointerException();

    auto w = natWrite(socket_, array, npc(b)->arrayOffset() + npc(b)->position(), npc(b)->remaining(), blocking);
    if(w > 0) {
        npc(b)->position(npc(b)->position() + w);
    }
    return w;
}

int64_t java::nio::channels::SocketChannel::write(::java::nio::ByteBufferArray* srcs) /* throws(IOException) */
{
    return write(srcs, int32_t(0), npc(srcs)->length);
}

int64_t java::nio::channels::SocketChannel::write(::java::nio::ByteBufferArray* srcs, int32_t offset, int32_t length) /* throws(IOException) */
{
    int64_t total = int32_t(0);
    for (auto i = offset; i < offset + length; ++i) {
        total += write((*srcs)[i]);
        if(npc((*srcs)[i])->hasRemaining()) {
            return total;
        }
    }
    return total;
}

void java::nio::channels::SocketChannel::closeSocket()
{
    natCloseSocket(socket_);
}

int32_t java::nio::channels::SocketChannel::socketFD()
{
    return socket_;
}

void java::nio::channels::SocketChannel::handleReadyOps(int32_t ops)
{
    if((ops & SelectionKey::OP_CONNECT) != 0) {
        readyToConnect = true;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::SocketChannel::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.SocketChannel", 31);
    return c;
}

bool java::nio::channels::SocketChannel::isOpen()
{
    return SelectableChannel::isOpen();
}

java::lang::Class* java::nio::channels::SocketChannel::getClass0()
{
    return class_();
}

