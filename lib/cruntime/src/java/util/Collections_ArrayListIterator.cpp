// Generated from /runtime/java/util/Collections.java
#include <java/util/Collections_ArrayListIterator.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/List.hpp>
#include <java/util/NoSuchElementException.hpp>

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

java::util::Collections_ArrayListIterator::Collections_ArrayListIterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Collections_ArrayListIterator::Collections_ArrayListIterator(List* list) 
    : Collections_ArrayListIterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(list);
}

java::util::Collections_ArrayListIterator::Collections_ArrayListIterator(List* list, int32_t index) 
    : Collections_ArrayListIterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(list,index);
}

void java::util::Collections_ArrayListIterator::init()
{
    toRemove = -int32_t(1);
}

void java::util::Collections_ArrayListIterator::ctor(List* list)
{
    ctor(list, int32_t(0));
}

void java::util::Collections_ArrayListIterator::ctor(List* list, int32_t index)
{
    super::ctor();
    init();
    this->list = list;
    this->index = index - int32_t(1);
}

bool java::util::Collections_ArrayListIterator::hasPrevious()
{
    return index >= 0;
}

java::lang::Object* java::util::Collections_ArrayListIterator::previous()
{
    if(hasPrevious()) {
        toRemove = index;
        return java_cast< ::java::lang::Object* >(npc(list)->get(index--));
    } else {
        throw new NoSuchElementException();
    }
}

java::lang::Object* java::util::Collections_ArrayListIterator::next()
{
    if(hasNext()) {
        toRemove = ++index;
        return java_cast< ::java::lang::Object* >(npc(list)->get(index));
    } else {
        throw new NoSuchElementException();
    }
}

bool java::util::Collections_ArrayListIterator::hasNext()
{
    return index + int32_t(1) < npc(list)->size();
}

void java::util::Collections_ArrayListIterator::remove()
{
    if(toRemove != -int32_t(1)) {
        npc(list)->remove(toRemove);
        index = toRemove - int32_t(1);
        toRemove = -int32_t(1);
    } else {
        throw new ::java::lang::IllegalStateException();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Collections_ArrayListIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Collections.ArrayListIterator", 39);
    return c;
}

java::lang::Class* java::util::Collections_ArrayListIterator::getClass0()
{
    return class_();
}

