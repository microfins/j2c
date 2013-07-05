// Generated from /runtime/java/lang/IllegalArgumentException.java
#include <java/lang/IllegalArgumentException.hpp>

java::lang::IllegalArgumentException::IllegalArgumentException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::IllegalArgumentException::IllegalArgumentException(String* message, Throwable* cause) 
    : IllegalArgumentException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

java::lang::IllegalArgumentException::IllegalArgumentException(String* message) 
    : IllegalArgumentException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::IllegalArgumentException::IllegalArgumentException(Throwable* cause) 
    : IllegalArgumentException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

java::lang::IllegalArgumentException::IllegalArgumentException() 
    : IllegalArgumentException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::IllegalArgumentException::ctor(String* message, Throwable* cause)
{
    super::ctor(message, cause);
}

void java::lang::IllegalArgumentException::ctor(String* message)
{
    ctor(message, nullptr);
}

void java::lang::IllegalArgumentException::ctor(Throwable* cause)
{
    ctor(nullptr, cause);
}

void java::lang::IllegalArgumentException::ctor()
{
    ctor(nullptr, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::IllegalArgumentException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.IllegalArgumentException", 34);
    return c;
}

java::lang::Class* java::lang::IllegalArgumentException::getClass0()
{
    return class_();
}

