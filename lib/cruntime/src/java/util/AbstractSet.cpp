// Generated from /runtime/java/util/AbstractSet.java
#include <java/util/AbstractSet.hpp>

#include <java/lang/ClassCastException.hpp>
#include <ObjectArray.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

java::util::AbstractSet::AbstractSet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::AbstractSet::AbstractSet()
    : AbstractSet(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::AbstractSet::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.AbstractSet", 21);
    return c;
}

bool java::util::AbstractSet::add(::java::lang::Object* element)
{
    return AbstractCollection::add(element);
}

bool java::util::AbstractSet::addAll(Collection* collection)
{
    return AbstractCollection::addAll(collection);
}

void java::util::AbstractSet::clear()
{
    AbstractCollection::clear();
}

bool java::util::AbstractSet::contains(::java::lang::Object* element)
{
    return AbstractCollection::contains(element);
}

bool java::util::AbstractSet::containsAll(Collection* c)
{
    return AbstractCollection::containsAll(c);
}

bool java::util::AbstractSet::isEmpty()
{
    return AbstractCollection::isEmpty();
}

bool java::util::AbstractSet::remove(::java::lang::Object* element)
{
    return AbstractCollection::remove(element);
}

bool java::util::AbstractSet::removeAll(Collection* c)
{
    return AbstractCollection::removeAll(c);
}

java::lang::ObjectArray* java::util::AbstractSet::toArray_()
{
    return AbstractCollection::toArray_();
}

java::lang::ObjectArray* java::util::AbstractSet::toArray_(::java::lang::ObjectArray* array)
{
    return java_cast< ::java::lang::ObjectArray* >(AbstractCollection::toArray_(array));
}

java::lang::Class* java::util::AbstractSet::getClass0()
{
    return class_();
}

