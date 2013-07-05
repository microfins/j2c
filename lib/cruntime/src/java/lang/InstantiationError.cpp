// Generated from /runtime/java/lang/InstantiationError.java
#include <java/lang/InstantiationError.hpp>

java::lang::InstantiationError::InstantiationError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::InstantiationError::InstantiationError(String* message) 
    : InstantiationError(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::InstantiationError::InstantiationError() 
    : InstantiationError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::InstantiationError::ctor(String* message)
{
    super::ctor(message);
}

void java::lang::InstantiationError::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::InstantiationError::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.InstantiationError", 28);
    return c;
}

java::lang::Class* java::lang::InstantiationError::getClass0()
{
    return class_();
}

