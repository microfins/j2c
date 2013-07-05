// Generated from /runtime/java/lang/NoSuchMethodException.java
#include <java/lang/NoSuchMethodException.hpp>

java::lang::NoSuchMethodException::NoSuchMethodException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::NoSuchMethodException::NoSuchMethodException(String* message) 
    : NoSuchMethodException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::NoSuchMethodException::NoSuchMethodException() 
    : NoSuchMethodException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::NoSuchMethodException::ctor(String* message)
{
    super::ctor(message);
}

void java::lang::NoSuchMethodException::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::NoSuchMethodException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.NoSuchMethodException", 31);
    return c;
}

java::lang::Class* java::lang::NoSuchMethodException::getClass0()
{
    return class_();
}

