// Generated from /runtime/java/lang/NoSuchFieldException.java
#include <java/lang/NoSuchFieldException.hpp>

java::lang::NoSuchFieldException::NoSuchFieldException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::NoSuchFieldException::NoSuchFieldException(String* message) 
    : NoSuchFieldException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::NoSuchFieldException::NoSuchFieldException() 
    : NoSuchFieldException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::NoSuchFieldException::ctor(String* message)
{
    super::ctor(message);
}

void java::lang::NoSuchFieldException::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::NoSuchFieldException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.NoSuchFieldException", 30);
    return c;
}

java::lang::Class* java::lang::NoSuchFieldException::getClass0()
{
    return class_();
}

