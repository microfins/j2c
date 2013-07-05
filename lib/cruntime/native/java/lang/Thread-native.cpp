// Generated from /runtime/java/lang/Thread.java
#include <java/lang/Thread.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Runnable, ObjectArray > RunnableArray;
typedef ::SubArray< ::java::lang::Thread, ObjectArray, RunnableArray > ThreadArray;
    } // lang
} // java

extern void unimplemented_(const char16_t* name);

int32_t java::lang::Thread::activeCount()
{ /* native */
    clinit();
    unimplemented_(u"int32_t java::lang::Thread::activeCount()");
    return 0;
}

java::lang::Thread* java::lang::Thread::currentThread()
{ /* native */
    clinit();
    unimplemented_(u"java::lang::Thread* java::lang::Thread::currentThread()");
    return 0;
}

int64_t java::lang::Thread::doStart()
{ /* native */
    unimplemented_(u"int64_t java::lang::Thread::doStart()");
    return 0;
}

int32_t java::lang::Thread::enumerate(ThreadArray* array)
{ /* native */
    clinit();
    unimplemented_(u"int32_t java::lang::Thread::enumerate(ThreadArray* array)");
    return 0;
}

java::lang::Object* java::lang::Thread::getStackTrace(int64_t peer)
{ /* native */
    clinit();
    unimplemented_(u"java::lang::Object* java::lang::Thread::getStackTrace(int64_t peer)");
    return 0;
}

bool java::lang::Thread::holdsLock(Object* o)
{ /* native */
    clinit();
    unimplemented_(u"bool java::lang::Thread::holdsLock(Object* o)");
    return 0;
}

bool java::lang::Thread::interrupt(int64_t peer)
{ /* native */
    clinit();
    unimplemented_(u"bool java::lang::Thread::interrupt(int64_t peer)");
    return 0;
}

bool java::lang::Thread::interrupted(int64_t peer)
{ /* native */
    clinit();
    unimplemented_(u"bool java::lang::Thread::interrupted(int64_t peer)");
    return 0;
}

void java::lang::Thread::yield()
{ /* native */
    clinit();
    unimplemented_(u"void java::lang::Thread::yield()");
}

