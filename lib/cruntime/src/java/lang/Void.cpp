// Generated from /runtime/java/lang/Void.java
#include <java/lang/Void.hpp>

#include <avian/Classes.hpp>
#include <java/lang/String.hpp>

java::lang::Void::Void(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Void::Void() 
    : Void(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::Class*& java::lang::Void::TYPE()
{
    clinit();
    return TYPE_;
}
java::lang::Class* java::lang::Void::TYPE_;

void java::lang::Void::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Void::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Void", 14);
    return c;
}

void java::lang::Void::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        TYPE_ = ::avian::Classes::forCanonicalName(u"V"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::lang::Void::getClass0()
{
    return class_();
}

