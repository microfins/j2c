// Generated from /runtime/java/util/PropertyResourceBundle.java
#include <java/util/PropertyResourceBundle.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Enumeration.hpp>
#include <java/util/Properties.hpp>

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

java::util::PropertyResourceBundle::PropertyResourceBundle(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::PropertyResourceBundle::PropertyResourceBundle(::java::io::InputStream* in)  /* throws(IOException) */
    : PropertyResourceBundle(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void java::util::PropertyResourceBundle::init()
{
    map = new Properties();
}

void java::util::PropertyResourceBundle::ctor(::java::io::InputStream* in) /* throws(IOException) */
{
    super::ctor();
    init();
    npc(map)->load(in);
}

java::lang::Object* java::util::PropertyResourceBundle::handleGetObject(::java::lang::String* key)
{
    return java_cast< ::java::lang::Object* >(npc(map)->get(static_cast< ::java::lang::Object* >(key)));
}

java::util::Enumeration* java::util::PropertyResourceBundle::getKeys()
{
    return npc(map)->keys();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::PropertyResourceBundle::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.PropertyResourceBundle", 32);
    return c;
}

java::lang::Class* java::util::PropertyResourceBundle::getClass0()
{
    return class_();
}

