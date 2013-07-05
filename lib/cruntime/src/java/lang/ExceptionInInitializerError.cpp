// Generated from /runtime/java/lang/ExceptionInInitializerError.java
#include <java/lang/ExceptionInInitializerError.hpp>

java::lang::ExceptionInInitializerError::ExceptionInInitializerError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ExceptionInInitializerError::ExceptionInInitializerError(String* message) 
    : ExceptionInInitializerError(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::ExceptionInInitializerError::ExceptionInInitializerError() 
    : ExceptionInInitializerError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::ExceptionInInitializerError::ctor(String* message)
{
    super::ctor(message);
    cause2 = nullptr;
}

void java::lang::ExceptionInInitializerError::ctor()
{
    ctor(nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::ExceptionInInitializerError::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ExceptionInInitializerError", 37);
    return c;
}

java::lang::Class* java::lang::ExceptionInInitializerError::getClass0()
{
    return class_();
}

