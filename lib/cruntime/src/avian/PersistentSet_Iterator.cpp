// Generated from /runtime/avian/PersistentSet.java
#include <avian/PersistentSet_Iterator.hpp>

#include <avian/PersistentSet_Path.hpp>
#include <avian/PersistentSet.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/UnsupportedOperationException.hpp>

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

avian::PersistentSet_Iterator::PersistentSet_Iterator(PersistentSet *PersistentSet_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , PersistentSet_this(PersistentSet_this)
{
    clinit();
}

avian::PersistentSet_Iterator::PersistentSet_Iterator(PersistentSet *PersistentSet_this, PersistentSet_Path* path) 
    : PersistentSet_Iterator(PersistentSet_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(path);
}

avian::PersistentSet_Iterator::PersistentSet_Iterator(PersistentSet *PersistentSet_this, PersistentSet_Iterator* start) 
    : PersistentSet_Iterator(PersistentSet_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(start);
}

void avian::PersistentSet_Iterator::ctor(PersistentSet_Path* path)
{
    super::ctor();
    this->path = path;
}

void avian::PersistentSet_Iterator::ctor(PersistentSet_Iterator* start)
{
    super::ctor();
    path = npc(start)->path;
}

bool avian::PersistentSet_Iterator::hasNext()
{
    return path != nullptr;
}

java::lang::Object* avian::PersistentSet_Iterator::next()
{
    auto p = path;
    path = npc(path)->successor();
    return java_cast< ::java::lang::Object* >(npc(p)->value());
}

void avian::PersistentSet_Iterator::remove()
{
    throw new ::java::lang::UnsupportedOperationException();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::PersistentSet_Iterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.PersistentSet.Iterator", 28);
    return c;
}

java::lang::Class* avian::PersistentSet_Iterator::getClass0()
{
    return class_();
}

