// Generated from /runtime/java/lang/ThreadDeath.java
#include <java/lang/ThreadDeath.hpp>

java::lang::ThreadDeath::ThreadDeath(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ThreadDeath::ThreadDeath() 
    : ThreadDeath(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::ThreadDeath::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::ThreadDeath::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ThreadDeath", 21);
    return c;
}

java::lang::Class* java::lang::ThreadDeath::getClass0()
{
    return class_();
}

