// Generated from /runtime/avian/MethodAddendum.java
#include <avian/MethodAddendum.hpp>

avian::MethodAddendum::MethodAddendum(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::MethodAddendum::MethodAddendum()
    : MethodAddendum(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::MethodAddendum::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.MethodAddendum", 20);
    return c;
}

java::lang::Class* avian::MethodAddendum::getClass0()
{
    return class_();
}

