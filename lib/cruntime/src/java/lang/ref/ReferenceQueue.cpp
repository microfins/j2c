// Generated from /runtime/java/lang/ref/ReferenceQueue.java
#include <java/lang/ref/ReferenceQueue.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/ref/Reference.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::lang::ref::ReferenceQueue::ReferenceQueue(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ref::ReferenceQueue::ReferenceQueue()
    : ReferenceQueue(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::ref::Reference* java::lang::ref::ReferenceQueue::poll()
{
    auto r = front;
    if(front != nullptr) {
        if(static_cast< ::java::lang::Object* >(front) == static_cast< ::java::lang::Object* >(npc(front)->jNext)) {
            front = nullptr;
        } else {
            front = npc(front)->jNext;
        }
    }
    return r;
}

void java::lang::ref::ReferenceQueue::add(Reference* r)
{
    if(front == nullptr) {
        npc(r)->jNext = r;
    } else {
        npc(r)->jNext = front;
    }
    front = r;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::ref::ReferenceQueue::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ref.ReferenceQueue", 28);
    return c;
}

java::lang::Class* java::lang::ref::ReferenceQueue::getClass0()
{
    return class_();
}

