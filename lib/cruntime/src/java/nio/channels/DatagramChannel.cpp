// Generated from /runtime/java/nio/channels/DatagramChannel.java
#include <java/nio/channels/DatagramChannel.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/net/InetSocketAddress.hpp>
#include <java/net/ProtocolFamily.hpp>
#include <java/net/Socket.hpp>
#include <java/net/SocketAddress.hpp>
#include <java/net/StandardProtocolFamily.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/nio/channels/DatagramChannel_Handle.hpp>
#include <java/nio/channels/UnsupportedAddressTypeException.hpp>
#include <Array.hpp>

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

java::nio::channels::DatagramChannel::DatagramChannel(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::channels::DatagramChannel::DatagramChannel()
    : DatagramChannel(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::nio::channels::DatagramChannel::ctor()
{
    super::ctor();
    init();
}

void java::nio::channels::DatagramChannel::init()
{
    socket_ = DatagramChannel::InvalidSocket;
    blocking = true;
    connected = false;
}

constexpr int32_t java::nio::channels::DatagramChannel::InvalidSocket;

java::nio::channels::SelectableChannel* java::nio::channels::DatagramChannel::configureBlocking(bool v) /* throws(IOException) */
{
    blocking = v;
    configureBlocking();
    return this;
}

void java::nio::channels::DatagramChannel::configureBlocking() /* throws(IOException) */
{
    if(socket_ != InvalidSocket) {
        configureBlocking(socket_, blocking);
    }
}

int32_t java::nio::channels::DatagramChannel::socketFD()
{
    return socket_;
}

void java::nio::channels::DatagramChannel::handleReadyOps(int32_t ops)
{
}

java::nio::channels::DatagramChannel* java::nio::channels::DatagramChannel::open(::java::net::ProtocolFamily* family) /* throws(IOException) */
{
    clinit();
    if(npc(family)->equals(::java::net::StandardProtocolFamily::INET)) {
        ::java::net::Socket::init_();
        return new DatagramChannel();
    } else {
        throw new ::java::lang::UnsupportedOperationException();
    }
}

java::nio::channels::DatagramChannel* java::nio::channels::DatagramChannel::open() /* throws(IOException) */
{
    clinit();
    return open(::java::net::StandardProtocolFamily::INET);
}

java::net::DatagramSocket* java::nio::channels::DatagramChannel::socket()
{
    return new DatagramChannel_Handle(this);
}

java::nio::channels::DatagramChannel* java::nio::channels::DatagramChannel::bind(::java::net::SocketAddress* address) /* throws(IOException) */
{
    ::java::net::InetSocketAddress* inetAddress;
    try {
        inetAddress = java_cast< ::java::net::InetSocketAddress* >(address);
    } catch (::java::lang::ClassCastException* e) {
        throw new UnsupportedAddressTypeException();
    }
    socket_ = bind(npc(inetAddress)->getHostName(), npc(inetAddress)->getPort());
    configureBlocking();
    return this;
}

java::nio::channels::DatagramChannel* java::nio::channels::DatagramChannel::connect(::java::net::SocketAddress* address) /* throws(IOException) */
{
    ::java::net::InetSocketAddress* inetAddress;
    try {
        inetAddress = java_cast< ::java::net::InetSocketAddress* >(address);
    } catch (::java::lang::ClassCastException* e) {
        throw new UnsupportedAddressTypeException();
    }
    socket_ = connect(npc(inetAddress)->getHostName(), npc(inetAddress)->getPort());
    configureBlocking();
    if(socket_ != 0)
        connected = true;

    return this;
}

int32_t java::nio::channels::DatagramChannel::write(::java::nio::ByteBuffer* b) /* throws(IOException) */
{
    if(npc(b)->remaining() == 0)
        return 0;

    auto array = npc(b)->array();
    if(array == nullptr)
        throw new ::java::lang::NullPointerException();

    auto c = write(socket_, array, npc(b)->arrayOffset() + npc(b)->position(), npc(b)->remaining(), blocking);
    if(c > 0) {
        npc(b)->position(npc(b)->position() + c);
    }
    return c;
}

int32_t java::nio::channels::DatagramChannel::read(::java::nio::ByteBuffer* b) /* throws(IOException) */
{
    auto p = npc(b)->position();
    receive(b);
    return npc(b)->position() - p;
}

java::net::SocketAddress* java::nio::channels::DatagramChannel::receive(::java::nio::ByteBuffer* b) /* throws(IOException) */
{
    if(npc(b)->remaining() == 0)
        return nullptr;

    auto array = npc(b)->array();
    if(array == nullptr)
        throw new ::java::lang::NullPointerException();

    auto address = new ::int32_tArray(int32_t(2));
    auto c = receive(socket_, array, npc(b)->arrayOffset() + npc(b)->position(), npc(b)->remaining(), blocking, address);
    if(c > 0) {
        npc(b)->position(npc(b)->position() + c);
        return new ::java::net::InetSocketAddress(ipv4ToString((*address)[int32_t(0)]), (*address)[int32_t(1)]);
    } else {
        return nullptr;
    }
}

java::lang::String* java::nio::channels::DatagramChannel::ipv4ToString(int32_t address)
{
    clinit();
    auto sb = new ::java::lang::StringBuilder();
    npc(npc(npc(npc(npc(npc(npc(sb)->append(address >> int32_t(24)))->append(u'.'))->append((address >> int32_t(16)) & int32_t(255)))->append(u'.'))->append((address >> int32_t(8)) & int32_t(255)))->append(u'.'))->append(address & int32_t(255));
    return npc(sb)->toString();
}

bool java::nio::channels::DatagramChannel::isConnected()
{
    return connected;
}

java::nio::channels::DatagramChannel* java::nio::channels::DatagramChannel::disconnect() /* throws(IOException) */
{
    close();
    connected = false;
    return this;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::DatagramChannel::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.DatagramChannel", 33);
    return c;
}

void java::nio::channels::DatagramChannel::close()
{
    SelectableChannel::close();
}

bool java::nio::channels::DatagramChannel::isOpen()
{
    return SelectableChannel::isOpen();
}

java::lang::Class* java::nio::channels::DatagramChannel::getClass0()
{
    return class_();
}

