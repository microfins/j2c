// Generated from /runtime/java/util/AbstractQueue.java
#include <java/util/AbstractQueue.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/NoSuchElementException.hpp>
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

java::util::AbstractQueue::AbstractQueue(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::AbstractQueue::AbstractQueue() 
    : AbstractQueue(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::util::AbstractQueue::ctor()
{
    super::ctor();
}

bool java::util::AbstractQueue::add(::java::lang::Object* element)
{
    if(offer(element)) {
        return true;
    } else {
        throw new ::java::lang::IllegalStateException();
    }
}

bool java::util::AbstractQueue::addAll(Collection* collection)
{
    if(collection == nullptr) {
        throw new ::java::lang::NullPointerException();
    }
    for (auto _i = npc(collection)->iterator(); _i->hasNext(); ) {
        ::java::lang::Object* element = java_cast< ::java::lang::Object* >(_i->next());
        {
            add(element);
        }
    }
    return true;
}

void java::util::AbstractQueue::clear()
{
    while (size() > 0) {
        poll();
    }
}

java::lang::Object* java::util::AbstractQueue::element()
{
    emptyCheck();
    return java_cast< ::java::lang::Object* >(peek());
}

java::lang::Object* java::util::AbstractQueue::remove()
{
    emptyCheck();
    return java_cast< ::java::lang::Object* >(poll());
}

void java::util::AbstractQueue::emptyCheck()
{
    if(size() == 0) {
        throw new NoSuchElementException();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::AbstractQueue::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.AbstractQueue", 23);
    return c;
}

bool java::util::AbstractQueue::contains(::java::lang::Object* element)
{
    return AbstractCollection::contains(element);
}

bool java::util::AbstractQueue::containsAll(Collection* c)
{
    return AbstractCollection::containsAll(c);
}

bool java::util::AbstractQueue::isEmpty()
{
    return AbstractCollection::isEmpty();
}

bool java::util::AbstractQueue::remove(::java::lang::Object* element)
{
    return AbstractCollection::remove(element);
}

bool java::util::AbstractQueue::removeAll(Collection* c)
{
    return AbstractCollection::removeAll(c);
}

java::lang::ObjectArray* java::util::AbstractQueue::toArray_()
{
    return AbstractCollection::toArray_();
}

java::lang::ObjectArray* java::util::AbstractQueue::toArray_(::java::lang::ObjectArray* array)
{
    return java_cast< ::java::lang::ObjectArray* >(AbstractCollection::toArray_(array));
}

java::lang::Class* java::util::AbstractQueue::getClass0()
{
    return class_();
}

