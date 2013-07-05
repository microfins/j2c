// Generated from /runtime/java/util/concurrent/ConcurrentLinkedQueue.java
#include <java/util/concurrent/ConcurrentLinkedQueue_Node.hpp>

#include <java/lang/Object.hpp>

java::util::concurrent::ConcurrentLinkedQueue_Node::ConcurrentLinkedQueue_Node(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::concurrent::ConcurrentLinkedQueue_Node::ConcurrentLinkedQueue_Node(::java::lang::Object* value, ConcurrentLinkedQueue_Node* next) 
    : ConcurrentLinkedQueue_Node(*static_cast< ::default_init_tag* >(0))
{
    ctor(value,next);
}

void java::util::concurrent::ConcurrentLinkedQueue_Node::ctor(::java::lang::Object* value, ConcurrentLinkedQueue_Node* next)
{
    super::ctor();
    this->value = value;
    this->next = next;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::concurrent::ConcurrentLinkedQueue_Node::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.concurrent.ConcurrentLinkedQueue.Node", 47);
    return c;
}

java::lang::Class* java::util::concurrent::ConcurrentLinkedQueue_Node::getClass0()
{
    return class_();
}

