// Generated from /runtime/java/util/TreeMap.java
#include <java/util/TreeMap_TreeMap_2.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/TreeMap.hpp>

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

java::util::TreeMap_TreeMap_2::TreeMap_TreeMap_2(TreeMap *TreeMap_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , TreeMap_this(TreeMap_this)
{
    clinit();
    ctor();
}

int32_t java::util::TreeMap_TreeMap_2::compare(::java::lang::Object* a, ::java::lang::Object* b)
{
    return npc((java_cast< ::java::lang::Comparable* >(a)))->compareTo(b);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeMap_TreeMap_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* java::util::TreeMap_TreeMap_2::getClass0()
{
    return class_();
}

