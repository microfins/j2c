// Generated from /runtime/java/lang/ref/WeakReference.java
#include <java/lang/ref/WeakReference.hpp>

#include <java/lang/Object.hpp>
#include <java/lang/ref/ReferenceQueue.hpp>

java::lang::ref::WeakReference::WeakReference(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ref::WeakReference::WeakReference(::java::lang::Object* target, ReferenceQueue* queue) 
    : WeakReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(target,queue);
}

java::lang::ref::WeakReference::WeakReference(::java::lang::Object* target) 
    : WeakReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(target);
}

void java::lang::ref::WeakReference::ctor(::java::lang::Object* target, ReferenceQueue* queue)
{
    super::ctor(target, queue);
}

void java::lang::ref::WeakReference::ctor(::java::lang::Object* target)
{
    ctor(target, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::ref::WeakReference::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ref.WeakReference", 27);
    return c;
}

java::lang::Class* java::lang::ref::WeakReference::getClass0()
{
    return class_();
}

