// Generated from /runtime/java/nio/channels/ClosedSelectorException.java
#include <java/nio/channels/ClosedSelectorException.hpp>

java::nio::channels::ClosedSelectorException::ClosedSelectorException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::channels::ClosedSelectorException::ClosedSelectorException()
    : ClosedSelectorException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::ClosedSelectorException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.ClosedSelectorException", 41);
    return c;
}

java::lang::Class* java::nio::channels::ClosedSelectorException::getClass0()
{
    return class_();
}

