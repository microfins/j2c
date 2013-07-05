// Generated from /runtime/java/lang/InstantiationException.java
#include <java/lang/InstantiationException.hpp>

java::lang::InstantiationException::InstantiationException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::InstantiationException::InstantiationException(String* message) 
    : InstantiationException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::InstantiationException::InstantiationException() 
    : InstantiationException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::InstantiationException::ctor(String* message)
{
    super::ctor(message);
}

void java::lang::InstantiationException::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::InstantiationException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.InstantiationException", 32);
    return c;
}

java::lang::Class* java::lang::InstantiationException::getClass0()
{
    return class_();
}

