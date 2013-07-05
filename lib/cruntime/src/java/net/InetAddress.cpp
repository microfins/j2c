// Generated from /runtime/java/net/InetAddress.java
#include <java/net/InetAddress.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/net/Socket.hpp>
#include <java/net/UnknownHostException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::net::InetAddress::InetAddress(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::net::InetAddress::InetAddress(::java::lang::String* address) 
    : InetAddress(*static_cast< ::default_init_tag* >(0))
{
    ctor(address);
}

void java::net::InetAddress::ctor(::java::lang::String* address)
{
    super::ctor();
    this->address = address;
}

java::lang::String* java::net::InetAddress::getHostAddress()
{
    return address;
}

java::net::InetAddress* java::net::InetAddress::getByName(::java::lang::String* name) /* throws(UnknownHostException) */
{
    clinit();
    try {
        Socket::init_();
    } catch (::java::io::IOException* e) {
        auto uhe = new UnknownHostException(name);
        npc(uhe)->initCause(e);
        throw uhe;
    }
    auto address = ipv4AddressForName(name);
    if(address == 0) {
        throw new UnknownHostException(name);
    } else {
        return new InetAddress(ipv4AddressToString(address));
    }
}

java::lang::String* java::net::InetAddress::ipv4AddressToString(int32_t address)
{
    clinit();
    return (::java::lang::StringBuilder().append(((static_cast<int32_t>(static_cast<uint32_t>(address) >> int32_t(24)))))->append(u"."_j)
        ->append(((static_cast<int32_t>(static_cast<uint32_t>(address) >> int32_t(16))) & int32_t(255)))
        ->append(u"."_j)
        ->append(((static_cast<int32_t>(static_cast<uint32_t>(address) >> int32_t(8))) & int32_t(255)))
        ->append(u"."_j)
        ->append(((address) & int32_t(255)))->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::net::InetAddress::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.net.InetAddress", 20);
    return c;
}

java::lang::Class* java::net::InetAddress::getClass0()
{
    return class_();
}

