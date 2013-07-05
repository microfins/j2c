// Generated from /runtime/java/lang/Number.java
#include <java/lang/Number.hpp>

java::lang::Number::Number(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Number::Number()
    : Number(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Number::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Number", 16);
    return c;
}

java::lang::Class* java::lang::Number::getClass0()
{
    return class_();
}

