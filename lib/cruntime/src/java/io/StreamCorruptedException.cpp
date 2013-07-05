// Generated from /runtime/java/io/StreamCorruptedException.java
#include <java/io/StreamCorruptedException.hpp>

java::io::StreamCorruptedException::StreamCorruptedException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::StreamCorruptedException::StreamCorruptedException(::java::lang::String* message) 
    : StreamCorruptedException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::io::StreamCorruptedException::StreamCorruptedException() 
    : StreamCorruptedException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::io::StreamCorruptedException::ctor(::java::lang::String* message)
{
    super::ctor(message);
}

void java::io::StreamCorruptedException::ctor()
{
    ctor(nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::StreamCorruptedException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.StreamCorruptedException", 32);
    return c;
}

java::lang::Class* java::io::StreamCorruptedException::getClass0()
{
    return class_();
}

