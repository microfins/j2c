// Generated from /runtime/java/lang/NullPointerException.java
#include <java/lang/NullPointerException.hpp>

java::lang::NullPointerException::NullPointerException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::NullPointerException::NullPointerException(String* message, Throwable* cause) 
    : NullPointerException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

java::lang::NullPointerException::NullPointerException(String* message) 
    : NullPointerException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::NullPointerException::NullPointerException(Throwable* cause) 
    : NullPointerException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

java::lang::NullPointerException::NullPointerException() 
    : NullPointerException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::NullPointerException::ctor(String* message, Throwable* cause)
{
    super::ctor(message, cause);
}

void java::lang::NullPointerException::ctor(String* message)
{
    ctor(message, nullptr);
}

void java::lang::NullPointerException::ctor(Throwable* cause)
{
    ctor(nullptr, cause);
}

void java::lang::NullPointerException::ctor()
{
    ctor(nullptr, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::NullPointerException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.NullPointerException", 30);
    return c;
}

java::lang::Class* java::lang::NullPointerException::getClass0()
{
    return class_();
}

