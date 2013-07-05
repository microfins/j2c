// Generated from /runtime/java/util/HashMap.java
#include <java/util/HashMap_EntrySet.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap_Cell.hpp>
#include <java/util/HashMap_MyIterator.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map_Entry.hpp>
#include <ObjectArray.hpp>

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

java::util::HashMap_EntrySet::HashMap_EntrySet(HashMap *HashMap_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , HashMap_this(HashMap_this)
{
    clinit();
}

java::util::HashMap_EntrySet::HashMap_EntrySet(HashMap *HashMap_this)
    : HashMap_EntrySet(HashMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t java::util::HashMap_EntrySet::size()
{
    return HashMap_this->size();
}

bool java::util::HashMap_EntrySet::isEmpty()
{
    return HashMap_this->isEmpty();
}

bool java::util::HashMap_EntrySet::contains(::java::lang::Object* o)
{
    return (dynamic_cast< Map_Entry* >(o) != nullptr) && HashMap_this->containsKey(static_cast< ::java::lang::Object* >(java_cast< ::java::lang::Object* >(npc((java_cast< Map_Entry* >(o)))->getKey())));
}

bool java::util::HashMap_EntrySet::add(Map_Entry* e)
{
    return HashMap_this->putCell(java_cast< ::java::lang::Object* >(npc(e)->getKey()), java_cast< ::java::lang::Object* >(npc(e)->getValue())) != nullptr;
}

bool java::util::HashMap_EntrySet::add(::java::lang::Object* element)
{ 
    return add(dynamic_cast< Map_Entry* >(element));
}

bool java::util::HashMap_EntrySet::remove(::java::lang::Object* o)
{
    return (dynamic_cast< Map_Entry* >(o) != nullptr) && remove(static_cast< ::java::lang::Object* >(java_cast< Map_Entry* >(o)));
}

bool java::util::HashMap_EntrySet::remove(Map_Entry* e)
{
    return HashMap_this->removeCell(java_cast< ::java::lang::Object* >(npc(e)->getKey())) != nullptr;
}

java::lang::ObjectArray* java::util::HashMap_EntrySet::toArray_()
{
    return java_cast< ::java::lang::ObjectArray* >(toArray_(static_cast< ::java::lang::ObjectArray* >(new ::java::lang::ObjectArray(size()))));
}

/* <T> */java::lang::ObjectArray* java::util::HashMap_EntrySet::toArray_(::java::lang::ObjectArray* array)
{
    return java_cast< ::java::lang::ObjectArray* >(Collections::toArray_(this, array));
}

void java::util::HashMap_EntrySet::clear()
{
    HashMap_this->clear();
}

java::util::Iterator* java::util::HashMap_EntrySet::iterator()
{
    return new HashMap_MyIterator(HashMap_this);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::HashMap_EntrySet::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.HashMap.EntrySet", 26);
    return c;
}

java::lang::Class* java::util::HashMap_EntrySet::getClass0()
{
    return class_();
}

