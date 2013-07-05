// Generated from /runtime/java/util/AbstractSequentialList.java
#include <java/util/AbstractSequentialList.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/ListIterator.hpp>
#include <ObjectArray.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

java::util::AbstractSequentialList::AbstractSequentialList(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::AbstractSequentialList::AbstractSequentialList()
    : AbstractSequentialList(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::AbstractSequentialList::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.AbstractSequentialList", 32);
    return c;
}

java::util::Iterator* java::util::AbstractSequentialList::iterator()
{
    return java_cast< Iterator* >(AbstractList::iterator());
}

bool java::util::AbstractSequentialList::addAll(Collection* collection)
{
    return AbstractList::addAll(collection);
}

void java::util::AbstractSequentialList::clear()
{
    AbstractCollection::clear();
}

bool java::util::AbstractSequentialList::contains(::java::lang::Object* element)
{
    return AbstractCollection::contains(element);
}

bool java::util::AbstractSequentialList::containsAll(Collection* c)
{
    return AbstractCollection::containsAll(c);
}

bool java::util::AbstractSequentialList::remove(::java::lang::Object* element)
{
    return AbstractCollection::remove(element);
}

bool java::util::AbstractSequentialList::removeAll(Collection* c)
{
    return AbstractCollection::removeAll(c);
}

java::lang::ObjectArray* java::util::AbstractSequentialList::toArray_()
{
    return AbstractCollection::toArray_();
}

java::lang::ObjectArray* java::util::AbstractSequentialList::toArray_(::java::lang::ObjectArray* array)
{
    return java_cast< ::java::lang::ObjectArray* >(AbstractCollection::toArray_(array));
}

bool java::util::AbstractSequentialList::add(::java::lang::Object* element)
{
    return AbstractList::add(element);
}

bool java::util::AbstractSequentialList::addAll(int32_t startIndex, Collection* c)
{
    return AbstractList::addAll(startIndex, c);
}

int32_t java::util::AbstractSequentialList::indexOf(::java::lang::Object* value)
{
    return AbstractList::indexOf(value);
}

bool java::util::AbstractSequentialList::isEmpty()
{
    return AbstractCollection::isEmpty();
}

java::util::ListIterator* java::util::AbstractSequentialList::listIterator()
{
    return java_cast< ListIterator* >(AbstractList::listIterator());
}

java::lang::Class* java::util::AbstractSequentialList::getClass0()
{
    return class_();
}

