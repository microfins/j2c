// Generated from /runtime/avian/Continuations.java
#include <avian/Continuations.hpp>

#include <avian/Callback.hpp>
#include <avian/Continuations_UnwindResult.hpp>
#include <java/lang/AssertionError.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/concurrent/Callable.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

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
avian::Continuations::Continuations(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::Continuations::Continuations() 
    : Continuations(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void avian::Continuations::ctor()
{
    super::ctor();
}

/* <T> */java::lang::Object* avian::Continuations::dynamicWind(::java::lang::Runnable* before, ::java::util::concurrent::Callable* thunk, ::java::lang::Runnable* after) /* throws(Exception) */
{
    clinit();
    auto result = dynamicWind2(before, thunk, after);
    if(npc(result)->continuation != nullptr) {
        npc(after)->run();
        if(npc(result)->exception != nullptr) {
            npc(npc(result)->continuation)->handleException(npc(result)->exception);
        } else {
            npc(npc(result)->continuation)->handleResult(npc(result)->result);
        }
        throw new ::java::lang::AssertionError();
    } else {
        return java_cast< ::java::lang::Object* >(npc(result)->result);
    }
}

avian::Continuations_UnwindResult* avian::Continuations::wind(::java::lang::Runnable* before, ::java::util::concurrent::Callable* thunk, ::java::lang::Runnable* after) /* throws(Exception) */
{
    clinit();
    npc(before)->run();
    {
        auto finally0 = finally([&] {
            npc(after)->run();
        });
        {
            return new Continuations_UnwindResult(nullptr, java_cast< ::java::lang::Object* >(npc(thunk)->call()), nullptr);
        }
    }

}

void avian::Continuations::rewind(::java::lang::Runnable* before, Callback* continuation, ::java::lang::Object* result, ::java::lang::Throwable* exception) /* throws(Exception) */
{
    clinit();
    npc(before)->run();
    if(exception != nullptr) {
        npc(continuation)->handleException(exception);
    } else {
        npc(continuation)->handleResult(result);
    }
    throw new ::java::lang::AssertionError();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::Continuations::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.Continuations", 19);
    return c;
}

java::lang::Class* avian::Continuations::getClass0()
{
    return class_();
}

