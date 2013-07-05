// Generated from /runtime/java/util/WeakHashMap.java
#include <java/util/WeakHashMap.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/ref/Reference.hpp>
#include <java/lang/ref/ReferenceQueue.hpp>
#include <java/util/Collection.hpp>
#include <java/util/HashMap_Cell.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <java/util/WeakHashMap_MyCell.hpp>
#include <java/util/WeakHashMap_MyHelper.hpp>

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

java::util::WeakHashMap::WeakHashMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::WeakHashMap::WeakHashMap(int32_t capacity) 
    : WeakHashMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(capacity);
}

java::util::WeakHashMap::WeakHashMap() 
    : WeakHashMap(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::util::WeakHashMap::ctor(int32_t capacity)
{
    super::ctor();
    map = new HashMap(capacity, new WeakHashMap_MyHelper(this));
    queue = new ::java::lang::ref::ReferenceQueue();
}

void java::util::WeakHashMap::ctor()
{
    ctor(int32_t(0));
}

void java::util::WeakHashMap::poll()
{
    for (auto *c = java_cast< WeakHashMap_MyCell* >(npc(queue)->poll()); c != nullptr; c = java_cast< WeakHashMap_MyCell* >(npc(queue)->poll())) {
        npc(map)->remove(static_cast< HashMap_Cell* >(c));
    }
}

bool java::util::WeakHashMap::isEmpty()
{
    return npc(map)->isEmpty();
}

int32_t java::util::WeakHashMap::size()
{
    return npc(map)->size();
}

bool java::util::WeakHashMap::containsKey(::java::lang::Object* key)
{
    poll();
    return npc(map)->containsKey(key);
}

bool java::util::WeakHashMap::containsValue(::java::lang::Object* value)
{
    poll();
    return npc(map)->containsValue(value);
}

java::lang::Object* java::util::WeakHashMap::get(::java::lang::Object* key)
{
    poll();
    return java_cast< ::java::lang::Object* >(npc(map)->get(key));
}

java::lang::Object* java::util::WeakHashMap::put(::java::lang::Object* key, ::java::lang::Object* value)
{
    poll();
    return java_cast< ::java::lang::Object* >(npc(map)->put(static_cast< ::java::lang::Object* >(key), static_cast< ::java::lang::Object* >(value)));
}

void java::util::WeakHashMap::putAll(Map* elts)
{
    npc(map)->putAll(static_cast< Map* >(elts));
}

java::lang::Object* java::util::WeakHashMap::remove(::java::lang::Object* key)
{
    poll();
    return java_cast< ::java::lang::Object* >(npc(map)->remove(key));
}

void java::util::WeakHashMap::clear()
{
    npc(map)->clear();
}

java::util::Set* java::util::WeakHashMap::entrySet()
{
    return npc(map)->entrySet();
}

java::util::Set* java::util::WeakHashMap::keySet()
{
    return npc(map)->keySet();
}

java::util::Collection* java::util::WeakHashMap::values()
{
    return npc(map)->values();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::WeakHashMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.WeakHashMap", 21);
    return c;
}

java::lang::Class* java::util::WeakHashMap::getClass0()
{
    return class_();
}

