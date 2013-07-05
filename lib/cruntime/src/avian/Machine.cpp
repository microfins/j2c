// Generated from /runtime/avian/Machine.java
#include <avian/Machine.hpp>

#include <sun/misc/Unsafe.hpp>

avian::Machine::Machine(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::Machine::Machine()
    : Machine(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

sun::misc::Unsafe*& avian::Machine::unsafe()
{
    clinit();
    return unsafe_;
}
sun::misc::Unsafe* avian::Machine::unsafe_;

sun::misc::Unsafe* avian::Machine::getUnsafe()
{
    clinit();
    return unsafe_;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::Machine::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.Machine", 13);
    return c;
}

void avian::Machine::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        unsafe_ = ::sun::misc::Unsafe::getUnsafe();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* avian::Machine::getClass0()
{
    return class_();
}

