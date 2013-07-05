// Generated from /runtime/java/lang/ArithmeticException.java
#include <java/lang/ArithmeticException.hpp>

java::lang::ArithmeticException::ArithmeticException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ArithmeticException::ArithmeticException(String* message) 
    : ArithmeticException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::ArithmeticException::ArithmeticException() 
    : ArithmeticException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::ArithmeticException::ctor(String* message)
{
    super::ctor(message);
}

void java::lang::ArithmeticException::ctor()
{
    ctor(nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::ArithmeticException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ArithmeticException", 29);
    return c;
}

java::lang::Class* java::lang::ArithmeticException::getClass0()
{
    return class_();
}

