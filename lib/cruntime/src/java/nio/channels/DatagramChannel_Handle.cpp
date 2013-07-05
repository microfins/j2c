// Generated from /runtime/java/nio/channels/DatagramChannel.java
#include <java/nio/channels/DatagramChannel_Handle.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/net/SocketException.hpp>
#include <java/nio/channels/DatagramChannel.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::nio::channels::DatagramChannel_Handle::DatagramChannel_Handle(DatagramChannel *DatagramChannel_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , DatagramChannel_this(DatagramChannel_this)
{
    clinit();
}

java::nio::channels::DatagramChannel_Handle::DatagramChannel_Handle(DatagramChannel *DatagramChannel_this)
    : DatagramChannel_Handle(DatagramChannel_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::net::SocketAddress* java::nio::channels::DatagramChannel_Handle::getRemoteSocketAddress()
{
    throw new ::java::lang::UnsupportedOperationException();
}

void java::nio::channels::DatagramChannel_Handle::bind(::java::net::SocketAddress* address) /* throws(SocketException) */
{
    try {
        DatagramChannel_this->bind(address);
    } catch (::java::net::SocketException* e) {
        throw e;
    } catch (::java::io::IOException* e) {
        auto se = new ::java::net::SocketException();
        npc(se)->initCause(e);
        throw se;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::DatagramChannel_Handle::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.DatagramChannel.Handle", 40);
    return c;
}

java::lang::Class* java::nio::channels::DatagramChannel_Handle::getClass0()
{
    return class_();
}

