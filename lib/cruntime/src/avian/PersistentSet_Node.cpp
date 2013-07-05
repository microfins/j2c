// Generated from /runtime/avian/PersistentSet.java
#include <avian/PersistentSet_Node.hpp>

#include <java/lang/ClassCastException.hpp>
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

avian::PersistentSet_Node::PersistentSet_Node(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::PersistentSet_Node::PersistentSet_Node(PersistentSet_Node* basis) 
    : PersistentSet_Node(*static_cast< ::default_init_tag* >(0))
{
    ctor(basis);
}

void avian::PersistentSet_Node::ctor(PersistentSet_Node* basis)
{
    super::ctor();
    if(basis != nullptr) {
        value = java_cast< ::java::lang::Object* >(npc(basis)->value);
        left = npc(basis)->left;
        right = npc(basis)->right;
        red = npc(basis)->red;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::PersistentSet_Node::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.PersistentSet.Node", 24);
    return c;
}

java::lang::Class* avian::PersistentSet_Node::getClass0()
{
    return class_();
}

