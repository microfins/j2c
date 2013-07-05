// Generated from /runtime/java/lang/Exception.java
#include <java/lang/Exception.hpp>

java::lang::Exception::Exception(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Exception::Exception(String* message, Throwable* cause) 
    : Exception(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

java::lang::Exception::Exception(String* message) 
    : Exception(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::Exception::Exception(Throwable* cause) 
    : Exception(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

java::lang::Exception::Exception() 
    : Exception(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::Exception::ctor(String* message, Throwable* cause)
{
    super::ctor(message, cause);
}

void java::lang::Exception::ctor(String* message)
{
    ctor(message, nullptr);
}

void java::lang::Exception::ctor(Throwable* cause)
{
    ctor(nullptr, cause);
}

void java::lang::Exception::ctor()
{
    ctor(nullptr, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Exception::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Exception", 19);
    return c;
}

java::lang::Class* java::lang::Exception::getClass0()
{
    return class_();
}

