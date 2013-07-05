// Generated from /runtime/java/lang/reflect/Type.java
#include <java/lang/reflect/Type.hpp>

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::reflect::Type::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.reflect.Type", 22);
    return c;
}

