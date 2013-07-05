// Generated from /runtime/avian/Singleton.java
#include <avian/Singleton.hpp>

avian::Singleton::Singleton(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::Singleton::Singleton()
    : Singleton(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::Singleton::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.Singleton", 15);
    return c;
}

java::lang::Class* avian::Singleton::getClass0()
{
    return class_();
}

