// Generated from /runtime/java/util/Arrays.java
#include <java/util/Arrays_sort_1.hpp>

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

java::util::Arrays_sort_1::Arrays_sort_1()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

int32_t java::util::Arrays_sort_1::compare(::java::lang::Object* a, ::java::lang::Object* b)
{
    return npc((java_cast< ::java::lang::Comparable* >(a)))->compareTo(b);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Arrays_sort_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* java::util::Arrays_sort_1::getClass0()
{
    return class_();
}

