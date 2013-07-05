// Generated from /runtime/java/lang/SecurityException.java
#include <java/lang/SecurityException.hpp>

java::lang::SecurityException::SecurityException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::SecurityException::SecurityException(String* message, Throwable* cause) 
    : SecurityException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

java::lang::SecurityException::SecurityException(String* message) 
    : SecurityException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::SecurityException::SecurityException(Throwable* cause) 
    : SecurityException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

java::lang::SecurityException::SecurityException() 
    : SecurityException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::SecurityException::ctor(String* message, Throwable* cause)
{
    super::ctor(message, cause);
}

void java::lang::SecurityException::ctor(String* message)
{
    ctor(message, nullptr);
}

void java::lang::SecurityException::ctor(Throwable* cause)
{
    ctor(nullptr, cause);
}

void java::lang::SecurityException::ctor()
{
    ctor(nullptr, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::SecurityException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.SecurityException", 27);
    return c;
}

java::lang::Class* java::lang::SecurityException::getClass0()
{
    return class_();
}

