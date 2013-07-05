// Generated from /runtime/java/lang/ref/SoftReference.java
#include <java/lang/ref/SoftReference.hpp>

#include <java/lang/Object.hpp>
#include <java/lang/ref/ReferenceQueue.hpp>

java::lang::ref::SoftReference::SoftReference(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ref::SoftReference::SoftReference(::java::lang::Object* target, ReferenceQueue* queue) 
    : SoftReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(target,queue);
}

java::lang::ref::SoftReference::SoftReference(::java::lang::Object* target) 
    : SoftReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(target);
}

void java::lang::ref::SoftReference::ctor(::java::lang::Object* target, ReferenceQueue* queue)
{
    super::ctor(target, queue);
}

void java::lang::ref::SoftReference::ctor(::java::lang::Object* target)
{
    ctor(target, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::ref::SoftReference::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.ref.SoftReference", 27);
    return c;
}

java::lang::Class* java::lang::ref::SoftReference::getClass0()
{
    return class_();
}

