// Generated from /runtime/java/nio/channels/ServerSocketChannel.java
#include <java/nio/channels/ServerSocketChannel.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/net/Socket.hpp>
#include <java/nio/channels/SelectableChannel.hpp>
#include <java/nio/channels/ServerSocketChannel_Handle.hpp>
#include <java/nio/channels/SocketChannel.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::nio::channels::ServerSocketChannel::ServerSocketChannel(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::channels::ServerSocketChannel::ServerSocketChannel()  /* throws(IOException) */
    : ServerSocketChannel(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::nio::channels::ServerSocketChannel::ctor() /* throws(IOException) */
{
    super::ctor();
    channel = new SocketChannel();
}

java::nio::channels::ServerSocketChannel* java::nio::channels::ServerSocketChannel::open() /* throws(IOException) */
{
    clinit();
    return new ServerSocketChannel();
}

int32_t java::nio::channels::ServerSocketChannel::socketFD()
{
    return npc(channel)->socketFD();
}

void java::nio::channels::ServerSocketChannel::handleReadyOps(int32_t ops)
{
    npc(channel)->handleReadyOps(ops);
}

java::nio::channels::SelectableChannel* java::nio::channels::ServerSocketChannel::configureBlocking(bool v) /* throws(IOException) */
{
    return npc(channel)->configureBlocking(v);
}

void java::nio::channels::ServerSocketChannel::close() /* throws(IOException) */
{
    npc(channel)->close();
}

java::nio::channels::SocketChannel* java::nio::channels::ServerSocketChannel::accept() /* throws(IOException) */
{
    auto c = new SocketChannel();
    npc(c)->socket_ = doAccept();
    npc(c)->connected = true;
    return c;
}

java::net::ServerSocket* java::nio::channels::ServerSocketChannel::socket()
{
    return new ServerSocketChannel_Handle(this);
}

int32_t java::nio::channels::ServerSocketChannel::doAccept() /* throws(IOException) */
{
    while (true) {
        auto s = natDoAccept(npc(channel)->socket_);
        if(s != -int32_t(1)) {
            return s;
        }
    }
}

int32_t java::nio::channels::ServerSocketChannel::doListen(::java::lang::String* host, int32_t port) /* throws(IOException) */
{
    ::java::net::Socket::init_();
    return natDoListen(host, port);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::ServerSocketChannel::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.ServerSocketChannel", 37);
    return c;
}

java::lang::Class* java::nio::channels::ServerSocketChannel::getClass0()
{
    return class_();
}

