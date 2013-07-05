// Generated from /runtime/java/lang/ClassLoader.java
#include <java/lang/ClassLoader.hpp>

#include <avian/Classes.hpp>
#include <avian/SystemClassLoader.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassNotFoundException.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/net/URL.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Enumeration.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::lang::ClassLoader::ClassLoader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ClassLoader::ClassLoader(ClassLoader* parent) 
    : ClassLoader(*static_cast< ::default_init_tag* >(0))
{
    ctor(parent);
}

java::lang::ClassLoader::ClassLoader() 
    : ClassLoader(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::ClassLoader::ctor(ClassLoader* parent)
{
    super::ctor();
    if(parent == nullptr) {
        this->parent = getSystemClassLoader();
    } else {
        this->parent = parent;
    }
}

void java::lang::ClassLoader::ctor()
{
    ctor(getSystemClassLoader());
}

java::lang::ClassLoader* java::lang::ClassLoader::getSystemClassLoader()
{
    clinit();
    return npc(ClassLoader::class_())->getClassLoader();
}

java::lang::Class* java::lang::ClassLoader::defineClass(String* name, ::int8_tArray* b, int32_t offset, int32_t length)
{
    if(b == nullptr) {
        throw new NullPointerException();
    }
    if(offset < 0 || offset > length || offset + length > npc(b)->length) {
        throw new IndexOutOfBoundsException();
    }
    return ::avian::SystemClassLoader::getClass(::avian::Classes::defineVMClass(this, b, offset, length));
}

java::lang::Class* java::lang::ClassLoader::findClass(String* name) /* throws(ClassNotFoundException) */
{
    throw new ClassNotFoundException();
}

java::lang::Class* java::lang::ClassLoader::reallyFindLoadedClass(String* name)
{
    return nullptr;
}

java::lang::Class* java::lang::ClassLoader::findLoadedClass(String* name)
{
    return reallyFindLoadedClass(name);
}

java::lang::Class* java::lang::ClassLoader::loadClass(String* name) /* throws(ClassNotFoundException) */
{
    return loadClass(name, false);
}

java::lang::Class* java::lang::ClassLoader::loadClass(String* name, bool resolve) /* throws(ClassNotFoundException) */
{
    auto c = findLoadedClass(name);
    if(c == nullptr) {
        if(parent != nullptr) {
            try {
                c = npc(parent)->loadClass(name);
            } catch (ClassNotFoundException* ok) {
            }
        }
        if(c == nullptr) {
            c = findClass(name);
        }
    }
    if(resolve) {
        resolveClass(c);
    }
    return c;
}

void java::lang::ClassLoader::resolveClass(Class* c)
{
    ::avian::Classes::link(npc(c)->vmClass, this);
}

java::lang::ClassLoader* java::lang::ClassLoader::getParent()
{
    return parent;
}

java::net::URL* java::lang::ClassLoader::findResource(String* path)
{
    return nullptr;
}

java::util::Enumeration* java::lang::ClassLoader::findResources(String* name) /* throws(IOException) */
{
    return ::java::util::Collections::enumeration(new ::java::util::ArrayList(int32_t(0)));
}

java::net::URL* java::lang::ClassLoader::getResource(String* path)
{
    ::java::net::URL* url = nullptr;
    if(parent != nullptr) {
        url = npc(parent)->getResource(path);
    }
    if(url == nullptr) {
        url = findResource(path);
    }
    return url;
}

java::io::InputStream* java::lang::ClassLoader::getResourceAsStream(String* path)
{
    auto url = getResource(path);
    try {
        return (url == nullptr ? static_cast< ::java::io::InputStream* >(nullptr) : npc(url)->openStream());
    } catch (::java::io::IOException* e) {
        return nullptr;
    }
}

java::net::URL* java::lang::ClassLoader::getSystemResource(String* path)
{
    clinit();
    return npc(getSystemClassLoader())->getResource(path);
}

java::io::InputStream* java::lang::ClassLoader::getSystemResourceAsStream(String* path)
{
    clinit();
    return npc(getSystemClassLoader())->getResourceAsStream(path);
}

java::util::Enumeration* java::lang::ClassLoader::getSystemResources(String* name) /* throws(IOException) */
{
    clinit();
    return npc(getSystemClassLoader())->getResources(name);
}

java::util::Enumeration* java::lang::ClassLoader::getResources(String* name) /* throws(IOException) */
{
    auto resources = collectResources(name);
    return ::java::util::Collections::enumeration(resources);
}

java::util::Collection* java::lang::ClassLoader::collectResources(String* name)
{
    auto urls = parent != nullptr ? npc(parent)->collectResources(name) : static_cast< ::java::util::Collection* >(new ::java::util::ArrayList(int32_t(5)));
    auto url = findResource(name);
    if(url != nullptr) {
        npc(urls)->add(url);
    }
    return urls;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::ClassLoader::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ClassLoader", 21);
    return c;
}

java::lang::Class* java::lang::ClassLoader::getClass0()
{
    return class_();
}

