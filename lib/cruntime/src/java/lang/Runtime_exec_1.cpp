// Generated from /runtime/java/lang/Runtime.java
#include <java/lang/Runtime_exec_1.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Process.hpp>
#include <java/lang/Runtime_MyProcess.hpp>
#include <java/lang/Runtime.hpp>
#include <java/lang/Throwable.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Process, ObjectArray > ProcessArray;
typedef ::SubArray< ::java::lang::Runtime_MyProcess, ProcessArray > Runtime_MyProcessArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, CharSequenceArray, ComparableArray, ::java::io::SerializableArray > StringArray;
typedef ::SubArray< ::java::lang::Throwable, ObjectArray, ::java::io::SerializableArray > ThrowableArray;
    } // lang
} // java

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
java::lang::Runtime_exec_1::Runtime_exec_1(Runtime *Runtime_this, Runtime_MyProcessArray* process, StringArray* command, ThrowableArray* exception, ThreadGroup* group, Runnable* task, String* name, int64_t stackSize)
    : super(*static_cast< ::default_init_tag* >(0))
    , Runtime_this(Runtime_this)
    , process(process)
    , command(command)
    , exception(exception)
{
    clinit();
    ctor(group, task, name, stackSize);
}

java::lang::Runtime_exec_1::Runtime_exec_1(Runtime *Runtime_this, Runtime_MyProcessArray* process, StringArray* command, ThrowableArray* exception, ThreadGroup* group, Runnable* task, String* name)
    : super(*static_cast< ::default_init_tag* >(0))
    , Runtime_this(Runtime_this)
    , process(process)
    , command(command)
    , exception(exception)
{
    clinit();
    ctor(group, task, name);
}

java::lang::Runtime_exec_1::Runtime_exec_1(Runtime *Runtime_this, Runtime_MyProcessArray* process, StringArray* command, ThrowableArray* exception, ThreadGroup* group, String* name)
    : super(*static_cast< ::default_init_tag* >(0))
    , Runtime_this(Runtime_this)
    , process(process)
    , command(command)
    , exception(exception)
{
    clinit();
    ctor(group, name);
}

java::lang::Runtime_exec_1::Runtime_exec_1(Runtime *Runtime_this, Runtime_MyProcessArray* process, StringArray* command, ThrowableArray* exception, Runnable* task, String* name)
    : super(*static_cast< ::default_init_tag* >(0))
    , Runtime_this(Runtime_this)
    , process(process)
    , command(command)
    , exception(exception)
{
    clinit();
    ctor(task, name);
}

java::lang::Runtime_exec_1::Runtime_exec_1(Runtime *Runtime_this, Runtime_MyProcessArray* process, StringArray* command, ThrowableArray* exception, Runnable* task)
    : super(*static_cast< ::default_init_tag* >(0))
    , Runtime_this(Runtime_this)
    , process(process)
    , command(command)
    , exception(exception)
{
    clinit();
    ctor(task);
}

java::lang::Runtime_exec_1::Runtime_exec_1(Runtime *Runtime_this, Runtime_MyProcessArray* process, StringArray* command, ThrowableArray* exception, String* name)
    : super(*static_cast< ::default_init_tag* >(0))
    , Runtime_this(Runtime_this)
    , process(process)
    , command(command)
    , exception(exception)
{
    clinit();
    ctor(name);
}

java::lang::Runtime_exec_1::Runtime_exec_1(Runtime *Runtime_this, Runtime_MyProcessArray* process, StringArray* command, ThrowableArray* exception)
    : super(*static_cast< ::default_init_tag* >(0))
    , Runtime_this(Runtime_this)
    , process(process)
    , command(command)
    , exception(exception)
{
    clinit();
    ctor();
}

void java::lang::Runtime_exec_1::run()
{
    {
        synchronized synchronized_0(process);
        {
            {
                auto finally0 = finally([&] {
                    npc(process)->notifyAll();
                });
                try {
                    auto info = new ::int64_tArray(int32_t(5));
                    Runtime::exec(command, info);
                    process->set(int32_t(0), new Runtime_MyProcess((*info)[int32_t(0)], (*info)[int32_t(1)], static_cast< int32_t >((*info)[int32_t(2)]), static_cast< int32_t >((*info)[int32_t(3)]), static_cast< int32_t >((*info)[int32_t(4)])));
                } catch (Throwable* e) {
                    exception->set(int32_t(0), e);
                }
            }
        }
    }
    auto p = (*process)[int32_t(0)];
    if(p != nullptr) {
        {
            synchronized synchronized_1(p);
            {
                {
                    auto finally1 = finally([&] {
                        npc(p)->notifyAll();
                    });
                    {
                        if(npc(p)->pid != 0) {
                            npc(p)->exitCode = Runtime::waitFor(npc(p)->pid, npc(p)->tid);
                            npc(p)->pid = 0;
                            npc(p)->tid = 0;
                        }
                    }
                }

            }
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Runtime_exec_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* java::lang::Runtime_exec_1::getClass0()
{
    return class_();
}

