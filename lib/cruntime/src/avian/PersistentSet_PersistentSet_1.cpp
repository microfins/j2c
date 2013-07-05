// Generated from /runtime/avian/PersistentSet.java
#include <avian/PersistentSet_PersistentSet_1.hpp>

#include <avian/PersistentSet.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>

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

avian::PersistentSet_PersistentSet_1::PersistentSet_PersistentSet_1(PersistentSet *PersistentSet_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , PersistentSet_this(PersistentSet_this)
{
    clinit();
    ctor();
}

int32_t avian::PersistentSet_PersistentSet_1::compare(::java::lang::Object* a, ::java::lang::Object* b)
{
    return npc((java_cast< ::java::lang::Comparable* >(a)))->compareTo(b);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::PersistentSet_PersistentSet_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* avian::PersistentSet_PersistentSet_1::getClass0()
{
    return class_();
}

