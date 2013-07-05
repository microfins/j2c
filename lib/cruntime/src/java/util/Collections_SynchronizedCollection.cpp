// Generated from /runtime/java/util/Collections.java
#include <java/util/Collections_SynchronizedCollection.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections_SynchronizedIterator.hpp>
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
java::util::Collections_SynchronizedCollection::Collections_SynchronizedCollection(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Collections_SynchronizedCollection::Collections_SynchronizedCollection(::java::lang::Object* lock, Collection* collection) 
    : Collections_SynchronizedCollection(*static_cast< ::default_init_tag* >(0))
{
    ctor(lock,collection);
}

void java::util::Collections_SynchronizedCollection::ctor(::java::lang::Object* lock, Collection* collection)
{
    super::ctor();
    this->lock = lock;
    this->collection = collection;
}

int32_t java::util::Collections_SynchronizedCollection::size()
{
    {
        synchronized synchronized_0(lock);
        {
            return npc(collection)->size();
        }
    }
}

bool java::util::Collections_SynchronizedCollection::isEmpty()
{
    return size() == 0;
}

bool java::util::Collections_SynchronizedCollection::contains(::java::lang::Object* e)
{
    {
        synchronized synchronized_1(lock);
        {
            return npc(collection)->contains(e);
        }
    }
}

bool java::util::Collections_SynchronizedCollection::add(::java::lang::Object* e)
{
    {
        synchronized synchronized_2(lock);
        {
            return npc(collection)->add(e);
        }
    }
}

bool java::util::Collections_SynchronizedCollection::addAll(Collection* collection)
{
    {
        synchronized synchronized_3(lock);
        {
            return npc(java_cast< Collection* >(this->collection))->addAll(collection);
        }
    }
}

bool java::util::Collections_SynchronizedCollection::remove(::java::lang::Object* e)
{
    {
        synchronized synchronized_4(lock);
        {
            return npc(collection)->remove(java_cast< ::java::lang::Object* >(e));
        }
    }
}

java::lang::ObjectArray* java::util::Collections_SynchronizedCollection::toArray_()
{
    return java_cast< ::java::lang::ObjectArray* >(toArray_(static_cast< ::java::lang::ObjectArray* >(new ::java::lang::ObjectArray(size()))));
}

/* <T> */java::lang::ObjectArray* java::util::Collections_SynchronizedCollection::toArray_(::java::lang::ObjectArray* array)
{
    {
        synchronized synchronized_5(lock);
        {
            return java_cast< ::java::lang::ObjectArray* >(npc(collection)->toArray_(array));
        }
    }
}

void java::util::Collections_SynchronizedCollection::clear()
{
    {
        synchronized synchronized_6(lock);
        {
            npc(collection)->clear();
        }
    }
}

java::util::Iterator* java::util::Collections_SynchronizedCollection::iterator()
{
    return new Collections_SynchronizedIterator(lock, npc(collection)->iterator());
}

bool java::util::Collections_SynchronizedCollection::containsAll(Collection* c)
{
    {
        synchronized synchronized_7(lock);
        {
            return npc(collection)->containsAll(c);
        }
    }
}

bool java::util::Collections_SynchronizedCollection::removeAll(Collection* c)
{
    {
        synchronized synchronized_8(lock);
        {
            return npc(collection)->removeAll(c);
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Collections_SynchronizedCollection::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Collections.SynchronizedCollection", 44);
    return c;
}

java::lang::Class* java::util::Collections_SynchronizedCollection::getClass0()
{
    return class_();
}

