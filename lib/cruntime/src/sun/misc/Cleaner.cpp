// Generated from /runtime/sun/misc/Cleaner.java
#include <sun/misc/Cleaner.hpp>

sun::misc::Cleaner::Cleaner(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

sun::misc::Cleaner::Cleaner()
    : Cleaner(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* sun::misc::Cleaner::class_()
{
    static ::java::lang::Class* c = ::class_(u"sun.misc.Cleaner", 16);
    return c;
}

java::lang::Class* sun::misc::Cleaner::getClass0()
{
    return class_();
}

