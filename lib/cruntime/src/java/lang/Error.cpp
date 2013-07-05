// Generated from /runtime/java/lang/Error.java
#include <java/lang/Error.hpp>

java::lang::Error::Error(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Error::Error(String* message, Throwable* cause) 
    : Error(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

java::lang::Error::Error(String* message) 
    : Error(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::Error::Error(Throwable* cause) 
    : Error(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

java::lang::Error::Error() 
    : Error(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::Error::ctor(String* message, Throwable* cause)
{
    super::ctor(message, cause);
}

void java::lang::Error::ctor(String* message)
{
    ctor(message, nullptr);
}

void java::lang::Error::ctor(Throwable* cause)
{
    ctor(nullptr, cause);
}

void java::lang::Error::ctor()
{
    ctor(nullptr, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Error::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Error", 15);
    return c;
}

java::lang::Class* java::lang::Error::getClass0()
{
    return class_();
}

