// Generated from /runtime/java/io/NotSerializableException.java
#include <java/io/NotSerializableException.hpp>

java::io::NotSerializableException::NotSerializableException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::NotSerializableException::NotSerializableException(::java::lang::String* message) 
    : NotSerializableException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::io::NotSerializableException::NotSerializableException() 
    : NotSerializableException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::io::NotSerializableException::ctor(::java::lang::String* message)
{
    super::ctor(message);
}

void java::io::NotSerializableException::ctor()
{
    ctor(nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::NotSerializableException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.NotSerializableException", 32);
    return c;
}

java::lang::Class* java::io::NotSerializableException::getClass0()
{
    return class_();
}

