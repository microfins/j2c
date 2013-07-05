// Generated from /runtime/java/lang/ref/PhantomReference.java
#include <java/lang/ref/PhantomReference.hpp>

#include <java/lang/Object.hpp>
#include <java/lang/ref/ReferenceQueue.hpp>

java::lang::ref::PhantomReference::PhantomReference(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ref::PhantomReference::PhantomReference(::java::lang::Object* target, ReferenceQueue* queue) 
    : PhantomReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(target,queue);
}

java::lang::ref::PhantomReference::PhantomReference(::java::lang::Object* target) 
    : PhantomReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(target);
}

void java::lang::ref::PhantomReference::ctor(::java::lang::Object* target, ReferenceQueue* queue)
{
    super::ctor(target, queue);
}

void java::lang::ref::PhantomReference::ctor(::java::lang::Object* target)
{
    ctor(target, nullptr);
}

java::lang::Object* java::lang::ref::PhantomReference::get()
{
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::ref::PhantomReference::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ref.PhantomReference", 30);
    return c;
}

java::lang::Class* java::lang::ref::PhantomReference::getClass0()
{
    return class_();
}

