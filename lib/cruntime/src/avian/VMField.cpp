// Generated from /runtime/avian/VMField.java
#include <avian/VMField.hpp>

avian::VMField::VMField(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::VMField::VMField()
    : VMField(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::VMField::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.VMField", 13);
    return c;
}

java::lang::Class* avian::VMField::getClass0()
{
    return class_();
}

