// Generated from /runtime/java/lang/AbstractMethodError.java
#include <java/lang/AbstractMethodError.hpp>

java::lang::AbstractMethodError::AbstractMethodError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::AbstractMethodError::AbstractMethodError() 
    : AbstractMethodError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::AbstractMethodError::AbstractMethodError(String* message) 
    : AbstractMethodError(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

void java::lang::AbstractMethodError::ctor()
{
    super::ctor();
}

void java::lang::AbstractMethodError::ctor(String* message)
{
    super::ctor(message);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::AbstractMethodError::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.AbstractMethodError", 29);
    return c;
}

java::lang::Class* java::lang::AbstractMethodError::getClass0()
{
    return class_();
}

