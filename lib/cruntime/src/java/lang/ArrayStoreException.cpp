// Generated from /runtime/java/lang/ArrayStoreException.java
#include <java/lang/ArrayStoreException.hpp>

java::lang::ArrayStoreException::ArrayStoreException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ArrayStoreException::ArrayStoreException(String* message) 
    : ArrayStoreException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::ArrayStoreException::ArrayStoreException() 
    : ArrayStoreException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::ArrayStoreException::ctor(String* message)
{
    super::ctor(message, nullptr);
}

void java::lang::ArrayStoreException::ctor()
{
    ctor(nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::ArrayStoreException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ArrayStoreException", 29);
    return c;
}

java::lang::Class* java::lang::ArrayStoreException::getClass0()
{
    return class_();
}

