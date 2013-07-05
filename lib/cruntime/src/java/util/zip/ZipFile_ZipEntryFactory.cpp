// Generated from /runtime/java/util/zip/ZipFile.java
#include <java/util/zip/ZipFile_ZipEntryFactory.hpp>

#include <java/util/zip/ZipFile_MyZipEntry.hpp>

java::util::zip::ZipFile_ZipEntryFactory::ZipFile_ZipEntryFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::zip::ZipFile_ZipEntryFactory::ZipFile_ZipEntryFactory()
    : ZipFile_ZipEntryFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::zip::ZipFile_ZipEntryFactory*& java::util::zip::ZipFile_ZipEntryFactory::Instance()
{
    clinit();
    return Instance_;
}
java::util::zip::ZipFile_ZipEntryFactory* java::util::zip::ZipFile_ZipEntryFactory::Instance_;

java::util::zip::ZipEntry* java::util::zip::ZipFile_ZipEntryFactory::makeEntry(ZipFile_Window* window, int32_t pointer)
{
    return new ZipFile_MyZipEntry(window, pointer);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::zip::ZipFile_ZipEntryFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.zip.ZipFile.ZipEntryFactory", 37);
    return c;
}

void java::util::zip::ZipFile_ZipEntryFactory::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        Instance_ = new ZipFile_ZipEntryFactory();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::util::zip::ZipFile_ZipEntryFactory::getClass0()
{
    return class_();
}

