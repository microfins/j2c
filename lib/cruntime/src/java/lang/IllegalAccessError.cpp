// Generated from /runtime/java/lang/IllegalAccessError.java
#include <java/lang/IllegalAccessError.hpp>

java::lang::IllegalAccessError::IllegalAccessError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::IllegalAccessError::IllegalAccessError(String* message) 
    : IllegalAccessError(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::IllegalAccessError::IllegalAccessError() 
    : IllegalAccessError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::IllegalAccessError::ctor(String* message)
{
    super::ctor(message);
}

void java::lang::IllegalAccessError::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::IllegalAccessError::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.IllegalAccessError", 28);
    return c;
}

java::lang::Class* java::lang::IllegalAccessError::getClass0()
{
    return class_();
}

