// Generated from /runtime/java/util/HashMap.java
#include <java/util/HashMap_Values.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections_ValueIterator.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap_MyIterator.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
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

java::util::HashMap_Values::HashMap_Values(HashMap *HashMap_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , HashMap_this(HashMap_this)
{
    clinit();
}

java::util::HashMap_Values::HashMap_Values(HashMap *HashMap_this)
    : HashMap_Values(HashMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t java::util::HashMap_Values::size()
{
    return HashMap_this->size();
}

bool java::util::HashMap_Values::isEmpty()
{
    return HashMap_this->isEmpty();
}

bool java::util::HashMap_Values::contains(::java::lang::Object* value)
{
    return HashMap_this->containsValue(value);
}

bool java::util::HashMap_Values::containsAll(Collection* c)
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

bool java::util::HashMap_Values::add(::java::lang::Object* value)
{
    throw new ::java::lang::UnsupportedOperationException();
}

bool java::util::HashMap_Values::addAll(Collection* collection)
{
    throw new ::java::lang::UnsupportedOperationException();
}

bool java::util::HashMap_Values::remove(::java::lang::Object* value)
{
    throw new ::java::lang::UnsupportedOperationException();
}

bool java::util::HashMap_Values::removeAll(Collection* c)
{
    throw new ::java::lang::UnsupportedOperationException();
}

java::lang::ObjectArray* java::util::HashMap_Values::toArray_()
{
    return java_cast< ::java::lang::ObjectArray* >(toArray_(static_cast< ::java::lang::ObjectArray* >(new ::java::lang::ObjectArray(size()))));
}

/* <T> */java::lang::ObjectArray* java::util::HashMap_Values::toArray_(::java::lang::ObjectArray* array)
{
    return java_cast< ::java::lang::ObjectArray* >(Collections::toArray_(this, array));
}

void java::util::HashMap_Values::clear()
{
    HashMap_this->clear();
}

java::util::Iterator* java::util::HashMap_Values::iterator()
{
    return new Collections_ValueIterator(new HashMap_MyIterator(HashMap_this));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::HashMap_Values::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.HashMap.Values", 24);
    return c;
}

java::lang::Class* java::util::HashMap_Values::getClass0()
{
    return class_();
}

