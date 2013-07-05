// Generated from /runtime/java/lang/NoClassDefFoundError.java
#include <java/lang/NoClassDefFoundError.hpp>

java::lang::NoClassDefFoundError::NoClassDefFoundError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::NoClassDefFoundError::NoClassDefFoundError(String* message) 
    : NoClassDefFoundError(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::NoClassDefFoundError::NoClassDefFoundError() 
    : NoClassDefFoundError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::NoClassDefFoundError::ctor(String* message)
{
    super::ctor(message);
}

void java::lang::NoClassDefFoundError::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::NoClassDefFoundError::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.NoClassDefFoundError", 30);
    return c;
}

java::lang::Class* java::lang::NoClassDefFoundError::getClass0()
{
    return class_();
}

