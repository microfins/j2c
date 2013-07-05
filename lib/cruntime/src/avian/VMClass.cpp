// Generated from /runtime/avian/VMClass.java
#include <avian/VMClass.hpp>

avian::VMClass::VMClass(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::VMClass::VMClass()
    : VMClass(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::VMClass::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.VMClass", 13);
    return c;
}

java::lang::Class* avian::VMClass::getClass0()
{
    return class_();
}

