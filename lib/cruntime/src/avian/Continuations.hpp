// Generated from /runtime/avian/Continuations.java

#pragma once

#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/concurrent/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class avian::Continuations
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static /* <T> */::java::lang::Object* callWithCurrentContinuation(CallbackReceiver* receiver) /* throws(Exception) */;
    static /* <T> */::java::lang::Object* dynamicWind(::java::lang::Runnable* before, ::java::util::concurrent::Callable* thunk, ::java::lang::Runnable* after) /* throws(Exception) */;

private:
    static Continuations_UnwindResult* dynamicWind2(::java::lang::Runnable* before, ::java::util::concurrent::Callable* thunk, ::java::lang::Runnable* after) /* throws(Exception) */;
    static Continuations_UnwindResult* wind(::java::lang::Runnable* before, ::java::util::concurrent::Callable* thunk, ::java::lang::Runnable* after) /* throws(Exception) */;
    static void rewind(::java::lang::Runnable* before, Callback* continuation, ::java::lang::Object* result, ::java::lang::Throwable* exception) /* throws(Exception) */;

    // Generated
    Continuations();
protected:
    Continuations(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Continuations_Continuation;
    friend class Continuations_UnwindResult;
};
