// Generated from /runtime/java/util/jar/JarFile.java
#include <java/util/jar/JarFile.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/util/Enumeration.hpp>
#include <java/util/jar/JarEntry.hpp>
#include <java/util/jar/JarFile_JarEntryFactory.hpp>
#include <java/util/zip/ZipEntry.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

java::util::jar::JarFile::JarFile(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::jar::JarFile::JarFile(::java::lang::String* name)  /* throws(IOException) */
    : JarFile(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

java::util::jar::JarFile::JarFile(::java::io::File* file)  /* throws(IOException) */
    : JarFile(*static_cast< ::default_init_tag* >(0))
{
    ctor(file);
}

void java::util::jar::JarFile::ctor(::java::lang::String* name) /* throws(IOException) */
{
    super::ctor(name);
}

void java::util::jar::JarFile::ctor(::java::io::File* file) /* throws(IOException) */
{
    super::ctor(file);
}

java::util::Enumeration* java::util::jar::JarFile::entries()
{
    return java_cast< ::java::util::Enumeration* >(makeEnumeration(JarFile_JarEntryFactory::Instance()));
}

java::util::jar::JarEntry* java::util::jar::JarFile::getJarEntry(::java::lang::String* name)
{
    return java_cast< JarEntry* >(getEntry(JarFile_JarEntryFactory::Instance(), name));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::jar::JarFile::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.jar.JarFile", 21);
    return c;
}

java::lang::Class* java::util::jar::JarFile::getClass0()
{
    return class_();
}

