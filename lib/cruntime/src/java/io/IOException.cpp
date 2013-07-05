// Generated from /runtime/java/io/IOException.java
#include <java/io/IOException.hpp>

java::io::IOException::IOException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::IOException::IOException(::java::lang::String* message, ::java::lang::Throwable* cause) 
    : IOException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

java::io::IOException::IOException(::java::lang::String* message) 
    : IOException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::io::IOException::IOException(::java::lang::Throwable* cause) 
    : IOException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

java::io::IOException::IOException() 
    : IOException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::io::IOException::ctor(::java::lang::String* message, ::java::lang::Throwable* cause)
{
    super::ctor(message, cause);
}

void java::io::IOException::ctor(::java::lang::String* message)
{
    ctor(message, nullptr);
}

void java::io::IOException::ctor(::java::lang::Throwable* cause)
{
    ctor(nullptr, cause);
}

void java::io::IOException::ctor()
{
    ctor(nullptr, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::IOException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.IOException", 19);
    return c;
}

java::lang::Class* java::io::IOException::getClass0()
{
    return class_();
}

