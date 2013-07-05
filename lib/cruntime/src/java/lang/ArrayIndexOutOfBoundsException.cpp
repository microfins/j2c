// Generated from /runtime/java/lang/ArrayIndexOutOfBoundsException.java
#include <java/lang/ArrayIndexOutOfBoundsException.hpp>

java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(String* message, Throwable* cause) 
    : ArrayIndexOutOfBoundsException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(String* message) 
    : ArrayIndexOutOfBoundsException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(Throwable* cause) 
    : ArrayIndexOutOfBoundsException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException() 
    : ArrayIndexOutOfBoundsException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::ArrayIndexOutOfBoundsException::ctor(String* message, Throwable* cause)
{
    super::ctor(message, cause);
}

void java::lang::ArrayIndexOutOfBoundsException::ctor(String* message)
{
    ctor(message, nullptr);
}

void java::lang::ArrayIndexOutOfBoundsException::ctor(Throwable* cause)
{
    ctor(nullptr, cause);
}

void java::lang::ArrayIndexOutOfBoundsException::ctor()
{
    ctor(nullptr, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::ArrayIndexOutOfBoundsException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ArrayIndexOutOfBoundsException", 40);
    return c;
}

java::lang::Class* java::lang::ArrayIndexOutOfBoundsException::getClass0()
{
    return class_();
}

