// Generated from /runtime/java/util/Collections.java
#include <java/util/Collections_SynchronizedMap.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections_SynchronizedCollection.hpp>
#include <java/util/Collections_SynchronizedSet.hpp>
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

extern void lock(::java::lang::Object *);
extern void unlock(::java::lang::Object *);

namespace
{
    struct synchronized
    {
        synchronized(::java::lang::Object *o) : o(o) { ::lock(o); }
        ~synchronized() { ::unlock(o); }
    private:
        synchronized(const synchronized&); synchronized& operator=(const synchronized&);
        ::java::lang::Object *o;
    };
}
java::util::Collections_SynchronizedMap::Collections_SynchronizedMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Collections_SynchronizedMap::Collections_SynchronizedMap(Map* map) 
    : Collections_SynchronizedMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(map);
}

java::util::Collections_SynchronizedMap::Collections_SynchronizedMap(::java::lang::Object* lock, Map* map) 
    : Collections_SynchronizedMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(lock,map);
}

void java::util::Collections_SynchronizedMap::ctor(Map* map)
{
    super::ctor();
    this->map = map;
    this->lock = this;
}

void java::util::Collections_SynchronizedMap::ctor(::java::lang::Object* lock, Map* map)
{
    super::ctor();
    this->lock = lock;
    this->map = map;
}

void java::util::Collections_SynchronizedMap::clear()
{
    {
        synchronized synchronized_0(lock);
        {
            npc(map)->clear();
        }
    }
}

bool java::util::Collections_SynchronizedMap::containsKey(::java::lang::Object* key)
{
    {
        synchronized synchronized_1(lock);
        {
            return npc(map)->containsKey(key);
        }
    }
}

bool java::util::Collections_SynchronizedMap::containsValue(::java::lang::Object* value)
{
    {
        synchronized synchronized_2(lock);
        {
            return npc(map)->containsValue(value);
        }
    }
}

java::util::Set* java::util::Collections_SynchronizedMap::entrySet()
{
    {
        synchronized synchronized_3(lock);
        {
            return new Collections_SynchronizedSet(lock, npc(map)->entrySet());
        }
    }
}

java::lang::Object* java::util::Collections_SynchronizedMap::get(::java::lang::Object* key)
{
    {
        synchronized synchronized_4(lock);
        {
            return java_cast< ::java::lang::Object* >(npc(map)->get(key));
        }
    }
}

bool java::util::Collections_SynchronizedMap::isEmpty()
{
    {
        synchronized synchronized_5(lock);
        {
            return npc(map)->isEmpty();
        }
    }
}

java::util::Set* java::util::Collections_SynchronizedMap::keySet()
{
    {
        synchronized synchronized_6(lock);
        {
            return new Collections_SynchronizedSet(lock, npc(map)->keySet());
        }
    }
}

java::lang::Object* java::util::Collections_SynchronizedMap::put(::java::lang::Object* key, ::java::lang::Object* value)
{
    {
        synchronized synchronized_7(lock);
        {
            return java_cast< ::java::lang::Object* >(npc(map)->put(key, value));
        }
    }
}

void java::util::Collections_SynchronizedMap::putAll(Map* elts)
{
    {
        synchronized synchronized_8(lock);
        {
            npc(map)->putAll(elts);
        }
    }
}

java::lang::Object* java::util::Collections_SynchronizedMap::remove(::java::lang::Object* key)
{
    {
        synchronized synchronized_9(lock);
        {
            return java_cast< ::java::lang::Object* >(npc(map)->remove(key));
        }
    }
}

int32_t java::util::Collections_SynchronizedMap::size()
{
    {
        synchronized synchronized_10(lock);
        {
            return npc(map)->size();
        }
    }
}

java::util::Collection* java::util::Collections_SynchronizedMap::values()
{
    {
        synchronized synchronized_11(lock);
        {
            return new Collections_SynchronizedCollection(lock, npc(map)->values());
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Collections_SynchronizedMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Collections.SynchronizedMap", 37);
    return c;
}

java::lang::Class* java::util::Collections_SynchronizedMap::getClass0()
{
    return class_();
}

