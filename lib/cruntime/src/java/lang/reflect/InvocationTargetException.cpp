// Generated from /runtime/java/lang/reflect/InvocationTargetException.java
#include <java/lang/reflect/InvocationTargetException.hpp>

#include <java/lang/Throwable.hpp>

java::lang::reflect::InvocationTargetException::InvocationTargetException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::reflect::InvocationTargetException::InvocationTargetException(::java::lang::Throwable* targetException, ::java::lang::String* message) 
    : InvocationTargetException(*static_cast< ::default_init_tag* >(0))
{
    ctor(targetException,message);
}

java::lang::reflect::InvocationTargetException::InvocationTargetException(::java::lang::Throwable* targetException) 
    : InvocationTargetException(*static_cast< ::default_init_tag* >(0))
{
    ctor(targetException);
}

java::lang::reflect::InvocationTargetException::InvocationTargetException() 
    : InvocationTargetException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::reflect::InvocationTargetException::ctor(::java::lang::Throwable* targetException, ::java::lang::String* message)
{
    super::ctor(message, targetException);
}

void java::lang::reflect::InvocationTargetException::ctor(::java::lang::Throwable* targetException)
{
    ctor(targetException, nullptr);
}

void java::lang::reflect::InvocationTargetException::ctor()
{
    ctor(nullptr, nullptr);
}

java::lang::Throwable* java::lang::reflect::InvocationTargetException::getTargetException()
{
    return getCause();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::reflect::InvocationTargetException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.reflect.InvocationTargetException", 43);
    return c;
}

java::lang::Class* java::lang::reflect::InvocationTargetException::getClass0()
{
    return class_();
}

