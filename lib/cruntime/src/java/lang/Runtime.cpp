// Generated from /runtime/java/lang/Runtime.java
#include <java/lang/Runtime.hpp>

#include <java/io/IOException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/InterruptedException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Process.hpp>
#include <java/lang/Runtime_exec_1.hpp>
#include <java/lang/Runtime_MyProcess.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Thread.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/StringTokenizer.hpp>
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
java::lang::Runtime::Runtime(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Runtime::Runtime() 
    : Runtime(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::Runtime*& java::lang::Runtime::instance()
{
    clinit();
    return instance_;
}
java::lang::Runtime* java::lang::Runtime::instance_;

void java::lang::Runtime::ctor()
{
    super::ctor();
}

java::lang::Runtime* java::lang::Runtime::getRuntime()
{
    clinit();
    return instance_;
}

void java::lang::Runtime::load(String* path)
{
    if(path != nullptr) {
        load(path, false);
    } else {
        throw new NullPointerException();
    }
}

void java::lang::Runtime::loadLibrary(String* path)
{
    if(path != nullptr) {
        load(path, true);
    } else {
        throw new NullPointerException();
    }
}

java::lang::Process* java::lang::Runtime::exec(String* command) /* throws(IOException) */
{
    auto t = new ::java::util::StringTokenizer(command);
    auto cmd = new StringArray(npc(t)->countTokens());
    for (auto i = int32_t(0); i < npc(cmd)->length; i++) 
                cmd->set(i, npc(t)->nextToken());

    return exec(cmd);
}

java::lang::Process* java::lang::Runtime::exec(StringArray* command) /* throws(IOException) */
{
    auto const process = new Runtime_MyProcessArray(int32_t(1));
    auto const exception = new ThrowableArray(int32_t(1));
    {
        synchronized synchronized_0(process);
        {
            Thread* t = new Runtime_exec_1(this, process, command, exception);
            npc(t)->setDaemon(true);
            npc(t)->start();
            while ((*process)[int32_t(0)] == nullptr && (*exception)[int32_t(0)] == nullptr) {
                try {
                    npc(process)->wait();
                } catch (InterruptedException* e) {
                    throw new RuntimeException(static_cast< Throwable* >(e));
                }
            }
        }
    }
    if((*exception)[int32_t(0)] != nullptr) {
        if(dynamic_cast< ::java::io::IOException* >((*exception)[int32_t(0)]) != nullptr) {
            auto message = ::java::lang::StringBuilder().append(u"Failed to run \""_j)->append((*command)[int32_t(0)])
                ->append(u"\": "_j)
                ->append(npc((*exception)[int32_t(0)])->getMessage())->toString();
            throw new ::java::io::IOException(message);
        } else {
            throw new RuntimeException((*exception)[int32_t(0)]);
        }
    }
    return (*process)[int32_t(0)];
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Runtime::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Runtime", 17);
    return c;
}

void java::lang::Runtime::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new Runtime();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::lang::Runtime::getClass0()
{
    return class_();
}

