// Generated from /runtime/java/util/zip/ZipEntry.java
#include <java/util/zip/ZipEntry.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::zip::ZipEntry::ZipEntry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::zip::ZipEntry::ZipEntry()
    : ZipEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool java::util::zip::ZipEntry::isDirectory()
{
    return npc(getName())->endsWith(u"/"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::zip::ZipEntry::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.zip.ZipEntry", 22);
    return c;
}

java::lang::Class* java::util::zip::ZipEntry::getClass0()
{
    return class_();
}

