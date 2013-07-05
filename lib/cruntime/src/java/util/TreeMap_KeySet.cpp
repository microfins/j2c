// Generated from /runtime/java/util/TreeMap.java
#include <java/util/TreeMap_KeySet.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections_KeyIterator.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/TreeMap_MyEntry.hpp>
#include <java/util/TreeMap.hpp>
#include <java/util/TreeSet.hpp>
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

java::util::TreeMap_KeySet::TreeMap_KeySet(TreeMap *TreeMap_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , TreeMap_this(TreeMap_this)
{
    clinit();
}

java::util::TreeMap_KeySet::TreeMap_KeySet(TreeMap *TreeMap_this)
    : TreeMap_KeySet(TreeMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t java::util::TreeMap_KeySet::size()
{
    return TreeMap_this->size();
}

bool java::util::TreeMap_KeySet::isEmpty()
{
    return TreeMap_this->isEmpty();
}

bool java::util::TreeMap_KeySet::contains(::java::lang::Object* key)
{
    return TreeMap_this->containsKey(key);
}

bool java::util::TreeMap_KeySet::add(::java::lang::Object* key)
{
    return java_cast< TreeMap_MyEntry* >(npc(TreeMap_this->set)->addAndReplace(new TreeMap_MyEntry(key, nullptr))) != nullptr;
}

bool java::util::TreeMap_KeySet::addAll(Collection* collection)
{
    auto change = false;
    for (auto _i = npc(collection)->iterator(); _i->hasNext(); ) {
        ::java::lang::Object* k = java_cast< ::java::lang::Object* >(_i->next());
        
                        if(add(k))
                change = true;


    }
    return change;
}

bool java::util::TreeMap_KeySet::remove(::java::lang::Object* key)
{
    return java_cast< TreeMap_MyEntry* >(npc(TreeMap_this->set)->removeAndReturn(new TreeMap_MyEntry(key, nullptr))) != nullptr;
}

java::lang::ObjectArray* java::util::TreeMap_KeySet::toArray_()
{
    return java_cast< ::java::lang::ObjectArray* >(toArray_(static_cast< ::java::lang::ObjectArray* >(new ::java::lang::ObjectArray(size()))));
}

/* <T> */java::lang::ObjectArray* java::util::TreeMap_KeySet::toArray_(::java::lang::ObjectArray* array)
{
    return java_cast< ::java::lang::ObjectArray* >(Collections::toArray_(this, array));
}

void java::util::TreeMap_KeySet::clear()
{
    TreeMap_this->clear();
}

java::util::Iterator* java::util::TreeMap_KeySet::iterator()
{
    return new Collections_KeyIterator(npc(TreeMap_this->set)->iterator());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeMap_KeySet::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeMap.KeySet", 24);
    return c;
}

java::lang::Class* java::util::TreeMap_KeySet::getClass0()
{
    return class_();
}

