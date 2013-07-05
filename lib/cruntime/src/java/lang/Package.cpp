// Generated from /runtime/java/lang/Package.java
#include <java/lang/Package.hpp>

#include <java/lang/ClassLoader.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/net/URL.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::lang::Package::Package(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Package::Package(String* name, String* implementationTitle, String* implementationVendor, String* implementationVersion, String* specificationTitle, String* specificationVendor, String* specificationVersion, ::java::net::URL* sealed, ClassLoader* loader) 
    : Package(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,implementationTitle,implementationVendor,implementationVersion,specificationTitle,specificationVendor,specificationVersion,sealed,loader);
}

void java::lang::Package::ctor(String* name, String* implementationTitle, String* implementationVendor, String* implementationVersion, String* specificationTitle, String* specificationVendor, String* specificationVersion, ::java::net::URL* sealed, ClassLoader* loader)
{
    super::ctor();
    this->name = name;
    this->implementationTitle = implementationTitle;
    this->implementationVendor = implementationVendor;
    this->implementationVersion = implementationVersion;
    this->specificationTitle = specificationTitle;
    this->specificationVendor = specificationVendor;
    this->specificationVersion = specificationVersion;
    this->sealed = sealed;
    this->loader = loader;
}

java::lang::String* java::lang::Package::getName()
{
    return name;
}

java::lang::String* java::lang::Package::getImplementationTitle()
{
    return implementationTitle;
}

java::lang::String* java::lang::Package::getImplementationVendor()
{
    return implementationVendor;
}

java::lang::String* java::lang::Package::getImplementationVersion()
{
    return implementationVersion;
}

java::lang::String* java::lang::Package::getSpecificationTitle()
{
    return specificationTitle;
}

java::lang::String* java::lang::Package::getSpecificationVendor()
{
    return specificationVendor;
}

java::lang::String* java::lang::Package::getSpecificationVersion()
{
    return specificationVersion;
}

bool java::lang::Package::isSealed()
{
    return sealed != nullptr;
}

bool java::lang::Package::isSealed(::java::net::URL* url)
{
    return npc(sealed)->equals(url);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Package::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Package", 17);
    return c;
}

java::lang::Class* java::lang::Package::getClass0()
{
    return class_();
}

