// Generated from /runtime/java/lang/ThreadLocal.java
#include <java/lang/ThreadLocal.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Thread.hpp>
#include <java/util/Map.hpp>

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

java::lang::ThreadLocal::ThreadLocal(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ThreadLocal::ThreadLocal()
    : ThreadLocal(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::Object*& java::lang::ThreadLocal::Null()
{
    clinit();
    return Null_;
}
java::lang::Object* java::lang::ThreadLocal::Null_;

java::lang::Object* java::lang::ThreadLocal::initialValue()
{
    return nullptr;
}

java::lang::Object* java::lang::ThreadLocal::get()
{
    auto map = npc(Thread::currentThread())->locals();
    auto o = java_cast< Object* >(npc(map)->get(this));
    if(o == nullptr) {
        o = java_cast< Object* >(initialValue());
        if(o == nullptr) {
            o = Null();
        }
        npc(map)->put(this, o);
    }
    if(o == Null()) {
        o = nullptr;
    }
    return java_cast< Object* >(o);
}

void java::lang::ThreadLocal::set(Object* value)
{
    auto map = npc(Thread::currentThread())->locals();
    auto o = value;
    if(o == nullptr) {
        o = Null();
    }
    npc(map)->put(this, o);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::ThreadLocal::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ThreadLocal", 21);
    return c;
}

void java::lang::ThreadLocal::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        Null_ = new Object();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::lang::ThreadLocal::getClass0()
{
    return class_();
}

