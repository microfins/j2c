// Generated from /runtime/java/lang/InheritableThreadLocal.java
#include <java/lang/InheritableThreadLocal.hpp>

#include <java/lang/Object.hpp>

java::lang::InheritableThreadLocal::InheritableThreadLocal(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::InheritableThreadLocal::InheritableThreadLocal()
    : InheritableThreadLocal(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::Object* java::lang::InheritableThreadLocal::childValue(Object* parentValue)
{
    return parentValue;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::InheritableThreadLocal::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.InheritableThreadLocal", 32);
    return c;
}

java::lang::Class* java::lang::InheritableThreadLocal::getClass0()
{
    return class_();
}

