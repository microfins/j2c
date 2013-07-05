// Generated from /runtime/java/lang/reflect/Member.java
#include <java/lang/reflect/Member.hpp>

constexpr int32_t java::lang::reflect::Member::PUBLIC;

constexpr int32_t java::lang::reflect::Member::DECLARED;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::reflect::Member::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.reflect.Member", 24);
    return c;
}

