// Generated from /runtime/avian/Atomic.java
#include <avian/Atomic.hpp>

avian::Atomic::Atomic(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::Atomic::Atomic()
    : Atomic(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::Atomic::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.Atomic", 12);
    return c;
}

java::lang::Class* avian::Atomic::getClass0()
{
    return class_();
}

