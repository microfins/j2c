// Generated from /runtime/avian/Continuations.java
#include <avian/Continuations_Continuation.hpp>

avian::Continuations_Continuation::Continuations_Continuation(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::Continuations_Continuation::Continuations_Continuation()
    : Continuations_Continuation(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::Continuations_Continuation::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.Continuations.Continuation", 32);
    return c;
}

java::lang::Class* avian::Continuations_Continuation::getClass0()
{
    return class_();
}

