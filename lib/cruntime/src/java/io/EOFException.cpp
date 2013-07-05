// Generated from /runtime/java/io/EOFException.java
#include <java/io/EOFException.hpp>

java::io::EOFException::EOFException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::EOFException::EOFException(::java::lang::String* message) 
    : EOFException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::io::EOFException::EOFException() 
    : EOFException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::io::EOFException::ctor(::java::lang::String* message)
{
    super::ctor(message);
}

void java::io::EOFException::ctor()
{
    ctor(nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::EOFException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.EOFException", 20);
    return c;
}

java::lang::Class* java::io::EOFException::getClass0()
{
    return class_();
}

