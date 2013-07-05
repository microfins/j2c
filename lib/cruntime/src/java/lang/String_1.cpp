// Generated from /runtime/java/lang/String.java
#include <java/lang/String_1.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::lang::String_1::String_1()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

int32_t java::lang::String_1::compare(String* a, String* b)
{
    return npc(a)->compareToIgnoreCase(b);
}

int32_t java::lang::String_1::compare(Object* o1, Object* o2)
{ 
    return compare(dynamic_cast< String* >(o1), dynamic_cast< String* >(o2));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::String_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* java::lang::String_1::getClass0()
{
    return class_();
}

