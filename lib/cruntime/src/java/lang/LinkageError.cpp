// Generated from /runtime/java/lang/LinkageError.java
#include <java/lang/LinkageError.hpp>

java::lang::LinkageError::LinkageError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::LinkageError::LinkageError(String* message) 
    : LinkageError(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::LinkageError::LinkageError() 
    : LinkageError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::LinkageError::ctor(String* message)
{
    super::ctor(message, nullptr);
}

void java::lang::LinkageError::ctor()
{
    ctor(nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::LinkageError::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.LinkageError", 22);
    return c;
}

java::lang::Class* java::lang::LinkageError::getClass0()
{
    return class_();
}

