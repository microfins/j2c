// Generated from /runtime/java/util/Collections.java
#include <java/util/Collections_IteratorEnumeration.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>

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

java::util::Collections_IteratorEnumeration::Collections_IteratorEnumeration(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Collections_IteratorEnumeration::Collections_IteratorEnumeration(Iterator* it) 
    : Collections_IteratorEnumeration(*static_cast< ::default_init_tag* >(0))
{
    ctor(it);
}

void java::util::Collections_IteratorEnumeration::ctor(Iterator* it)
{
    super::ctor();
    this->it = it;
}

java::lang::Object* java::util::Collections_IteratorEnumeration::nextElement()
{
    return java_cast< ::java::lang::Object* >(npc(it)->next());
}

bool java::util::Collections_IteratorEnumeration::hasMoreElements()
{
    return npc(it)->hasNext();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Collections_IteratorEnumeration::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Collections.IteratorEnumeration", 41);
    return c;
}

java::lang::Class* java::util::Collections_IteratorEnumeration::getClass0()
{
    return class_();
}

