// Generated from /runtime/java/lang/ref/Reference.java
#include <java/lang/ref/Reference.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/ref/ReferenceQueue.hpp>

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

java::lang::ref::Reference::Reference(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ref::Reference::Reference(::java::lang::Object* target, ReferenceQueue* queue) 
    : Reference(*static_cast< ::default_init_tag* >(0))
{
    ctor(target,queue);
}

java::lang::ref::Reference::Reference(::java::lang::Object* target) 
    : Reference(*static_cast< ::default_init_tag* >(0))
{
    ctor(target);
}

void java::lang::ref::Reference::ctor(::java::lang::Object* target, ReferenceQueue* queue)
{
    super::ctor();
    this->target = target;
    this->queue = queue;
}

void java::lang::ref::Reference::ctor(::java::lang::Object* target)
{
    ctor(target, nullptr);
}

java::lang::Object* java::lang::ref::Reference::get()
{
    return java_cast< ::java::lang::Object* >(target);
}

void java::lang::ref::Reference::clear()
{
    target = nullptr;
}

bool java::lang::ref::Reference::isEnqueued()
{
    return jNext != nullptr;
}

bool java::lang::ref::Reference::enqueue()
{
    if(queue != nullptr) {
        npc(queue)->add(this);
        queue = nullptr;
        return true;
    } else {
        return false;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::ref::Reference::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ref.Reference", 23);
    return c;
}

java::lang::Class* java::lang::ref::Reference::getClass0()
{
    return class_();
}

