// Generated from /runtime/java/lang/NoSuchFieldError.java
#include <java/lang/NoSuchFieldError.hpp>

java::lang::NoSuchFieldError::NoSuchFieldError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::NoSuchFieldError::NoSuchFieldError(String* message) 
    : NoSuchFieldError(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::NoSuchFieldError::NoSuchFieldError() 
    : NoSuchFieldError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::NoSuchFieldError::ctor(String* message)
{
    super::ctor(message);
}

void java::lang::NoSuchFieldError::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::NoSuchFieldError::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.NoSuchFieldError", 26);
    return c;
}

java::lang::Class* java::lang::NoSuchFieldError::getClass0()
{
    return class_();
}

