// Generated from /runtime/avian/IncompatibleContinuationException.java
#include <avian/IncompatibleContinuationException.hpp>

avian::IncompatibleContinuationException::IncompatibleContinuationException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::IncompatibleContinuationException::IncompatibleContinuationException(::java::lang::String* message) 
    : IncompatibleContinuationException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

avian::IncompatibleContinuationException::IncompatibleContinuationException() 
    : IncompatibleContinuationException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void avian::IncompatibleContinuationException::ctor(::java::lang::String* message)
{
    super::ctor(message);
}

void avian::IncompatibleContinuationException::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::IncompatibleContinuationException::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.IncompatibleContinuationException", 39);
    return c;
}

java::lang::Class* avian::IncompatibleContinuationException::getClass0()
{
    return class_();
}

