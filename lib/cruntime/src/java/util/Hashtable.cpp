// Generated from /runtime/java/util/Hashtable.java
#include <java/util/Hashtable.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections_IteratorEnumeration.hpp>
#include <java/util/Collections_SynchronizedCollection.hpp>
#include <java/util/Collections_SynchronizedSet.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
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

java::util::Hashtable::Hashtable(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Hashtable::Hashtable(int32_t capacity) 
    : Hashtable(*static_cast< ::default_init_tag* >(0))
{
    ctor(capacity);
}

java::util::Hashtable::Hashtable() 
    : Hashtable(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::Hashtable::Hashtable(Map* m) 
    : Hashtable(*static_cast< ::default_init_tag* >(0))
{
    ctor(m);
}

void java::util::Hashtable::ctor(int32_t capacity)
{
    super::ctor();
    map = new HashMap(capacity);
}

void java::util::Hashtable::ctor()
{
    ctor(int32_t(0));
}

void java::util::Hashtable::ctor(Map* m)
{
    ctor(npc(m)->size());
    for (auto _i = npc(npc(m)->entrySet())->iterator(); _i->hasNext(); ) {
        Map_Entry* entry = java_cast< Map_Entry* >(_i->next());
        {
            put(static_cast< ::java::lang::Object* >(java_cast< ::java::lang::Object* >(npc(entry)->getKey())), static_cast< ::java::lang::Object* >(java_cast< ::java::lang::Object* >(npc(entry)->getValue())));
        }
    }
}

java::lang::String* java::util::Hashtable::toString()
{
    return npc(map)->toString();
}

bool java::util::Hashtable::isEmpty()
{
    return npc(map)->isEmpty();
}

int32_t java::util::Hashtable::size()
{
    return npc(map)->size();
}

bool java::util::Hashtable::containsKey(::java::lang::Object* key)
{
    return npc(map)->containsKey(key);
}

bool java::util::Hashtable::containsValue(::java::lang::Object* value)
{
    return npc(map)->containsValue(value);
}

java::lang::Object* java::util::Hashtable::get(::java::lang::Object* key)
{
    return java_cast< ::java::lang::Object* >(npc(map)->get(key));
}

java::lang::Object* java::util::Hashtable::put(::java::lang::Object* key, ::java::lang::Object* value)
{
    return java_cast< ::java::lang::Object* >(npc(map)->put(static_cast< ::java::lang::Object* >(key), static_cast< ::java::lang::Object* >(value)));
}

void java::util::Hashtable::putAll(Map* elts)
{
    npc(map)->putAll(static_cast< Map* >(elts));
}

java::lang::Object* java::util::Hashtable::remove(::java::lang::Object* key)
{
    return java_cast< ::java::lang::Object* >(npc(map)->remove(key));
}

void java::util::Hashtable::clear()
{
    npc(map)->clear();
}

java::util::Enumeration* java::util::Hashtable::keys()
{
    return new Collections_IteratorEnumeration(npc(keySet())->iterator());
}

java::util::Enumeration* java::util::Hashtable::elements()
{
    return new Collections_IteratorEnumeration(npc(values())->iterator());
}

java::util::Set* java::util::Hashtable::entrySet()
{
    return new Collections_SynchronizedSet(this, npc(map)->entrySet());
}

java::util::Set* java::util::Hashtable::keySet()
{
    return new Collections_SynchronizedSet(this, npc(map)->keySet());
}

java::util::Collection* java::util::Hashtable::values()
{
    return new Collections_SynchronizedCollection(this, npc(map)->values());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Hashtable::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Hashtable", 19);
    return c;
}

java::lang::Class* java::util::Hashtable::getClass0()
{
    return class_();
}

