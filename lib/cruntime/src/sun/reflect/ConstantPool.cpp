// Generated from /runtime/sun/reflect/ConstantPool.java
#include <sun/reflect/ConstantPool.hpp>

sun::reflect::ConstantPool::ConstantPool(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

sun::reflect::ConstantPool::ConstantPool()
    : ConstantPool(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* sun::reflect::ConstantPool::class_()
{
    static ::java::lang::Class* c = ::class_(u"sun.reflect.ConstantPool", 24);
    return c;
}

java::lang::Class* sun::reflect::ConstantPool::getClass0()
{
    return class_();
}

