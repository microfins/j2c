// Generated from /runtime/avian/VMMethod.java
#include <avian/VMMethod.hpp>

#include <avian/MethodAddendum.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

avian::VMMethod::VMMethod(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::VMMethod::VMMethod()
    : VMMethod(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool avian::VMMethod::hasAnnotations()
{
    return addendum != nullptr && npc(addendum)->annotationTable != nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::VMMethod::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.VMMethod", 14);
    return c;
}

java::lang::Class* avian::VMMethod::getClass0()
{
    return class_();
}

