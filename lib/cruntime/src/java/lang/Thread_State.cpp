// Generated from /runtime/java/lang/Thread.java
#include <java/lang/Thread_State.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

java::lang::Thread_State::Thread_State(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Thread_State::Thread_State(::java::lang::String* name, int ordinal)
    : Thread_State(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

java::lang::Thread_State* java::lang::Thread_State::NEW = new ::java::lang::Thread_State(u"NEW"_j, 0);
java::lang::Thread_State* java::lang::Thread_State::RUNNABLE = new ::java::lang::Thread_State(u"RUNNABLE"_j, 1);
java::lang::Thread_State* java::lang::Thread_State::BLOCKED = new ::java::lang::Thread_State(u"BLOCKED"_j, 2);
java::lang::Thread_State* java::lang::Thread_State::WAITING = new ::java::lang::Thread_State(u"WAITING"_j, 3);
java::lang::Thread_State* java::lang::Thread_State::TIMED_WAITING = new ::java::lang::Thread_State(u"TIMED_WAITING"_j, 4);
java::lang::Thread_State* java::lang::Thread_State::TERMINATED = new ::java::lang::Thread_State(u"TERMINATED"_j, 5);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Thread_State::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Thread.State", 22);
    return c;
}

java::lang::Thread_State* java::lang::Thread_State::valueOf(String* a0)
{
    if(BLOCKED->toString()->equals(a0))
        return BLOCKED;
    if(NEW->toString()->equals(a0))
        return NEW;
    if(RUNNABLE->toString()->equals(a0))
        return RUNNABLE;
    if(TERMINATED->toString()->equals(a0))
        return TERMINATED;
    if(TIMED_WAITING->toString()->equals(a0))
        return TIMED_WAITING;
    if(WAITING->toString()->equals(a0))
        return WAITING;
    throw new IllegalArgumentException(a0);
}

java::lang::Thread_StateArray* java::lang::Thread_State::values()
{
    return new java::lang::Thread_StateArray({
        BLOCKED,
        NEW,
        RUNNABLE,
        TERMINATED,
        TIMED_WAITING,
        WAITING,
    });
}

java::lang::Class* java::lang::Thread_State::getClass0()
{
    return class_();
}

