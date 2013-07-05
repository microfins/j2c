// Generated from /runtime/avian/ClassAddendum.java
#include <avian/ClassAddendum.hpp>

avian::ClassAddendum::ClassAddendum(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::ClassAddendum::ClassAddendum()
    : ClassAddendum(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::ClassAddendum::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.ClassAddendum", 19);
    return c;
}

java::lang::Class* avian::ClassAddendum::getClass0()
{
    return class_();
}

