// Generated from /runtime/java/lang/NegativeArraySizeException.java
#include <java/lang/NegativeArraySizeException.hpp>

java::lang::NegativeArraySizeException::NegativeArraySizeException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::NegativeArraySizeException::NegativeArraySizeException(String* message) 
    : NegativeArraySizeException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::NegativeArraySizeException::NegativeArraySizeException() 
    : NegativeArraySizeException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::NegativeArraySizeException::ctor(String* message)
{
    super::ctor(message);
}

void java::lang::NegativeArraySizeException::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::NegativeArraySizeException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.NegativeArraySizeException", 36);
    return c;
}

java::lang::Class* java::lang::NegativeArraySizeException::getClass0()
{
    return class_();
}

