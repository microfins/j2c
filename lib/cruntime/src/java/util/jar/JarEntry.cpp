// Generated from /runtime/java/util/jar/JarEntry.java
#include <java/util/jar/JarEntry.hpp>

java::util::jar::JarEntry::JarEntry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::jar::JarEntry::JarEntry()
    : JarEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::jar::JarEntry::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.jar.JarEntry", 22);
    return c;
}

java::lang::Class* java::util::jar::JarEntry::getClass0()
{
    return class_();
}

