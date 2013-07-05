// Generated from /runtime/java/lang/ThreadGroup.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Thread_UncaughtExceptionHandler.hpp>

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

struct default_init_tag;

class java::lang::ThreadGroup
    : public virtual Object
    , public virtual Thread_UncaughtExceptionHandler
{

public:
    typedef Object super;

private:
    ThreadGroup* parent {  };
    String* name {  };
    ::avian::Cell* subgroups {  };
protected:
    void ctor(ThreadGroup* parent, String* name);
    void ctor(String* name);

public:
    void uncaughtException(Thread* t, Throwable* e) override;
    virtual ThreadGroup* getParent();
    virtual String* getName();
    virtual int32_t activeCount();
    virtual int32_t enumerate(ThreadArray* threads);
    virtual int32_t enumerate(ThreadArray* threads, bool recurse);
    virtual bool parentOf(ThreadGroup* g);
    virtual int32_t enumerate(ThreadGroupArray* groups, bool recurse);

private:
    int32_t enumerate(ThreadGroupArray* groups, bool recurse, int32_t count);

    // Generated

public:
    ThreadGroup(ThreadGroup* parent, String* name);
    ThreadGroup(String* name);
protected:
    ThreadGroup(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
