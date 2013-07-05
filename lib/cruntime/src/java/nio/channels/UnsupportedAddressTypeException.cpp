// Generated from /runtime/java/nio/channels/UnsupportedAddressTypeException.java
#include <java/nio/channels/UnsupportedAddressTypeException.hpp>

java::nio::channels::UnsupportedAddressTypeException::UnsupportedAddressTypeException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::channels::UnsupportedAddressTypeException::UnsupportedAddressTypeException() 
    : UnsupportedAddressTypeException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::nio::channels::UnsupportedAddressTypeException::ctor()
{
    super::ctor(nullptr, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::UnsupportedAddressTypeException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.UnsupportedAddressTypeException", 49);
    return c;
}

java::lang::Class* java::nio::channels::UnsupportedAddressTypeException::getClass0()
{
    return class_();
}

