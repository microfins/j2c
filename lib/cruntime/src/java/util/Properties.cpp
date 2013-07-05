// Generated from /runtime/java/util/Properties.java
#include <java/util/Properties.hpp>

#include <java/io/PrintStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Enumeration.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Properties_InputStreamParser.hpp>
#include <java/util/Properties_ReaderParser.hpp>
#include <java/util/Set.hpp>

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

java::util::Properties::Properties(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Properties::Properties()
    : Properties(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::util::Properties::load(::java::io::InputStream* in) /* throws(IOException) */
{
    (new Properties_InputStreamParser(in))->parse(this);
}

void java::util::Properties::load(::java::io::Reader* reader) /* throws(IOException) */
{
    (new Properties_ReaderParser(reader))->parse(this);
}

void java::util::Properties::store(::java::io::OutputStream* out, ::java::lang::String* comment) /* throws(IOException) */
{
    auto os = new ::java::io::PrintStream(out);
    npc(os)->println(::java::lang::StringBuilder().append(u"# "_j)->append(comment)->toString());
    for (auto *it = npc(entrySet())->iterator(); npc(it)->hasNext(); ) {
        auto entry = java_cast< Map_Entry* >(java_cast< ::java::lang::Object* >(npc(it)->next()));
        npc(os)->print(java_cast< ::java::lang::Object* >(npc(entry)->getKey()));
        npc(os)->print(u'=');
        npc(os)->println(java_cast< ::java::lang::Object* >(npc(entry)->getValue()));
    }
    npc(os)->flush();
}

java::lang::String* java::util::Properties::getProperty(::java::lang::String* key)
{
    return java_cast< ::java::lang::String* >(java_cast< ::java::lang::Object* >(get(static_cast< ::java::lang::Object* >(key))));
}

java::lang::String* java::util::Properties::getProperty(::java::lang::String* key, ::java::lang::String* defaultValue)
{
    auto value = java_cast< ::java::lang::String* >(java_cast< ::java::lang::Object* >(get(static_cast< ::java::lang::Object* >(key))));
    if(value == nullptr) {
        return defaultValue;
    }
    return value;
}

java::lang::Object* java::util::Properties::setProperty(::java::lang::String* key, ::java::lang::String* value)
{
    return java_cast< ::java::lang::Object* >(put(static_cast< ::java::lang::Object* >(key), static_cast< ::java::lang::Object* >(value)));
}

java::util::Enumeration* java::util::Properties::propertyNames()
{
    return keys();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Properties::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Properties", 20);
    return c;
}

java::lang::Class* java::util::Properties::getClass0()
{
    return class_();
}

