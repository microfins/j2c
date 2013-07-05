// Generated from /runtime/java/io/FileNotFoundException.java
#include <java/io/FileNotFoundException.hpp>

java::io::FileNotFoundException::FileNotFoundException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::FileNotFoundException::FileNotFoundException(::java::lang::String* message) 
    : FileNotFoundException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::io::FileNotFoundException::FileNotFoundException() 
    : FileNotFoundException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::io::FileNotFoundException::ctor(::java::lang::String* message)
{
    super::ctor(message);
}

void java::io::FileNotFoundException::ctor()
{
    ctor(nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::FileNotFoundException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.FileNotFoundException", 29);
    return c;
}

java::lang::Class* java::io::FileNotFoundException::getClass0()
{
    return class_();
}

