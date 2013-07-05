// Generated from /runtime/avian/SystemClassLoader.java
#include <avian/SystemClassLoader.hpp>

#include <avian/VMClass.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/ClassNotFoundException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/net/MalformedURLException.hpp>
#include <java/net/URL.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Enumeration.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

avian::SystemClassLoader::SystemClassLoader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::SystemClassLoader::SystemClassLoader()
    : SystemClassLoader(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::Class* avian::SystemClassLoader::findClass(::java::lang::String* name) /* throws(ClassNotFoundException) */
{
    return getClass(findVMClass(name));
}

java::lang::Class* avian::SystemClassLoader::reallyFindLoadedClass(::java::lang::String* name)
{
    auto c = findLoadedVMClass(name);
    return c == nullptr ? static_cast< ::java::lang::Class* >(nullptr) : getClass(c);
}

java::lang::Class* avian::SystemClassLoader::loadClass(::java::lang::String* name, bool resolve) /* throws(ClassNotFoundException) */
{
    auto c = findLoadedClass(name);
    if(c == nullptr) {
        auto parent = getParent();
        if(parent != nullptr) {
            try {
                c = npc(parent)->loadClass(name);
            } catch (::java::lang::ClassNotFoundException* ok) {
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

java::net::URL* avian::SystemClassLoader::findResource(::java::lang::String* name)
{
    auto prefix = resourceURLPrefix(name);
    if(prefix != nullptr) {
        try {
            return new ::java::net::URL(::java::lang::StringBuilder().append(prefix)->append(name)->toString());
        } catch (::java::net::MalformedURLException* ignored) {
        }
    }
    return nullptr;
}

java::net::URL* avian::SystemClassLoader::getResource(::java::lang::String* path)
{
    ::java::net::URL* url = nullptr;
    auto parent = getParent();
    if(parent != nullptr) {
        url = npc(parent)->getResource(path);
    }
    if(url == nullptr) {
        url = findResource(path);
    }
    return url;
}

java::util::Enumeration* avian::SystemClassLoader::getResources(::java::lang::String* name) /* throws(IOException) */
{
    ::java::util::Collection* urls = new ::java::util::ArrayList(int32_t(5));
    auto parent = getParent();
    if(parent != nullptr) {
        for (auto *e = npc(parent)->getResources(name); npc(e)->hasMoreElements(); ) {
            npc(urls)->add(java_cast< ::java::net::URL* >(npc(e)->nextElement()));
        }
    }
    auto url = findResource(name);
    if(url != nullptr) {
        npc(urls)->add(url);
    }
    return ::java::util::Collections::enumeration(urls);
}

java::util::Enumeration* avian::SystemClassLoader::findResources(::java::lang::String* name)
{
    ::java::util::Collection* urls = new ::java::util::ArrayList(int32_t(1));
    auto url = findResource(name);
    if(url != nullptr) {
        npc(urls)->add(url);
    }
    return ::java::util::Collections::enumeration(urls);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::SystemClassLoader::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.SystemClassLoader", 23);
    return c;
}

java::lang::Class* avian::SystemClassLoader::loadClass(::java::lang::String* name)
{
    return super::loadClass(name);
}

java::lang::Class* avian::SystemClassLoader::getClass()
{
    return super::getClass();
}

java::lang::Class* avian::SystemClassLoader::getClass0()
{
    return class_();
}

