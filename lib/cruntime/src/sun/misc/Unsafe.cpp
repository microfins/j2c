// Generated from /runtime/sun/misc/Unsafe.java
#include <sun/misc/Unsafe.hpp>

sun::misc::Unsafe::Unsafe(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

sun::misc::Unsafe::Unsafe()
    : Unsafe(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void sun::misc::Unsafe::Unsafe_()
{
}

sun::misc::Unsafe*& sun::misc::Unsafe::Instance()
{
    clinit();
    return Instance_;
}
sun::misc::Unsafe* sun::misc::Unsafe::Instance_;

sun::misc::Unsafe* sun::misc::Unsafe::getUnsafe()
{
    clinit();
    return Instance_;
}

void sun::misc::Unsafe::copyMemory(int64_t src, int64_t dst, int64_t count)
{
    copyMemory(nullptr, src, nullptr, dst, count);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* sun::misc::Unsafe::class_()
{
    static ::java::lang::Class* c = ::class_(u"sun.misc.Unsafe", 15);
    return c;
}

void sun::misc::Unsafe::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        Instance_ = new Unsafe();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* sun::misc::Unsafe::getClass0()
{
    return class_();
}

