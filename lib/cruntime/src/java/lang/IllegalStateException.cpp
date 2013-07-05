// Generated from /runtime/java/lang/IllegalStateException.java
#include <java/lang/IllegalStateException.hpp>

java::lang::IllegalStateException::IllegalStateException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::IllegalStateException::IllegalStateException(String* message, Throwable* cause) 
    : IllegalStateException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

java::lang::IllegalStateException::IllegalStateException(String* message) 
    : IllegalStateException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::IllegalStateException::IllegalStateException(Throwable* cause) 
    : IllegalStateException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

java::lang::IllegalStateException::IllegalStateException() 
    : IllegalStateException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::IllegalStateException::ctor(String* message, Throwable* cause)
{
    super::ctor(message, cause);
}

void java::lang::IllegalStateException::ctor(String* message)
{
    ctor(message, nullptr);
}

void java::lang::IllegalStateException::ctor(Throwable* cause)
{
    ctor(nullptr, cause);
}

void java::lang::IllegalStateException::ctor()
{
    ctor(nullptr, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::IllegalStateException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.IllegalStateException", 31);
    return c;
}

java::lang::Class* java::lang::IllegalStateException::getClass0()
{
    return class_();
}

