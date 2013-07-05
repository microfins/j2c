// Generated from /runtime/java/nio/channels/ServerSocketChannel.java
#include <java/nio/channels/ServerSocketChannel_Handle.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/net/InetSocketAddress.hpp>
#include <java/net/SocketAddress.hpp>
#include <java/nio/channels/ServerSocketChannel.hpp>
#include <java/nio/channels/SocketChannel.hpp>

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

java::nio::channels::ServerSocketChannel_Handle::ServerSocketChannel_Handle(ServerSocketChannel *ServerSocketChannel_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , ServerSocketChannel_this(ServerSocketChannel_this)
{
    clinit();
}

java::nio::channels::ServerSocketChannel_Handle::ServerSocketChannel_Handle(ServerSocketChannel *ServerSocketChannel_this)
    : ServerSocketChannel_Handle(ServerSocketChannel_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::nio::channels::ServerSocketChannel_Handle::bind(::java::net::SocketAddress* address) /* throws(IOException) */
{
    ::java::net::InetSocketAddress* a;
    try {
        a = java_cast< ::java::net::InetSocketAddress* >(address);
    } catch (::java::lang::ClassCastException* e) {
        throw new ::java::lang::IllegalArgumentException();
    }
    npc(ServerSocketChannel_this->channel)->socket_ = ServerSocketChannel_this->doListen(npc(a)->getHostName(), npc(a)->getPort());
    npc(ServerSocketChannel_this->channel)->configureBlocking(npc(ServerSocketChannel_this->channel)->isBlocking());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::ServerSocketChannel_Handle::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.ServerSocketChannel.Handle", 44);
    return c;
}

java::lang::Class* java::nio::channels::ServerSocketChannel_Handle::getClass0()
{
    return class_();
}

