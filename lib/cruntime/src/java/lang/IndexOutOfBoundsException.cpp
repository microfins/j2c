// Generated from /runtime/java/lang/IndexOutOfBoundsException.java
#include <java/lang/IndexOutOfBoundsException.hpp>

java::lang::IndexOutOfBoundsException::IndexOutOfBoundsException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::IndexOutOfBoundsException::IndexOutOfBoundsException(String* message, Throwable* cause) 
    : IndexOutOfBoundsException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

java::lang::IndexOutOfBoundsException::IndexOutOfBoundsException(String* message) 
    : IndexOutOfBoundsException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::IndexOutOfBoundsException::IndexOutOfBoundsException(Throwable* cause) 
    : IndexOutOfBoundsException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

java::lang::IndexOutOfBoundsException::IndexOutOfBoundsException() 
    : IndexOutOfBoundsException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::IndexOutOfBoundsException::ctor(String* message, Throwable* cause)
{
    super::ctor(message, cause);
}

void java::lang::IndexOutOfBoundsException::ctor(String* message)
{
    ctor(message, nullptr);
}

void java::lang::IndexOutOfBoundsException::ctor(Throwable* cause)
{
    ctor(nullptr, cause);
}

void java::lang::IndexOutOfBoundsException::ctor()
{
    ctor(nullptr, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::IndexOutOfBoundsException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.IndexOutOfBoundsException", 35);
    return c;
}

java::lang::Class* java::lang::IndexOutOfBoundsException::getClass0()
{
    return class_();
}

