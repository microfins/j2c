// Generated from /runtime/java/util/Vector.java
#include <java/util/Vector.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections_ArrayListIterator.hpp>
#include <java/util/Collections_IteratorEnumeration.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::Vector::Vector(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Vector::Vector(int32_t capacity) 
    : Vector(*static_cast< ::default_init_tag* >(0))
{
    ctor(capacity);
}

java::util::Vector::Vector() 
    : Vector(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::Vector::Vector(Collection* source) 
    : Vector(*static_cast< ::default_init_tag* >(0))
{
    ctor(source);
}

void java::util::Vector::ctor(int32_t capacity)
{
    super::ctor();
    list = new ArrayList(capacity);
}

void java::util::Vector::ctor()
{
    ctor(int32_t(0));
}

void java::util::Vector::ctor(Collection* source)
{
    super::ctor();
    list = new ArrayList(static_cast< Collection* >(source));
}

int32_t java::util::Vector::size()
{
    return npc(list)->size();
}

bool java::util::Vector::contains(::java::lang::Object* element)
{
    return npc(list)->contains(element);
}

void java::util::Vector::add(int32_t index, ::java::lang::Object* element)
{
    npc(list)->add(index, static_cast< ::java::lang::Object* >(element));
}

void java::util::Vector::insertElementAt(::java::lang::Object* element, int32_t index)
{
    add(index, element);
}

bool java::util::Vector::add(::java::lang::Object* element)
{
    return npc(list)->add(static_cast< ::java::lang::Object* >(element));
}

bool java::util::Vector::addAll(Collection* collection)
{
    return npc(list)->addAll(static_cast< Collection* >(collection));
}

void java::util::Vector::addElement(::java::lang::Object* element)
{
    add(element);
}

java::lang::Object* java::util::Vector::get(int32_t index)
{
    return java_cast< ::java::lang::Object* >(npc(list)->get(index));
}

java::lang::Object* java::util::Vector::set(int32_t index, ::java::lang::Object* value)
{
    return java_cast< ::java::lang::Object* >(npc(list)->set(index, static_cast< ::java::lang::Object* >(value)));
}

void java::util::Vector::setElementAt(::java::lang::Object* value, int32_t index)
{
    set(index, value);
}

java::lang::Object* java::util::Vector::elementAt(int32_t index)
{
    return java_cast< ::java::lang::Object* >(get(index));
}

java::lang::Object* java::util::Vector::remove(int32_t index)
{
    return java_cast< ::java::lang::Object* >(npc(list)->remove(index));
}

bool java::util::Vector::isEmpty()
{
    return npc(list)->isEmpty();
}

void java::util::Vector::removeElementAt(int32_t index)
{
    remove(index);
}

void java::util::Vector::removeAllElements()
{
    npc(list)->clear();
}

bool java::util::Vector::remove(::java::lang::Object* element)
{
    return npc(list)->remove(element);
}

bool java::util::Vector::removeElement(::java::lang::Object* element)
{
    return remove(static_cast< ::java::lang::Object* >(element));
}

void java::util::Vector::clear()
{
    npc(list)->clear();
}

int32_t java::util::Vector::indexOf(::java::lang::Object* element)
{
    return npc(list)->indexOf(element);
}

int32_t java::util::Vector::lastIndexOf(::java::lang::Object* element)
{
    return npc(list)->lastIndexOf(element);
}

void java::util::Vector::copyInto(::java::lang::ObjectArray* array)
{
    for (auto i = int32_t(0); i < size(); ++i) {
        array->set(i, java_cast< ::java::lang::Object* >(npc(list)->get(i)));
    }
}

java::util::Iterator* java::util::Vector::iterator()
{
    return listIterator();
}

java::util::ListIterator* java::util::Vector::listIterator(int32_t index)
{
    return new Collections_ArrayListIterator(this, index);
}

java::util::ListIterator* java::util::Vector::listIterator()
{
    return listIterator(int32_t(0));
}

java::util::Enumeration* java::util::Vector::elements()
{
    return new Collections_IteratorEnumeration(iterator());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Vector::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Vector", 16);
    return c;
}

bool java::util::Vector::addAll(int32_t startIndex, Collection* c)
{
    return super::addAll(startIndex, c);
}

java::lang::Class* java::util::Vector::getClass0()
{
    return class_();
}

