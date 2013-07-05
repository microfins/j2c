// Generated from /runtime/java/lang/ClassCastException.java
#include <java/lang/ClassCastException.hpp>

java::lang::ClassCastException::ClassCastException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ClassCastException::ClassCastException(String* message) 
    : ClassCastException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::ClassCastException::ClassCastException() 
    : ClassCastException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::ClassCastException::ctor(String* message)
{
    super::ctor(message);
}

void java::lang::ClassCastException::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::ClassCastException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ClassCastException", 28);
    return c;
}

java::lang::Class* java::lang::ClassCastException::getClass0()
{
    return class_();
}

