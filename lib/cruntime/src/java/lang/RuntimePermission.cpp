// Generated from /runtime/java/lang/RuntimePermission.java
#include <java/lang/RuntimePermission.hpp>

java::lang::RuntimePermission::RuntimePermission(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::RuntimePermission::RuntimePermission(String* name) 
    : RuntimePermission(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

void java::lang::RuntimePermission::ctor(String* name)
{
    super::ctor(name);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::RuntimePermission::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.RuntimePermission", 27);
    return c;
}

java::lang::Class* java::lang::RuntimePermission::getClass0()
{
    return class_();
}

