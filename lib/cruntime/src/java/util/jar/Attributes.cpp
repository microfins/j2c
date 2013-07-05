// Generated from /runtime/java/util/jar/Attributes.java
#include <java/util/jar/Attributes.hpp>

java::util::jar::Attributes::Attributes(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::jar::Attributes::Attributes()
    : Attributes(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::jar::Attributes::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.jar.Attributes", 24);
    return c;
}

java::lang::Class* java::util::jar::Attributes::getClass0()
{
    return class_();
}

