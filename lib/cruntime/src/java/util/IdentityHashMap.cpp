// Generated from /runtime/java/util/IdentityHashMap.java
#include <java/util/IdentityHashMap.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/IdentityHashMap_MyHelper.hpp>
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

java::util::IdentityHashMap::IdentityHashMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::IdentityHashMap::IdentityHashMap(int32_t capacity) 
    : IdentityHashMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(capacity);
}

java::util::IdentityHashMap::IdentityHashMap() 
    : IdentityHashMap(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::util::IdentityHashMap::ctor(int32_t capacity)
{
    super::ctor();
    map = new HashMap(capacity, new IdentityHashMap_MyHelper());
}

void java::util::IdentityHashMap::ctor()
{
    ctor(int32_t(0));
}

bool java::util::IdentityHashMap::isEmpty()
{
    return npc(map)->isEmpty();
}

int32_t java::util::IdentityHashMap::size()
{
    return npc(map)->size();
}

bool java::util::IdentityHashMap::containsKey(::java::lang::Object* key)
{
    return npc(map)->containsKey(key);
}

bool java::util::IdentityHashMap::containsValue(::java::lang::Object* value)
{
    return npc(map)->containsValue(value);
}

java::lang::Object* java::util::IdentityHashMap::get(::java::lang::Object* key)
{
    return java_cast< ::java::lang::Object* >(npc(map)->get(key));
}

java::lang::Object* java::util::IdentityHashMap::put(::java::lang::Object* key, ::java::lang::Object* value)
{
    return java_cast< ::java::lang::Object* >(npc(map)->put(static_cast< ::java::lang::Object* >(key), static_cast< ::java::lang::Object* >(value)));
}

void java::util::IdentityHashMap::putAll(Map* elts)
{
    npc(map)->putAll(static_cast< Map* >(elts));
}

java::lang::Object* java::util::IdentityHashMap::remove(::java::lang::Object* key)
{
    return java_cast< ::java::lang::Object* >(npc(map)->remove(key));
}

void java::util::IdentityHashMap::clear()
{
    npc(map)->clear();
}

java::util::Set* java::util::IdentityHashMap::entrySet()
{
    return npc(map)->entrySet();
}

java::util::Set* java::util::IdentityHashMap::keySet()
{
    return npc(map)->keySet();
}

java::util::Collection* java::util::IdentityHashMap::values()
{
    return npc(map)->values();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::IdentityHashMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.IdentityHashMap", 25);
    return c;
}

java::lang::Class* java::util::IdentityHashMap::getClass0()
{
    return class_();
}

