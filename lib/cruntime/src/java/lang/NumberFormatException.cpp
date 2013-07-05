// Generated from /runtime/java/lang/NumberFormatException.java
#include <java/lang/NumberFormatException.hpp>

java::lang::NumberFormatException::NumberFormatException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::NumberFormatException::NumberFormatException(String* message) 
    : NumberFormatException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::NumberFormatException::NumberFormatException() 
    : NumberFormatException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::NumberFormatException::ctor(String* message)
{
    super::ctor(message);
}

void java::lang::NumberFormatException::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::NumberFormatException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.NumberFormatException", 31);
    return c;
}

java::lang::Class* java::lang::NumberFormatException::getClass0()
{
    return class_();
}

