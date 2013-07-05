// Generated from /runtime/java/util/Collections.java
#include <java/util/Collections_UnmodifiableMap.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
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

java::util::Collections_UnmodifiableMap::Collections_UnmodifiableMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Collections_UnmodifiableMap::Collections_UnmodifiableMap(Map* m) 
    : Collections_UnmodifiableMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(m);
}

void java::util::Collections_UnmodifiableMap::ctor(Map* m)
{
    super::ctor();
    this->inner = m;
}

void java::util::Collections_UnmodifiableMap::clear()
{
    throw new ::java::lang::UnsupportedOperationException(u"not supported"_j);
}

bool java::util::Collections_UnmodifiableMap::containsKey(::java::lang::Object* key)
{
    return npc(inner)->containsKey(key);
}

bool java::util::Collections_UnmodifiableMap::containsValue(::java::lang::Object* value)
{
    return npc(inner)->containsValue(value);
}

java::util::Set* java::util::Collections_UnmodifiableMap::entrySet()
{
    return Collections::unmodifiableSet(npc(inner)->entrySet());
}

java::lang::Object* java::util::Collections_UnmodifiableMap::get(::java::lang::Object* key)
{
    return java_cast< ::java::lang::Object* >(npc(inner)->get(key));
}

bool java::util::Collections_UnmodifiableMap::isEmpty()
{
    return npc(inner)->isEmpty();
}

java::util::Set* java::util::Collections_UnmodifiableMap::keySet()
{
    return Collections::unmodifiableSet(npc(inner)->keySet());
}

java::lang::Object* java::util::Collections_UnmodifiableMap::put(::java::lang::Object* key, ::java::lang::Object* value)
{
    throw new ::java::lang::UnsupportedOperationException(u"not supported"_j);
}

void java::util::Collections_UnmodifiableMap::putAll(Map* t)
{
    throw new ::java::lang::UnsupportedOperationException(u"not supported"_j);
}

java::lang::Object* java::util::Collections_UnmodifiableMap::remove(::java::lang::Object* key)
{
    throw new ::java::lang::UnsupportedOperationException(u"not supported"_j);
}

int32_t java::util::Collections_UnmodifiableMap::size()
{
    return npc(inner)->size();
}

java::util::Collection* java::util::Collections_UnmodifiableMap::values()
{
    return Collections::unmodifiableSet(java_cast< Set* >(npc(inner)->values()));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Collections_UnmodifiableMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Collections.UnmodifiableMap", 37);
    return c;
}

java::lang::Class* java::util::Collections_UnmodifiableMap::getClass0()
{
    return class_();
}

