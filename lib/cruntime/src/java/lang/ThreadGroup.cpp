// Generated from /runtime/java/lang/ThreadGroup.java
#include <java/lang/ThreadGroup.hpp>

#include <avian/Cell.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Thread_UncaughtExceptionHandler.hpp>
#include <java/lang/Thread.hpp>
#include <java/lang/ThreadDeath.hpp>
#include <java/lang/Throwable.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Runnable, ObjectArray > RunnableArray;
typedef ::SubArray< ::java::lang::Thread_UncaughtExceptionHandler, ObjectArray > Thread_UncaughtExceptionHandlerArray;
typedef ::SubArray< ::java::lang::Thread, ObjectArray, RunnableArray > ThreadArray;
typedef ::SubArray< ::java::lang::ThreadGroup, ObjectArray, Thread_UncaughtExceptionHandlerArray > ThreadGroupArray;
    } // lang
} // java

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
java::lang::ThreadGroup::ThreadGroup(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ThreadGroup::ThreadGroup(ThreadGroup* parent, String* name) 
    : ThreadGroup(*static_cast< ::default_init_tag* >(0))
{
    ctor(parent,name);
}

java::lang::ThreadGroup::ThreadGroup(String* name) 
    : ThreadGroup(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

void java::lang::ThreadGroup::ctor(ThreadGroup* parent, String* name)
{
    super::ctor();
    this->parent = parent;
    this->name = name;
    {
        synchronized synchronized_0(parent);
        {
            npc(parent)->subgroups = new ::avian::Cell(this, subgroups);
        }
    }
}

void java::lang::ThreadGroup::ctor(String* name)
{
    ctor(npc(Thread::currentThread())->getThreadGroup(), name);
}

void java::lang::ThreadGroup::uncaughtException(Thread* t, Throwable* e)
{
    if(parent != nullptr) {
        npc(parent)->uncaughtException(t, e);
    } else {
        auto deh = Thread::getDefaultUncaughtExceptionHandler();
        if(deh != nullptr) {
            npc(deh)->uncaughtException(t, e);
        } else if(!(dynamic_cast< ThreadDeath* >(e) != nullptr)) {
            npc(e)->printStackTrace();
        }
    }
}

java::lang::ThreadGroup* java::lang::ThreadGroup::getParent()
{
    return parent;
}

java::lang::String* java::lang::ThreadGroup::getName()
{
    return name;
}

int32_t java::lang::ThreadGroup::activeCount()
{
    auto allCount = Thread::activeCount();
    auto all = new ThreadArray(allCount);
    allCount = Thread::enumerate(all);
    auto count = int32_t(0);
    for (auto i = int32_t(0); i < allCount; ++i) {
        if(parentOf(npc((*all)[i])->getThreadGroup())) {
            ++count;
        }
    }
    return count;
}

int32_t java::lang::ThreadGroup::enumerate(ThreadArray* threads)
{
    return enumerate(threads, true);
}

int32_t java::lang::ThreadGroup::enumerate(ThreadArray* threads, bool recurse)
{
    auto allCount = Thread::activeCount();
    auto all = new ThreadArray(allCount);
    allCount = Thread::enumerate(all);
    auto count = int32_t(0);
    for (auto i = int32_t(0); i < allCount && count < npc(threads)->length; ++i) {
        auto t = (*all)[i];
        auto g = npc(t)->getThreadGroup();
        if(g == this || (recurse && parentOf(g))) {
            threads->set(count++, t);
        }
    }
    return count;
}

bool java::lang::ThreadGroup::parentOf(ThreadGroup* g)
{
    for (; g != nullptr; g = npc(g)->parent) {
        if(g == this) {
            return true;
        }
    }
    return false;
}

int32_t java::lang::ThreadGroup::enumerate(ThreadGroupArray* groups, bool recurse)
{
    return enumerate(groups, recurse, 0);
}

int32_t java::lang::ThreadGroup::enumerate(ThreadGroupArray* groups, bool recurse, int32_t count)
{
    for (auto *c = subgroups; c != nullptr && count < npc(groups)->length; c = npc(c)->next) {
        auto g = java_cast< ThreadGroup* >(npc(c)->value);
        groups->set(count++, g);
        if(recurse) {
            count = npc(g)->enumerate(groups, true, count);
        }
    }
    return count;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::ThreadGroup::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ThreadGroup", 21);
    return c;
}

java::lang::Class* java::lang::ThreadGroup::getClass0()
{
    return class_();
}

