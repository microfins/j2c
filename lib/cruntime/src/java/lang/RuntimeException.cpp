// Generated from /runtime/java/lang/RuntimeException.java
#include <java/lang/RuntimeException.hpp>

java::lang::RuntimeException::RuntimeException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::RuntimeException::RuntimeException(String* message, Throwable* cause) 
    : RuntimeException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

java::lang::RuntimeException::RuntimeException(String* message) 
    : RuntimeException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::RuntimeException::RuntimeException(Throwable* cause) 
    : RuntimeException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

java::lang::RuntimeException::RuntimeException() 
    : RuntimeException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::RuntimeException::ctor(String* message, Throwable* cause)
{
    super::ctor(message, cause);
}

void java::lang::RuntimeException::ctor(String* message)
{
    ctor(message, nullptr);
}

void java::lang::RuntimeException::ctor(Throwable* cause)
{
    ctor(nullptr, cause);
}

void java::lang::RuntimeException::ctor()
{
    ctor(nullptr, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::RuntimeException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.RuntimeException", 26);
    return c;
}

java::lang::Class* java::lang::RuntimeException::getClass0()
{
    return class_();
}

