// Generated from /runtime/java/util/LinkedList.java
#include <java/util/LinkedList_MyIterator.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/LinkedList_Cell.hpp>
#include <java/util/LinkedList.hpp>
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

java::util::LinkedList_MyIterator::LinkedList_MyIterator(LinkedList *LinkedList_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , LinkedList_this(LinkedList_this)
{
    clinit();
}

java::util::LinkedList_MyIterator::LinkedList_MyIterator(LinkedList *LinkedList_this)
    : LinkedList_MyIterator(LinkedList_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::Object* java::util::LinkedList_MyIterator::previous()
{
    if(hasPrevious()) {
        auto v = java_cast< ::java::lang::Object* >(npc(current)->value);
        toRemove = current;
        current = npc(current)->prev;
        return v;
    } else {
        throw new NoSuchElementException();
    }
}

java::lang::Object* java::util::LinkedList_MyIterator::next()
{
    if(hasNext()) {
        if(current == nullptr) {
            current = LinkedList_this->front;
        } else {
            current = npc(current)->next;
        }
        toRemove = current;
        return java_cast< ::java::lang::Object* >(npc(current)->value);
    } else {
        throw new NoSuchElementException();
    }
}

bool java::util::LinkedList_MyIterator::hasNext()
{
    if(current == nullptr) {
        return LinkedList_this->front != nullptr;
    } else {
        return npc(current)->next != nullptr;
    }
}

bool java::util::LinkedList_MyIterator::hasPrevious()
{
    return current != nullptr;
}

void java::util::LinkedList_MyIterator::remove()
{
    if(toRemove != nullptr) {
        current = npc(toRemove)->prev;
        LinkedList_this->remove(toRemove);
        toRemove = nullptr;
    } else {
        throw new ::java::lang::IllegalStateException();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::LinkedList_MyIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.LinkedList.MyIterator", 31);
    return c;
}

java::lang::Class* java::util::LinkedList_MyIterator::getClass0()
{
    return class_();
}

