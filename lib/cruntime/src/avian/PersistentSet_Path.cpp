// Generated from /runtime/avian/PersistentSet.java
#include <avian/PersistentSet_Path.hpp>

#include <avian/Cell.hpp>
#include <avian/PersistentSet_Node.hpp>
#include <avian/PersistentSet.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>

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

avian::PersistentSet_Path::PersistentSet_Path(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::PersistentSet_Path::PersistentSet_Path(bool fresh, PersistentSet_Node* node, PersistentSet* root, Cell* ancestors) 
    : PersistentSet_Path(*static_cast< ::default_init_tag* >(0))
{
    ctor(fresh,node,root,ancestors);
}

void avian::PersistentSet_Path::ctor(bool fresh, PersistentSet_Node* node, PersistentSet* root, Cell* ancestors)
{
    super::ctor();
    this->fresh_ = fresh;
    this->node = node;
    this->root_ = root;
    this->ancestors = ancestors;
}

java::lang::Object* avian::PersistentSet_Path::value()
{
    return java_cast< ::java::lang::Object* >(npc(node)->value);
}

bool avian::PersistentSet_Path::fresh()
{
    return fresh_;
}

avian::PersistentSet* avian::PersistentSet_Path::root()
{
    return root_;
}

avian::PersistentSet_Path* avian::PersistentSet_Path::successor()
{
    return npc(root_)->successor(this);
}

avian::PersistentSet* avian::PersistentSet_Path::remove()
{
    if(fresh_)
        throw new ::java::lang::IllegalStateException();

    return npc(root_)->remove(static_cast< PersistentSet_Path* >(this));
}

avian::PersistentSet* avian::PersistentSet_Path::add()
{
    if(!fresh_)
        throw new ::java::lang::IllegalStateException();

    return npc(root_)->add(static_cast< PersistentSet_Path* >(this));
}

avian::PersistentSet* avian::PersistentSet_Path::replaceWith(::java::lang::Object* value)
{
    if(fresh_)
        throw new ::java::lang::IllegalStateException();

    if(npc(npc(root_)->comparator_)->compare(java_cast< ::java::lang::Object* >(npc(node)->value), value) != 0)
        throw new ::java::lang::IllegalArgumentException();

    npc(node)->value = value;
    return root_;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::PersistentSet_Path::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.PersistentSet.Path", 24);
    return c;
}

java::lang::Class* avian::PersistentSet_Path::getClass0()
{
    return class_();
}

