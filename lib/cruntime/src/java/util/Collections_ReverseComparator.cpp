// Generated from /runtime/java/util/Collections.java
#include <java/util/Collections_ReverseComparator.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::Collections_ReverseComparator::Collections_ReverseComparator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Collections_ReverseComparator::Collections_ReverseComparator(Comparator* cmp) 
    : Collections_ReverseComparator(*static_cast< ::default_init_tag* >(0))
{
    ctor(cmp);
}

void java::util::Collections_ReverseComparator::ctor(Comparator* cmp)
{
    super::ctor();
    this->cmp = cmp;
}

int32_t java::util::Collections_ReverseComparator::compare(::java::lang::Object* o1, ::java::lang::Object* o2)
{
    return -npc(cmp)->compare(o1, o2);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Collections_ReverseComparator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Collections.ReverseComparator", 39);
    return c;
}

java::lang::Class* java::util::Collections_ReverseComparator::getClass0()
{
    return class_();
}

