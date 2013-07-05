// Generated from /runtime/java/util/Collections.java
#include <java/util/Collections_SynchronizedSet.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Set.hpp>
#include <ObjectArray.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

java::util::Collections_SynchronizedSet::Collections_SynchronizedSet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Collections_SynchronizedSet::Collections_SynchronizedSet(::java::lang::Object* lock, Set* set) 
    : Collections_SynchronizedSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(lock,set);
}

void java::util::Collections_SynchronizedSet::ctor(::java::lang::Object* lock, Set* set)
{
    super::ctor(lock, set);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Collections_SynchronizedSet::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Collections.SynchronizedSet", 37);
    return c;
}

java::util::Iterator* java::util::Collections_SynchronizedSet::iterator()
{
    return java_cast< Iterator* >(Collections_SynchronizedCollection::iterator());
}

bool java::util::Collections_SynchronizedSet::add(::java::lang::Object* element)
{
    return Collections_SynchronizedCollection::add(element);
}

bool java::util::Collections_SynchronizedSet::addAll(Collection* collection)
{
    return Collections_SynchronizedCollection::addAll(collection);
}

void java::util::Collections_SynchronizedSet::clear()
{
    Collections_SynchronizedCollection::clear();
}

bool java::util::Collections_SynchronizedSet::contains(::java::lang::Object* element)
{
    return Collections_SynchronizedCollection::contains(element);
}

bool java::util::Collections_SynchronizedSet::containsAll(Collection* c)
{
    return Collections_SynchronizedCollection::containsAll(c);
}

bool java::util::Collections_SynchronizedSet::isEmpty()
{
    return Collections_SynchronizedCollection::isEmpty();
}

bool java::util::Collections_SynchronizedSet::remove(::java::lang::Object* element)
{
    return Collections_SynchronizedCollection::remove(element);
}

bool java::util::Collections_SynchronizedSet::removeAll(Collection* c)
{
    return Collections_SynchronizedCollection::removeAll(c);
}

int32_t java::util::Collections_SynchronizedSet::size()
{
    return Collections_SynchronizedCollection::size();
}

java::lang::ObjectArray* java::util::Collections_SynchronizedSet::toArray_()
{
    return Collections_SynchronizedCollection::toArray_();
}

java::lang::ObjectArray* java::util::Collections_SynchronizedSet::toArray_(::java::lang::ObjectArray* array)
{
    return java_cast< ::java::lang::ObjectArray* >(Collections_SynchronizedCollection::toArray_(array));
}

java::lang::Class* java::util::Collections_SynchronizedSet::getClass0()
{
    return class_();
}

