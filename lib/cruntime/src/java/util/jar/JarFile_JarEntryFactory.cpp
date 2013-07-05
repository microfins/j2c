// Generated from /runtime/java/util/jar/JarFile.java
#include <java/util/jar/JarFile_JarEntryFactory.hpp>

#include <java/util/jar/JarFile_MyJarEntry.hpp>

java::util::jar::JarFile_JarEntryFactory::JarFile_JarEntryFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::jar::JarFile_JarEntryFactory::JarFile_JarEntryFactory()
    : JarFile_JarEntryFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::jar::JarFile_JarEntryFactory*& java::util::jar::JarFile_JarEntryFactory::Instance()
{
    clinit();
    return Instance_;
}
java::util::jar::JarFile_JarEntryFactory* java::util::jar::JarFile_JarEntryFactory::Instance_;

java::util::zip::ZipEntry* java::util::jar::JarFile_JarEntryFactory::makeEntry(::java::util::zip::ZipFile_Window* window, int32_t pointer)
{
    return new JarFile_MyJarEntry(window, pointer);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::jar::JarFile_JarEntryFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.jar.JarFile.JarEntryFactory", 37);
    return c;
}

void java::util::jar::JarFile_JarEntryFactory::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        Instance_ = new JarFile_JarEntryFactory();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::util::jar::JarFile_JarEntryFactory::getClass0()
{
    return class_();
}

