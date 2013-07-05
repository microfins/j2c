// Generated from /runtime/java/lang/StackOverflowError.java
#include <java/lang/StackOverflowError.hpp>

java::lang::StackOverflowError::StackOverflowError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::StackOverflowError::StackOverflowError(String* message) 
    : StackOverflowError(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::StackOverflowError::StackOverflowError() 
    : StackOverflowError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::StackOverflowError::ctor(String* message)
{
    super::ctor(message);
}

void java::lang::StackOverflowError::ctor()
{
    ctor(nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::StackOverflowError::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.StackOverflowError", 28);
    return c;
}

java::lang::Class* java::lang::StackOverflowError::getClass0()
{
    return class_();
}

