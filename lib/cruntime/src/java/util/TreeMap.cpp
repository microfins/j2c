// Generated from /runtime/java/util/TreeMap.java
#include <java/util/TreeMap.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <java/util/TreeMap_TreeMap_1.hpp>
#include <java/util/TreeMap_TreeMap_2.hpp>
#include <java/util/TreeMap_KeySet.hpp>
#include <java/util/TreeMap_MyEntry.hpp>
#include <java/util/TreeMap_Values.hpp>
#include <java/util/TreeSet.hpp>

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

java::util::TreeMap::TreeMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::TreeMap::TreeMap(Comparator* comparator) 
    : TreeMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(comparator);
}

java::util::TreeMap::TreeMap() 
    : TreeMap(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::util::TreeMap::ctor(Comparator* comparator)
{
    super::ctor();
    set = new TreeSet(static_cast< Comparator* >(new TreeMap_TreeMap_1(this, comparator)));
}

void java::util::TreeMap::ctor()
{
    ctor(new TreeMap_TreeMap_2(this));
}

java::lang::String* java::util::TreeMap::toString()
{
    return Collections::toString(static_cast< Map* >(this));
}

java::lang::Object* java::util::TreeMap::get(::java::lang::Object* key)
{
    auto e = java_cast< TreeMap_MyEntry* >(npc(set)->find(new TreeMap_MyEntry(key, nullptr)));
    return e == nullptr ? static_cast< ::java::lang::Object* >(nullptr) : java_cast< ::java::lang::Object* >(npc(e)->value);
}

java::lang::Object* java::util::TreeMap::put(::java::lang::Object* key, ::java::lang::Object* value)
{
    auto e = java_cast< TreeMap_MyEntry* >(npc(set)->addAndReplace(new TreeMap_MyEntry(key, value)));
    return e == nullptr ? static_cast< ::java::lang::Object* >(nullptr) : java_cast< ::java::lang::Object* >(npc(e)->value);
}

void java::util::TreeMap::putAll(Map* elts)
{
    for (auto _i = npc(npc(elts)->entrySet())->iterator(); _i->hasNext(); ) {
        Map_Entry* entry = java_cast< Map_Entry* >(_i->next());
        {
            put(static_cast< ::java::lang::Object* >(java_cast< ::java::lang::Object* >(npc(entry)->getKey())), static_cast< ::java::lang::Object* >(java_cast< ::java::lang::Object* >(npc(entry)->getValue())));
        }
    }
}

java::lang::Object* java::util::TreeMap::remove(::java::lang::Object* key)
{
    auto e = java_cast< TreeMap_MyEntry* >(npc(set)->removeAndReturn(new TreeMap_MyEntry(key, nullptr)));
    return e == nullptr ? static_cast< ::java::lang::Object* >(nullptr) : java_cast< ::java::lang::Object* >(npc(e)->value);
}

void java::util::TreeMap::clear()
{
    npc(set)->clear();
}

int32_t java::util::TreeMap::size()
{
    return npc(set)->size();
}

bool java::util::TreeMap::isEmpty()
{
    return size() == 0;
}

bool java::util::TreeMap::containsKey(::java::lang::Object* key)
{
    return npc(set)->contains(static_cast< ::java::lang::Object* >(new TreeMap_MyEntry(key, nullptr)));
}

bool java::util::TreeMap::equal(::java::lang::Object* a, ::java::lang::Object* b)
{
    return a == nullptr ? b == nullptr : npc(a)->equals(b);
}

bool java::util::TreeMap::containsValue(::java::lang::Object* value)
{
    for (auto _i = npc(values())->iterator(); _i->hasNext(); ) {
        ::java::lang::Object* v = java_cast< ::java::lang::Object* >(_i->next());
        {
            if(equal(v, value)) {
                return true;
            }
        }
    }
    return false;
}

java::util::Set* java::util::TreeMap::entrySet()
{
    return java_cast< Set* >(java_cast< Set* >(set));
}

java::util::Set* java::util::TreeMap::keySet()
{
    return new TreeMap_KeySet(this);
}

java::util::Collection* java::util::TreeMap::values()
{
    return new TreeMap_Values(this);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeMap", 17);
    return c;
}

java::lang::Class* java::util::TreeMap::getClass0()
{
    return class_();
}

