// Generated from /runtime/java/lang/InterruptedException.java
#include <java/lang/InterruptedException.hpp>

java::lang::InterruptedException::InterruptedException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::InterruptedException::InterruptedException(String* message, Throwable* cause) 
    : InterruptedException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

java::lang::InterruptedException::InterruptedException(String* message) 
    : InterruptedException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::InterruptedException::InterruptedException(Throwable* cause) 
    : InterruptedException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

java::lang::InterruptedException::InterruptedException() 
    : InterruptedException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::InterruptedException::ctor(String* message, Throwable* cause)
{
    super::ctor(message, cause);
}

void java::lang::InterruptedException::ctor(String* message)
{
    ctor(message, nullptr);
}

void java::lang::InterruptedException::ctor(Throwable* cause)
{
    ctor(nullptr, cause);
}

void java::lang::InterruptedException::ctor()
{
    ctor(nullptr, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::InterruptedException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.InterruptedException", 30);
    return c;
}

java::lang::Class* java::lang::InterruptedException::getClass0()
{
    return class_();
}

