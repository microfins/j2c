// Generated from /runtime/java/lang/Thread.java
#include <java/lang/Thread.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/InheritableThreadLocal.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/StackTraceElement.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/lang/Thread_State.hpp>
#include <java/lang/Thread_UncaughtExceptionHandler.hpp>
#include <java/lang/ThreadGroup.hpp>
#include <java/lang/ThreadLocal.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <java/util/WeakHashMap.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray > EnumArray;
typedef ::SubArray< ::java::lang::StackTraceElement, ObjectArray > StackTraceElementArray;
typedef ::SubArray< ::java::lang::Thread_State, EnumArray > Thread_StateArray;
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

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
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
java::lang::Thread::Thread(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Thread::Thread(ThreadGroup* group, Runnable* task, String* name, int64_t stackSize) 
    : Thread(*static_cast< ::default_init_tag* >(0))
{
    ctor(group,task,name,stackSize);
}

java::lang::Thread::Thread(ThreadGroup* group, Runnable* task, String* name) 
    : Thread(*static_cast< ::default_init_tag* >(0))
{
    ctor(group,task,name);
}

java::lang::Thread::Thread(ThreadGroup* group, String* name) 
    : Thread(*static_cast< ::default_init_tag* >(0))
{
    ctor(group,name);
}

java::lang::Thread::Thread(Runnable* task, String* name) 
    : Thread(*static_cast< ::default_init_tag* >(0))
{
    ctor(task,name);
}

java::lang::Thread::Thread(Runnable* task) 
    : Thread(*static_cast< ::default_init_tag* >(0))
{
    ctor(task);
}

java::lang::Thread::Thread(String* name) 
    : Thread(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

java::lang::Thread::Thread() 
    : Thread(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::Thread_UncaughtExceptionHandler*& java::lang::Thread::defaultExceptionHandler()
{
    clinit();
    return defaultExceptionHandler_;
}
java::lang::Thread_UncaughtExceptionHandler* java::lang::Thread::defaultExceptionHandler_;

constexpr int32_t java::lang::Thread::MIN_PRIORITY;

constexpr int32_t java::lang::Thread::NORM_PRIORITY;

constexpr int32_t java::lang::Thread::MAX_PRIORITY;

void java::lang::Thread::ctor(ThreadGroup* group, Runnable* task, String* name, int64_t stackSize)
{
    super::ctor();
    this->group = (group == nullptr ? npc(Thread::currentThread())->group : group);
    this->task = task;
    this->name = name;
    auto current = currentThread();
    auto map = npc(current)->locals_;
    if(map != nullptr) {
        for (auto _i = npc(npc(map)->entrySet())->iterator(); _i->hasNext(); ) {
            ::java::util::Map_Entry* e = java_cast< ::java::util::Map_Entry* >(_i->next());
            {
                if(dynamic_cast< InheritableThreadLocal* >(java_cast< ThreadLocal* >(npc(e)->getKey())) != nullptr) {
                    auto itl = java_cast< InheritableThreadLocal* >(java_cast< ThreadLocal* >(npc(e)->getKey()));
                    npc(locals())->put(itl, java_cast< Object* >(npc(itl)->childValue(java_cast< Object* >(npc(e)->getValue()))));
                }
            }
        }
    }
    classLoader = npc(current)->classLoader;
}

void java::lang::Thread::ctor(ThreadGroup* group, Runnable* task, String* name)
{
    ctor(group, task, name, int32_t(0));
}

void java::lang::Thread::ctor(ThreadGroup* group, String* name)
{
    ctor(nullptr, nullptr, name);
}

void java::lang::Thread::ctor(Runnable* task, String* name)
{
    ctor(nullptr, task, name);
}

void java::lang::Thread::ctor(Runnable* task)
{
    ctor(nullptr, task, ::java::lang::StringBuilder().append(u"Thread["_j)->append(static_cast< Object* >(task))
        ->append(u"]"_j)->toString());
}

void java::lang::Thread::ctor(String* name)
{
    ctor(nullptr, nullptr, name);
}

void java::lang::Thread::ctor()
{
    ctor(static_cast< Runnable* >(nullptr));
}

void java::lang::Thread::start()
{
    if(peer != 0) {
        throw new IllegalStateException(u"thread already started"_j);
    }
    state = static_cast< int8_t >(npc(Thread_State::RUNNABLE)->ordinal());
    peer = doStart();
    if(peer == 0) {
        state = static_cast< int8_t >(npc(Thread_State::NEW)->ordinal());
        throw new RuntimeException(u"unable to start native thread"_j);
    }
}

void java::lang::Thread::run(Thread* t) /* throws(Throwable) */
{
    clinit();
    {
        auto finally0 = finally([&] {
            {
                synchronized synchronized_0(t);
                {
                    npc(t)->state = static_cast< int8_t >(npc(Thread_State::TERMINATED)->ordinal());
                    npc(t)->notifyAll();
                }
            }
        });
        try {
            npc(t)->run();
        } catch (Throwable* e) {
            auto eh = npc(t)->exceptionHandler;
            auto deh = Thread::defaultExceptionHandler_;
            if(eh != nullptr) {
                npc(eh)->uncaughtException(t, e);
            } else if(deh != nullptr) {
                npc(deh)->uncaughtException(t, e);
            } else {
                throw e;
            }
        }
    }
}

void java::lang::Thread::run()
{
    if(task != nullptr) {
        npc(task)->run();
    }
}

java::lang::ClassLoader* java::lang::Thread::getContextClassLoader()
{
    return classLoader;
}

void java::lang::Thread::setContextClassLoader(ClassLoader* v)
{
    classLoader = v;
}

java::util::Map* java::lang::Thread::locals()
{
    if(locals_ == nullptr) {
        locals_ = new ::java::util::WeakHashMap();
    }
    return locals_;
}

void java::lang::Thread::interrupt()
{
    interrupt(peer);
}

bool java::lang::Thread::interrupted()
{
    clinit();
    return interrupted(npc(currentThread())->peer);
}

bool java::lang::Thread::isInterrupted()
{
    return interrupted_.load();
}

void java::lang::Thread::sleep(int64_t milliseconds) /* throws(InterruptedException) */
{
    clinit();
    if(milliseconds <= 0) {
        milliseconds = 1;
    }
    auto t = currentThread();
    if(npc(t)->sleepLock == nullptr) {
        npc(t)->sleepLock = new Object();
    }
    {
        synchronized synchronized_1(npc(t)->sleepLock);
        {
            npc(npc(t)->sleepLock)->wait(milliseconds);
        }
    }
}

void java::lang::Thread::sleep(int64_t milliseconds, int32_t nanoseconds) /* throws(InterruptedException) */
{
    clinit();
    if(nanoseconds > 0) {
        ++milliseconds;
    }
    sleep(milliseconds);
}

java::lang::StackTraceElementArray* java::lang::Thread::getStackTrace()
{
    auto p = peer;
    if(p == 0) {
        return new StackTraceElementArray(int32_t(0));
    }
    return Throwable::resolveTrace(getStackTrace(p));
}

java::lang::String* java::lang::Thread::getName()
{
    return name;
}

void java::lang::Thread::setName(String* name)
{
    this->name = name;
}

java::lang::Thread_UncaughtExceptionHandler* java::lang::Thread::getUncaughtExceptionHandler()
{
    auto eh = exceptionHandler;
    return (eh == nullptr ? static_cast< Thread_UncaughtExceptionHandler* >(group) : eh);
}

java::lang::Thread_UncaughtExceptionHandler* java::lang::Thread::getDefaultUncaughtExceptionHandler()
{
    clinit();
    return defaultExceptionHandler_;
}

void java::lang::Thread::setUncaughtExceptionHandler(Thread_UncaughtExceptionHandler* h)
{
    exceptionHandler = h;
}

void java::lang::Thread::setDefaultUncaughtExceptionHandler(Thread_UncaughtExceptionHandler* h)
{
    clinit();
    defaultExceptionHandler_ = h;
}

java::lang::Thread_State* java::lang::Thread::getState()
{
    return (*Thread_State::values())[state];
}

bool java::lang::Thread::isAlive()
{
    {
        auto v = getState();
        if((v == Thread_State::NEW) || (v == Thread_State::TERMINATED)) {
            return false;
        }
        if((((v != Thread_State::NEW) && (v != Thread_State::TERMINATED)))) {
            return true;
        }
end_switch0:;
    }

}

int32_t java::lang::Thread::getPriority()
{
    return priority;
}

void java::lang::Thread::setPriority(int32_t priority)
{
    if(priority < MIN_PRIORITY || priority > MAX_PRIORITY) {
        throw new IllegalArgumentException();
    }
    this->priority = static_cast< int8_t >(priority);
}

bool java::lang::Thread::isDaemon()
{
    return daemon;
}

void java::lang::Thread::setDaemon(bool v)
{
    if(getState() != Thread_State::NEW) {
        throw new IllegalStateException();
    }
    daemon = v;
}

void java::lang::Thread::join() /* throws(InterruptedException) */
{
    while (getState() != Thread_State::TERMINATED) {
        wait();
    }
}

void java::lang::Thread::join(int64_t milliseconds) /* throws(InterruptedException) */
{
    auto then = System::currentTimeMillis();
    auto remaining = milliseconds;
    while (remaining > 0 && getState() != Thread_State::TERMINATED) {
        wait(remaining);
        remaining = milliseconds - (System::currentTimeMillis() - then);
    }
}

void java::lang::Thread::join(int64_t milliseconds, int32_t nanoseconds) /* throws(InterruptedException) */
{
    if(nanoseconds > 0) {
        ++milliseconds;
    }
    join(milliseconds);
}

java::lang::ThreadGroup* java::lang::Thread::getThreadGroup()
{
    return group;
}

int64_t java::lang::Thread::getId()
{
    return peer;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Thread::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Thread", 16);
    return c;
}

java::lang::Class* java::lang::Thread::getClass0()
{
    return class_();
}

