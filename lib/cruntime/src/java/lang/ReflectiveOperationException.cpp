// Generated from /runtime/java/lang/ReflectiveOperationException.java
#include <java/lang/ReflectiveOperationException.hpp>

java::lang::ReflectiveOperationException::ReflectiveOperationException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ReflectiveOperationException::ReflectiveOperationException()
    : ReflectiveOperationException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::ReflectiveOperationException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ReflectiveOperationException", 38);
    return c;
}

java::lang::Class* java::lang::ReflectiveOperationException::getClass0()
{
    return class_();
}

