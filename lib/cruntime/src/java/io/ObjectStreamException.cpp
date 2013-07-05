// Generated from /runtime/java/io/ObjectStreamException.java
#include <java/io/ObjectStreamException.hpp>

java::io::ObjectStreamException::ObjectStreamException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::ObjectStreamException::ObjectStreamException(::java::lang::String* message) 
    : ObjectStreamException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::io::ObjectStreamException::ObjectStreamException() 
    : ObjectStreamException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::io::ObjectStreamException::ctor(::java::lang::String* message)
{
    super::ctor(message);
}

void java::io::ObjectStreamException::ctor()
{
    ctor(nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::ObjectStreamException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.ObjectStreamException", 29);
    return c;
}

java::lang::Class* java::io::ObjectStreamException::getClass0()
{
    return class_();
}

