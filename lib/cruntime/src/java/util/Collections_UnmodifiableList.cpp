// Generated from /runtime/java/util/Collections.java
#include <java/util/Collections_UnmodifiableList.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::Collections_UnmodifiableList::Collections_UnmodifiableList(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Collections_UnmodifiableList::Collections_UnmodifiableList(List* l) 
    : Collections_UnmodifiableList(*static_cast< ::default_init_tag* >(0))
{
    ctor(l);
}

void java::util::Collections_UnmodifiableList::ctor(List* l)
{
    super::ctor();
    this->inner = l;
}

java::lang::Object* java::util::Collections_UnmodifiableList::get(int32_t index)
{
    return java_cast< ::java::lang::Object* >(npc(inner)->get(index));
}

java::lang::Object* java::util::Collections_UnmodifiableList::set(int32_t index, ::java::lang::Object* value)
{
    throw new ::java::lang::UnsupportedOperationException(u"not supported"_j);
}

java::lang::Object* java::util::Collections_UnmodifiableList::remove(int32_t index)
{
    throw new ::java::lang::UnsupportedOperationException(u"not supported"_j);
}

bool java::util::Collections_UnmodifiableList::remove(::java::lang::Object* o)
{
    throw new ::java::lang::UnsupportedOperationException(u"not supported"_j);
}

bool java::util::Collections_UnmodifiableList::add(::java::lang::Object* element)
{
    throw new ::java::lang::UnsupportedOperationException(u"not supported"_j);
}

void java::util::Collections_UnmodifiableList::add(int32_t index, ::java::lang::Object* element)
{
    throw new ::java::lang::UnsupportedOperationException(u"not supported"_j);
}

java::util::Iterator* java::util::Collections_UnmodifiableList::iterator()
{
    return npc(inner)->iterator();
}

int32_t java::util::Collections_UnmodifiableList::indexOf(::java::lang::Object* value)
{
    return npc(inner)->indexOf(value);
}

int32_t java::util::Collections_UnmodifiableList::lastIndexOf(::java::lang::Object* value)
{
    return npc(inner)->lastIndexOf(value);
}

bool java::util::Collections_UnmodifiableList::isEmpty()
{
    return npc(inner)->isEmpty();
}

java::util::ListIterator* java::util::Collections_UnmodifiableList::listIterator(int32_t index)
{
    return npc(inner)->listIterator(index);
}

java::util::ListIterator* java::util::Collections_UnmodifiableList::listIterator()
{
    return npc(inner)->listIterator();
}

int32_t java::util::Collections_UnmodifiableList::size()
{
    return npc(inner)->size();
}

bool java::util::Collections_UnmodifiableList::contains(::java::lang::Object* element)
{
    return npc(inner)->contains(element);
}

bool java::util::Collections_UnmodifiableList::addAll(Collection* collection)
{
    throw new ::java::lang::UnsupportedOperationException(u"not supported"_j);
}

java::lang::ObjectArray* java::util::Collections_UnmodifiableList::toArray_()
{
    return npc(inner)->toArray_();
}

/* <S> */java::lang::ObjectArray* java::util::Collections_UnmodifiableList::toArray_(::java::lang::ObjectArray* array)
{
    return java_cast< ::java::lang::ObjectArray* >(npc(inner)->toArray_(array));
}

void java::util::Collections_UnmodifiableList::clear()
{
    throw new ::java::lang::UnsupportedOperationException(u"not supported"_j);
}

bool java::util::Collections_UnmodifiableList::removeAll(Collection* c)
{
    throw new ::java::lang::UnsupportedOperationException(u"not supported"_j);
}

bool java::util::Collections_UnmodifiableList::addAll(int32_t startIndex, Collection* c)
{
    throw new ::java::lang::UnsupportedOperationException(u"not supported"_j);
}

bool java::util::Collections_UnmodifiableList::containsAll(Collection* c)
{
    return npc(inner)->containsAll(c);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Collections_UnmodifiableList::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Collections.UnmodifiableList", 38);
    return c;
}

java::lang::Class* java::util::Collections_UnmodifiableList::getClass0()
{
    return class_();
}

