// Generated from /runtime/java/util/TreeMap.java
#include <java/util/TreeMap_Values.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections_ValueIterator.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Iterator.hpp>
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

java::util::TreeMap_Values::TreeMap_Values(TreeMap *TreeMap_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , TreeMap_this(TreeMap_this)
{
    clinit();
}

java::util::TreeMap_Values::TreeMap_Values(TreeMap *TreeMap_this)
    : TreeMap_Values(TreeMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t java::util::TreeMap_Values::size()
{
    return TreeMap_this->size();
}

bool java::util::TreeMap_Values::isEmpty()
{
    return TreeMap_this->isEmpty();
}

bool java::util::TreeMap_Values::contains(::java::lang::Object* value)
{
    return TreeMap_this->containsValue(value);
}

bool java::util::TreeMap_Values::containsAll(Collection* c)
{
    if(c == nullptr) {
        throw new ::java::lang::NullPointerException(u"collection is null"_j);
    }
    auto it = npc(c)->iterator();
    while (npc(it)->hasNext()) {
        if(!contains(static_cast< ::java::lang::Object* >(java_cast< ::java::lang::Object* >(npc(it)->next())))) {
            return false;
        }
    }
    return true;
}

bool java::util::TreeMap_Values::add(::java::lang::Object* value)
{
    throw new ::java::lang::UnsupportedOperationException();
}

bool java::util::TreeMap_Values::addAll(Collection* collection)
{
    throw new ::java::lang::UnsupportedOperationException();
}

bool java::util::TreeMap_Values::remove(::java::lang::Object* value)
{
    throw new ::java::lang::UnsupportedOperationException();
}

bool java::util::TreeMap_Values::removeAll(Collection* c)
{
    throw new ::java::lang::UnsupportedOperationException();
}

java::lang::ObjectArray* java::util::TreeMap_Values::toArray_()
{
    return java_cast< ::java::lang::ObjectArray* >(toArray_(static_cast< ::java::lang::ObjectArray* >(new ::java::lang::ObjectArray(size()))));
}

/* <T> */java::lang::ObjectArray* java::util::TreeMap_Values::toArray_(::java::lang::ObjectArray* array)
{
    return java_cast< ::java::lang::ObjectArray* >(Collections::toArray_(this, array));
}

void java::util::TreeMap_Values::clear()
{
    TreeMap_this->clear();
}

java::util::Iterator* java::util::TreeMap_Values::iterator()
{
    return new Collections_ValueIterator(npc(TreeMap_this->set)->iterator());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeMap_Values::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeMap.Values", 24);
    return c;
}

java::lang::Class* java::util::TreeMap_Values::getClass0()
{
    return class_();
}

