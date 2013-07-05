// Generated from /runtime/java/lang/IllegalAccessException.java
#include <java/lang/IllegalAccessException.hpp>

java::lang::IllegalAccessException::IllegalAccessException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::IllegalAccessException::IllegalAccessException(String* message) 
    : IllegalAccessException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::IllegalAccessException::IllegalAccessException() 
    : IllegalAccessException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::IllegalAccessException::ctor(String* message)
{
    super::ctor(message);
}

void java::lang::IllegalAccessException::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::IllegalAccessException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.IllegalAccessException", 32);
    return c;
}

java::lang::Class* java::lang::IllegalAccessException::getClass0()
{
    return class_();
}

