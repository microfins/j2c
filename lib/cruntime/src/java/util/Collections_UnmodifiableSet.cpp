// Generated from /runtime/java/util/Collections.java
#include <java/util/Collections_UnmodifiableSet.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/Collection.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::Collections_UnmodifiableSet::Collections_UnmodifiableSet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Collections_UnmodifiableSet::Collections_UnmodifiableSet(Set* inner) 
    : Collections_UnmodifiableSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(inner);
}

void java::util::Collections_UnmodifiableSet::ctor(Set* inner)
{
    super::ctor();
    this->inner = inner;
}

bool java::util::Collections_UnmodifiableSet::add(::java::lang::Object* element)
{
    throw new ::java::lang::UnsupportedOperationException(u"not supported"_j);
}

bool java::util::Collections_UnmodifiableSet::addAll(Collection* collection)
{
    throw new ::java::lang::UnsupportedOperationException(u"not supported"_j);
}

void java::util::Collections_UnmodifiableSet::clear()
{
    throw new ::java::lang::UnsupportedOperationException(u"not supported"_j);
}

bool java::util::Collections_UnmodifiableSet::contains(::java::lang::Object* element)
{
    return npc(inner)->contains(element);
}

bool java::util::Collections_UnmodifiableSet::isEmpty()
{
    return npc(inner)->isEmpty();
}

java::util::Iterator* java::util::Collections_UnmodifiableSet::iterator()
{
    return npc(inner)->iterator();
}

bool java::util::Collections_UnmodifiableSet::remove(::java::lang::Object* element)
{
    throw new ::java::lang::UnsupportedOperationException(u"not supported"_j);
}

int32_t java::util::Collections_UnmodifiableSet::size()
{
    return npc(inner)->size();
}

java::lang::ObjectArray* java::util::Collections_UnmodifiableSet::toArray_()
{
    return java_cast< ::java::lang::ObjectArray* >(toArray_(static_cast< ::java::lang::ObjectArray* >(new ::java::lang::ObjectArray(size()))));
}

/* <S> */java::lang::ObjectArray* java::util::Collections_UnmodifiableSet::toArray_(::java::lang::ObjectArray* array)
{
    return java_cast< ::java::lang::ObjectArray* >(npc(inner)->toArray_(array));
}

bool java::util::Collections_UnmodifiableSet::containsAll(Collection* c)
{
    return npc(inner)->containsAll(c);
}

bool java::util::Collections_UnmodifiableSet::removeAll(Collection* c)
{
    throw new ::java::lang::UnsupportedOperationException(u"not supported"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Collections_UnmodifiableSet::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Collections.UnmodifiableSet", 37);
    return c;
}

java::lang::Class* java::util::Collections_UnmodifiableSet::getClass0()
{
    return class_();
}

