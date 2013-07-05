// Generated from /runtime/java/lang/Thread.java

#pragma once

#include <atomic>
#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Runnable, ObjectArray > RunnableArray;
typedef ::SubArray< ::java::lang::StackTraceElement, ObjectArray > StackTraceElementArray;
typedef ::SubArray< ::java::lang::Thread, ObjectArray, RunnableArray > ThreadArray;
    } // lang
} // java

struct default_init_tag;

class java::lang::Thread
    : public virtual Object
    , public virtual Runnable
{

public:
    typedef Object super;

private:
    int64_t peer {  };
    std::atomic< bool > interrupted_ {  };
    std::atomic< bool > unparked {  };
    bool daemon {  };
    int8_t state {  };
    int8_t priority {  };
    Runnable* task {  };
    ::java::util::Map* locals_ {  };
    Object* sleepLock {  };
    ClassLoader* classLoader {  };
    Thread_UncaughtExceptionHandler* exceptionHandler {  };
    String* name {  };
    ThreadGroup* group {  };
    static Thread_UncaughtExceptionHandler* defaultExceptionHandler_;

public:
    static constexpr int32_t MIN_PRIORITY { int32_t(1) };
    static constexpr int32_t NORM_PRIORITY { int32_t(5) };
    static constexpr int32_t MAX_PRIORITY { int32_t(10) };
protected:
    void ctor(ThreadGroup* group, Runnable* task, String* name, int64_t stackSize);
    void ctor(ThreadGroup* group, Runnable* task, String* name);
    void ctor(ThreadGroup* group, String* name);
    void ctor(Runnable* task, String* name);
    void ctor(Runnable* task);
    void ctor(String* name);
    void ctor();

public:
    virtual void start();

private:
    int64_t doStart();
    static void run(Thread* t) /* throws(Throwable) */;

public:
    void run() override;
    virtual ClassLoader* getContextClassLoader();
    virtual void setContextClassLoader(ClassLoader* v);
    virtual ::java::util::Map* locals();
    static Thread* currentThread();
    virtual void interrupt();

private:
    static bool interrupt(int64_t peer);

public:
    static bool interrupted();

private:
    static bool interrupted(int64_t peer);

public:
    virtual bool isInterrupted();
    static void sleep(int64_t milliseconds) /* throws(InterruptedException) */;
    static void sleep(int64_t milliseconds, int32_t nanoseconds) /* throws(InterruptedException) */;
    virtual StackTraceElementArray* getStackTrace();

private:
    static Object* getStackTrace(int64_t peer);

public:
    static int32_t activeCount();
    static int32_t enumerate(ThreadArray* array);
    virtual String* getName();
    virtual void setName(String* name);
    virtual Thread_UncaughtExceptionHandler* getUncaughtExceptionHandler();
    static Thread_UncaughtExceptionHandler* getDefaultUncaughtExceptionHandler();
    virtual void setUncaughtExceptionHandler(Thread_UncaughtExceptionHandler* h);
    static void setDefaultUncaughtExceptionHandler(Thread_UncaughtExceptionHandler* h);
    virtual Thread_State* getState();
    virtual bool isAlive();
    virtual int32_t getPriority();
    virtual void setPriority(int32_t priority);
    virtual bool isDaemon();
    virtual void setDaemon(bool v);
    static void yield();
    virtual void join() /* throws(InterruptedException) */;
    virtual void join(int64_t milliseconds) /* throws(InterruptedException) */;
    virtual void join(int64_t milliseconds, int32_t nanoseconds) /* throws(InterruptedException) */;
    virtual ThreadGroup* getThreadGroup();
    static bool holdsLock(Object* o);
    virtual int64_t getId();

    // Generated
    Thread(ThreadGroup* group, Runnable* task, String* name, int64_t stackSize);
    Thread(ThreadGroup* group, Runnable* task, String* name);
    Thread(ThreadGroup* group, String* name);
    Thread(Runnable* task, String* name);
    Thread(Runnable* task);
    Thread(String* name);
    Thread();
protected:
    Thread(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static Thread_UncaughtExceptionHandler*& defaultExceptionHandler();
    virtual ::java::lang::Class* getClass0();
    friend class Thread_UncaughtExceptionHandler;
    friend class Thread_State;
};
