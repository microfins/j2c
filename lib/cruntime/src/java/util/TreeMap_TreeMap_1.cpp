// Generated from /runtime/java/util/TreeMap.java
#include <java/util/TreeMap_TreeMap_1.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/TreeMap_MyEntry.hpp>
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

java::util::TreeMap_TreeMap_1::TreeMap_TreeMap_1(TreeMap *TreeMap_this, Comparator* comparator)
    : super(*static_cast< ::default_init_tag* >(0))
    , TreeMap_this(TreeMap_this)
    , comparator(comparator)
{
    clinit();
    ctor();
}

int32_t java::util::TreeMap_TreeMap_1::compare(TreeMap_MyEntry* a, TreeMap_MyEntry* b)
{
    return npc(comparator)->compare(java_cast< ::java::lang::Object* >(npc(a)->key), java_cast< ::java::lang::Object* >(npc(b)->key));
}

int32_t java::util::TreeMap_TreeMap_1::compare(::java::lang::Object* o1, ::java::lang::Object* o2)
{ 
    return compare(dynamic_cast< TreeMap_MyEntry* >(o1), dynamic_cast< TreeMap_MyEntry* >(o2));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeMap_TreeMap_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* java::util::TreeMap_TreeMap_1::getClass0()
{
    return class_();
}

