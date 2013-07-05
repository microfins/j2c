// Generated from /runtime/avian/FieldAddendum.java
#include <avian/FieldAddendum.hpp>

avian::FieldAddendum::FieldAddendum(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::FieldAddendum::FieldAddendum()
    : FieldAddendum(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::FieldAddendum::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.FieldAddendum", 19);
    return c;
}

java::lang::Class* avian::FieldAddendum::getClass0()
{
    return class_();
}

