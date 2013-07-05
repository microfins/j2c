// Generated from /runtime/java/util/Collections.java
#include <java/util/Collections_SynchronizedIterator.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>

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
java::util::Collections_SynchronizedIterator::Collections_SynchronizedIterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Collections_SynchronizedIterator::Collections_SynchronizedIterator(::java::lang::Object* lock, Iterator* it) 
    : Collections_SynchronizedIterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(lock,it);
}

void java::util::Collections_SynchronizedIterator::ctor(::java::lang::Object* lock, Iterator* it)
{
    super::ctor();
    this->lock = lock;
    this->it = it;
}

java::lang::Object* java::util::Collections_SynchronizedIterator::next()
{
    {
        synchronized synchronized_0(lock);
        {
            return java_cast< ::java::lang::Object* >(npc(it)->next());
        }
    }
}

bool java::util::Collections_SynchronizedIterator::hasNext()
{
    {
        synchronized synchronized_1(lock);
        {
            return npc(it)->hasNext();
        }
    }
}

void java::util::Collections_SynchronizedIterator::remove()
{
    {
        synchronized synchronized_2(lock);
        {
            npc(it)->remove();
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Collections_SynchronizedIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Collections.SynchronizedIterator", 42);
    return c;
}

java::lang::Class* java::util::Collections_SynchronizedIterator::getClass0()
{
    return class_();
}

