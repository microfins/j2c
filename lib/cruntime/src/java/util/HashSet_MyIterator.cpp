// Generated from /runtime/java/util/HashSet.java
#include <java/util/HashSet_MyIterator.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Map_Entry.hpp>

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

java::util::HashSet_MyIterator::HashSet_MyIterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::HashSet_MyIterator::HashSet_MyIterator(Iterator* it) 
    : HashSet_MyIterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(it);
}

void java::util::HashSet_MyIterator::ctor(Iterator* it)
{
    super::ctor();
    this->it = it;
}

java::lang::Object* java::util::HashSet_MyIterator::next()
{
    return java_cast< ::java::lang::Object* >(npc(java_cast< Map_Entry* >(npc(it)->next()))->getKey());
}

bool java::util::HashSet_MyIterator::hasNext()
{
    return npc(it)->hasNext();
}

void java::util::HashSet_MyIterator::remove()
{
    npc(it)->remove();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::HashSet_MyIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.HashSet.MyIterator", 28);
    return c;
}

java::lang::Class* java::util::HashSet_MyIterator::getClass0()
{
    return class_();
}

