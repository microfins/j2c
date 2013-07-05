// Generated from /runtime/java/lang/Process.java
#include <java/lang/Process.hpp>

java::lang::Process::Process(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Process::Process()
    : Process(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Process::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Process", 17);
    return c;
}

java::lang::Class* java::lang::Process::getClass0()
{
    return class_();
}

