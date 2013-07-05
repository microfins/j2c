// Generated from /runtime/java/io/UnsupportedEncodingException.java
#include <java/io/UnsupportedEncodingException.hpp>

java::io::UnsupportedEncodingException::UnsupportedEncodingException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::UnsupportedEncodingException::UnsupportedEncodingException(::java::lang::String* message) 
    : UnsupportedEncodingException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::io::UnsupportedEncodingException::UnsupportedEncodingException() 
    : UnsupportedEncodingException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::io::UnsupportedEncodingException::ctor(::java::lang::String* message)
{
    super::ctor(message);
}

void java::io::UnsupportedEncodingException::ctor()
{
    ctor(nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::UnsupportedEncodingException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.UnsupportedEncodingException", 36);
    return c;
}

java::lang::Class* java::io::UnsupportedEncodingException::getClass0()
{
    return class_();
}

