// Generated from /runtime/java/util/AbstractMap.java
#include <java/util/AbstractMap.hpp>

java::util::AbstractMap::AbstractMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::AbstractMap::AbstractMap()
    : AbstractMap(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::AbstractMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.AbstractMap", 21);
    return c;
}

java::lang::Class* java::util::AbstractMap::getClass0()
{
    return class_();
}

