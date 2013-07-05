// Generated from /runtime/java/nio/channels/SocketChannel.java
#include <java/nio/channels/SocketChannel_Handle.hpp>

#include <java/nio/channels/SocketChannel.hpp>

java::nio::channels::SocketChannel_Handle::SocketChannel_Handle(SocketChannel *SocketChannel_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , SocketChannel_this(SocketChannel_this)
{
    clinit();
}

java::nio::channels::SocketChannel_Handle::SocketChannel_Handle(SocketChannel *SocketChannel_this)
    : SocketChannel_Handle(SocketChannel_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::nio::channels::SocketChannel_Handle::setTcpNoDelay(bool on) /* throws(SocketException) */
{
    SocketChannel::natSetTcpNoDelay(SocketChannel_this->socket_, on);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::SocketChannel_Handle::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.SocketChannel.Handle", 38);
    return c;
}

java::lang::Class* java::nio::channels::SocketChannel_Handle::getClass0()
{
    return class_();
}

