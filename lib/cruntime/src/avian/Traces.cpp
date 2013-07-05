// Generated from /runtime/avian/Traces.java
#include <avian/Traces.hpp>

#include <avian/Traces_startTraceListener_1.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/lang/StackTraceElement.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/lang/Thread.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

avian::Traces::Traces(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::Traces::Traces()
    : Traces(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String*& avian::Traces::Newline()
{
    clinit();
    return Newline_;
}
java::lang::String* avian::Traces::Newline_;

java::lang::String* avian::Traces::traceAllThreads()
{
    clinit();
    auto buffer = new ::java::lang::StringBuilder();
    auto threads = new ::java::lang::ThreadArray(::java::lang::Thread::activeCount());
    auto count = ::java::lang::Thread::enumerate(threads);
    for (auto i = int32_t(0); i < count; ++i) {
        traceThread((*threads)[i], buffer);
    }
    return npc(buffer)->toString();
}

java::lang::String* avian::Traces::traceThread(::java::lang::Thread* thread)
{
    clinit();
    auto buffer = new ::java::lang::StringBuilder();
    traceThread(thread, buffer);
    return npc(buffer)->toString();
}

void avian::Traces::traceThread(::java::lang::Thread* thread, ::java::lang::StringBuilder* buffer)
{
    clinit();
    npc(npc(buffer)->append(static_cast< ::java::lang::Object* >(thread)))->append(Newline_);
    for(auto e : *npc(npc(thread)->getStackTrace())) {
        npc(npc(npc(buffer)->append(u"\tat "_j))->append(static_cast< ::java::lang::Object* >(e)))->append(Newline_);
    }
}

void avian::Traces::startTraceListener(::java::lang::String* host, int32_t port)
{
    clinit();
    auto t = new ::java::lang::Thread(static_cast< ::java::lang::Runnable* >(new Traces_startTraceListener_1(host, port)));
    npc(t)->setDaemon(true);
    npc(t)->start();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::Traces::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.Traces", 12);
    return c;
}

void avian::Traces::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        Newline_ = ::java::lang::System::getProperty(u"line.separator"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* avian::Traces::getClass0()
{
    return class_();
}

