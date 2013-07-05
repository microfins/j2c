// Generated from /runtime/java/lang/IncompatibleClassChangeError.java
#include <java/lang/IncompatibleClassChangeError.hpp>

java::lang::IncompatibleClassChangeError::IncompatibleClassChangeError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::IncompatibleClassChangeError::IncompatibleClassChangeError(String* message) 
    : IncompatibleClassChangeError(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::IncompatibleClassChangeError::IncompatibleClassChangeError() 
    : IncompatibleClassChangeError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::IncompatibleClassChangeError::ctor(String* message)
{
    super::ctor(message);
}

void java::lang::IncompatibleClassChangeError::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::IncompatibleClassChangeError::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.IncompatibleClassChangeError", 38);
    return c;
}

java::lang::Class* java::lang::IncompatibleClassChangeError::getClass0()
{
    return class_();
}

