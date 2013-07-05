// Generated from /runtime/java/lang/OutOfMemoryError.java
#include <java/lang/OutOfMemoryError.hpp>

java::lang::OutOfMemoryError::OutOfMemoryError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::OutOfMemoryError::OutOfMemoryError(String* message) 
    : OutOfMemoryError(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::OutOfMemoryError::OutOfMemoryError() 
    : OutOfMemoryError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::OutOfMemoryError::ctor(String* message)
{
    super::ctor(message);
}

void java::lang::OutOfMemoryError::ctor()
{
    ctor(nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::OutOfMemoryError::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.OutOfMemoryError", 26);
    return c;
}

java::lang::Class* java::lang::OutOfMemoryError::getClass0()
{
    return class_();
}

