// Generated from /runtime/java/lang/NoSuchMethodError.java
#include <java/lang/NoSuchMethodError.hpp>

java::lang::NoSuchMethodError::NoSuchMethodError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::NoSuchMethodError::NoSuchMethodError(String* message) 
    : NoSuchMethodError(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::NoSuchMethodError::NoSuchMethodError() 
    : NoSuchMethodError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::NoSuchMethodError::ctor(String* message)
{
    super::ctor(message);
}

void java::lang::NoSuchMethodError::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::NoSuchMethodError::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.NoSuchMethodError", 27);
    return c;
}

java::lang::Class* java::lang::NoSuchMethodError::getClass0()
{
    return class_();
}

