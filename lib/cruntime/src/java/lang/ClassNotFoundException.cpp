// Generated from /runtime/java/lang/ClassNotFoundException.java
#include <java/lang/ClassNotFoundException.hpp>

#include <java/lang/Throwable.hpp>

java::lang::ClassNotFoundException::ClassNotFoundException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ClassNotFoundException::ClassNotFoundException(String* message, Throwable* cause) 
    : ClassNotFoundException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

java::lang::ClassNotFoundException::ClassNotFoundException(String* message) 
    : ClassNotFoundException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::ClassNotFoundException::ClassNotFoundException() 
    : ClassNotFoundException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::ClassNotFoundException::ctor(String* message, Throwable* cause)
{
    super::ctor(message, cause);
    cause2 = cause;
}

void java::lang::ClassNotFoundException::ctor(String* message)
{
    ctor(message, nullptr);
}

void java::lang::ClassNotFoundException::ctor()
{
    ctor(nullptr, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::ClassNotFoundException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ClassNotFoundException", 32);
    return c;
}

java::lang::Class* java::lang::ClassNotFoundException::getClass0()
{
    return class_();
}

