// Generated from /runtime/java/lang/UnsupportedOperationException.java
#include <java/lang/UnsupportedOperationException.hpp>

java::lang::UnsupportedOperationException::UnsupportedOperationException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::UnsupportedOperationException::UnsupportedOperationException(String* message, Throwable* cause) 
    : UnsupportedOperationException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

java::lang::UnsupportedOperationException::UnsupportedOperationException(String* message) 
    : UnsupportedOperationException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::UnsupportedOperationException::UnsupportedOperationException(Throwable* cause) 
    : UnsupportedOperationException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

java::lang::UnsupportedOperationException::UnsupportedOperationException() 
    : UnsupportedOperationException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::UnsupportedOperationException::ctor(String* message, Throwable* cause)
{
    super::ctor(message, cause);
}

void java::lang::UnsupportedOperationException::ctor(String* message)
{
    ctor(message, nullptr);
}

void java::lang::UnsupportedOperationException::ctor(Throwable* cause)
{
    ctor(nullptr, cause);
}

void java::lang::UnsupportedOperationException::ctor()
{
    ctor(nullptr, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::UnsupportedOperationException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.UnsupportedOperationException", 39);
    return c;
}

java::lang::Class* java::lang::UnsupportedOperationException::getClass0()
{
    return class_();
}

