// Generated from /runtime/avian/jar/Handler.java
#include <avian/jar/Handler_MyJarURLConnection.hpp>

#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/net/MalformedURLException.hpp>
#include <java/net/URL.hpp>
#include <java/util/jar/JarEntry.hpp>
#include <java/util/jar/JarFile.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

avian::jar::Handler_MyJarURLConnection::Handler_MyJarURLConnection(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::jar::Handler_MyJarURLConnection::Handler_MyJarURLConnection(::java::net::URL* url) 
    : Handler_MyJarURLConnection(*static_cast< ::default_init_tag* >(0))
{
    ctor(url);
}

void avian::jar::Handler_MyJarURLConnection::ctor(::java::net::URL* url)
{
    super::ctor(url);
    auto s = npc(url)->getFile();
    auto index = npc(s)->indexOf(u"!/"_j);
    try {
        this->file = new ::java::util::jar::JarFile((new ::java::net::URL(npc(s)->substring(0, index)))->getFile());
        this->entry = npc(this->file)->getJarEntry(npc(s)->substring(index + int32_t(2)));
    } catch (::java::net::MalformedURLException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
}

java::util::jar::JarFile* avian::jar::Handler_MyJarURLConnection::getJarFile() /* throws(IOException) */
{
    return file;
}

int32_t avian::jar::Handler_MyJarURLConnection::getContentLength()
{
    return npc(entry)->getSize();
}

java::io::InputStream* avian::jar::Handler_MyJarURLConnection::getInputStream() /* throws(IOException) */
{
    return npc(file)->getInputStream(entry);
}

void avian::jar::Handler_MyJarURLConnection::connect()
{
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::jar::Handler_MyJarURLConnection::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.jar.Handler.MyJarURLConnection", 36);
    return c;
}

java::lang::Class* avian::jar::Handler_MyJarURLConnection::getClass0()
{
    return class_();
}

