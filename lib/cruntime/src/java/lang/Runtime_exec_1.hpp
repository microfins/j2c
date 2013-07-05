// Generated from /runtime/java/lang/Runtime.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Thread.hpp>

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

struct default_init_tag;

class java::lang::Runtime_exec_1
    : public Thread
{

public:
    typedef Thread super;
    void run() override;

    // Generated
    Runtime_exec_1(Runtime *Runtime_this, Runtime_MyProcessArray* process, StringArray* command, ThrowableArray* exception, ThreadGroup* group, Runnable* task, String* name, int64_t stackSize);
    Runtime_exec_1(Runtime *Runtime_this, Runtime_MyProcessArray* process, StringArray* command, ThrowableArray* exception, ThreadGroup* group, Runnable* task, String* name);
    Runtime_exec_1(Runtime *Runtime_this, Runtime_MyProcessArray* process, StringArray* command, ThrowableArray* exception, ThreadGroup* group, String* name);
    Runtime_exec_1(Runtime *Runtime_this, Runtime_MyProcessArray* process, StringArray* command, ThrowableArray* exception, Runnable* task, String* name);
    Runtime_exec_1(Runtime *Runtime_this, Runtime_MyProcessArray* process, StringArray* command, ThrowableArray* exception, Runnable* task);
    Runtime_exec_1(Runtime *Runtime_this, Runtime_MyProcessArray* process, StringArray* command, ThrowableArray* exception, String* name);
    Runtime_exec_1(Runtime *Runtime_this, Runtime_MyProcessArray* process, StringArray* command, ThrowableArray* exception);
    static ::java::lang::Class *class_();
    Runtime *Runtime_this;
    Runtime_MyProcessArray* process;
    StringArray* command;
    ThrowableArray* exception;

private:
    virtual ::java::lang::Class* getClass0();
    friend class Runtime;
    friend class Runtime_MyProcess;
};
