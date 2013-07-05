// Generated from /runtime/java/net/URLClassLoader.java
#include <java/net/URLClassLoader.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/File.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassNotFoundException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/net/MalformedURLException.hpp>
#include <java/net/URL.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace net
    {
typedef ::SubArray< ::java::net::URL, ::java::lang::ObjectArray > URLArray;
    } // net
} // java

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
java::net::URLClassLoader::URLClassLoader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::net::URLClassLoader::URLClassLoader(URLArray* urls, ::java::lang::ClassLoader* parent) 
    : URLClassLoader(*static_cast< ::default_init_tag* >(0))
{
    ctor(urls,parent);
}

void java::net::URLClassLoader::ctor(URLArray* urls, ::java::lang::ClassLoader* parent)
{
    super::ctor(parent);
    if(npc(urls)->length != 1) {
        throw new ::java::lang::UnsupportedOperationException();
    }
    if(!npc(npc((*urls)[int32_t(0)])->getProtocol())->equals(static_cast< ::java::lang::Object* >(u"file"_j))) {
        throw new ::java::lang::UnsupportedOperationException(npc((*urls)[int32_t(0)])->getProtocol());
    }
    this->jarFile = new ::java::io::File(npc((*urls)[int32_t(0)])->getFile());
}

java::lang::Class* java::net::URLClassLoader::findClass(::java::lang::String* name) /* throws(ClassNotFoundException) */
{
    try {
        auto stream = getResourceAsStream(::java::lang::StringBuilder().append(npc(name)->replace(static_cast< ::java::lang::CharSequence* >(u"."_j), static_cast< ::java::lang::CharSequence* >(u"/"_j)))->append(u".class"_j)->toString());
        if(stream == nullptr) {
            throw new ::java::lang::ClassNotFoundException(::java::lang::StringBuilder().append(u"couldn't find class "_j)->append(name)->toString());
        }
        auto buf = new ::int8_tArray(int32_t(2048));
        auto mem = new ::java::io::ByteArrayOutputStream();
        {
            auto finally0 = finally([&] {
                npc(stream)->close();
            });
            {
                int32_t size;
                while ((size = npc(stream)->read(buf, 0, npc(buf)->length)) > 0) {
                    npc(mem)->write(buf, int32_t(0), size);
                }
                auto data = npc(mem)->toByteArray_();
                return defineClass(name, data, 0, npc(data)->length);
            }
        }

    } catch (::java::io::IOException* e) {
        throw new ::java::lang::ClassNotFoundException(::java::lang::StringBuilder().append(u"couldn't find class "_j)->append(name)->toString(), e);
    }
}

java::net::URL* java::net::URLClassLoader::getResource(::java::lang::String* path)
{
    try {
        return new URL(::java::lang::StringBuilder().append(u"jar:file:"_j)->append(npc(jarFile)->getAbsolutePath())
            ->append(u"!/"_j)
            ->append(path)->toString());
    } catch (MalformedURLException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::net::URLClassLoader::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.net.URLClassLoader", 23);
    return c;
}

java::lang::Class* java::net::URLClassLoader::getClass0()
{
    return class_();
}

