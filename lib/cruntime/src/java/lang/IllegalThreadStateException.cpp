// Generated from /runtime/java/lang/IllegalThreadStateException.java
#include <java/lang/IllegalThreadStateException.hpp>

java::lang::IllegalThreadStateException::IllegalThreadStateException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::IllegalThreadStateException::IllegalThreadStateException(String* message, Throwable* cause) 
    : IllegalThreadStateException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

java::lang::IllegalThreadStateException::IllegalThreadStateException(String* message) 
    : IllegalThreadStateException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::IllegalThreadStateException::IllegalThreadStateException(Throwable* cause) 
    : IllegalThreadStateException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

java::lang::IllegalThreadStateException::IllegalThreadStateException() 
    : IllegalThreadStateException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::IllegalThreadStateException::ctor(String* message, Throwable* cause)
{
    super::ctor(message, cause);
}

void java::lang::IllegalThreadStateException::ctor(String* message)
{
    ctor(message, nullptr);
}

void java::lang::IllegalThreadStateException::ctor(Throwable* cause)
{
    ctor(nullptr, cause);
}

void java::lang::IllegalThreadStateException::ctor()
{
    ctor(nullptr, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::IllegalThreadStateException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.IllegalThreadStateException", 37);
    return c;
}

java::lang::Class* java::lang::IllegalThreadStateException::getClass0()
{
    return class_();
}

