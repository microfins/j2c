// Generated from /runtime/java/lang/Thread.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Enum.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray > EnumArray;
typedef ::SubArray< ::java::lang::Thread_State, EnumArray > Thread_StateArray;
    } // lang
} // java

struct default_init_tag;

class java::lang::Thread_State final
    : public Enum
{

public:
    typedef Enum super;

public: /* package */
    static Thread_State *NEW;
    static Thread_State *RUNNABLE;
    static Thread_State *BLOCKED;
    static Thread_State *WAITING;
    static Thread_State *TIMED_WAITING;
    static Thread_State *TERMINATED;

    // Generated

public:
    Thread_State(::java::lang::String* name, int ordinal);
protected:
    Thread_State(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static Thread_State* valueOf(String* a0);
    static Thread_StateArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Thread;
    friend class Thread_UncaughtExceptionHandler;
};
