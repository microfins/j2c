// Generated from /runtime/java/util/ConcurrentModificationException.java
#include <java/util/ConcurrentModificationException.hpp>

java::util::ConcurrentModificationException::ConcurrentModificationException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::ConcurrentModificationException::ConcurrentModificationException(::java::lang::String* message, ::java::lang::Throwable* cause) 
    : ConcurrentModificationException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

java::util::ConcurrentModificationException::ConcurrentModificationException(::java::lang::String* message) 
    : ConcurrentModificationException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::util::ConcurrentModificationException::ConcurrentModificationException(::java::lang::Throwable* cause) 
    : ConcurrentModificationException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

java::util::ConcurrentModificationException::ConcurrentModificationException() 
    : ConcurrentModificationException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::util::ConcurrentModificationException::ctor(::java::lang::String* message, ::java::lang::Throwable* cause)
{
    super::ctor(message, cause);
}

void java::util::ConcurrentModificationException::ctor(::java::lang::String* message)
{
    super::ctor(message);
}

void java::util::ConcurrentModificationException::ctor(::java::lang::Throwable* cause)
{
    super::ctor(cause);
}

void java::util::ConcurrentModificationException::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::ConcurrentModificationException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.ConcurrentModificationException", 41);
    return c;
}

java::lang::Class* java::util::ConcurrentModificationException::getClass0()
{
    return class_();
}

