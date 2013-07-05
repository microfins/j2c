// Generated from /runtime/java/lang/UnsatisfiedLinkError.java
#include <java/lang/UnsatisfiedLinkError.hpp>

java::lang::UnsatisfiedLinkError::UnsatisfiedLinkError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::UnsatisfiedLinkError::UnsatisfiedLinkError(String* message) 
    : UnsatisfiedLinkError(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::UnsatisfiedLinkError::UnsatisfiedLinkError() 
    : UnsatisfiedLinkError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::UnsatisfiedLinkError::ctor(String* message)
{
    super::ctor(message);
}

void java::lang::UnsatisfiedLinkError::ctor()
{
    ctor(nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::UnsatisfiedLinkError::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.UnsatisfiedLinkError", 30);
    return c;
}

java::lang::Class* java::lang::UnsatisfiedLinkError::getClass0()
{
    return class_();
}

