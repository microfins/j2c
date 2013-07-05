// Generated from /runtime/java/lang/reflect/Modifier.java
#include <java/lang/reflect/Modifier.hpp>

java::lang::reflect::Modifier::Modifier(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::reflect::Modifier::Modifier() 
    : Modifier(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t java::lang::reflect::Modifier::PUBLIC;

constexpr int32_t java::lang::reflect::Modifier::PRIVATE;

constexpr int32_t java::lang::reflect::Modifier::PROTECTED;

constexpr int32_t java::lang::reflect::Modifier::STATIC;

constexpr int32_t java::lang::reflect::Modifier::FINAL;

constexpr int32_t java::lang::reflect::Modifier::SUPER;

constexpr int32_t java::lang::reflect::Modifier::SYNCHRONIZED;

constexpr int32_t java::lang::reflect::Modifier::VOLATILE;

constexpr int32_t java::lang::reflect::Modifier::TRANSIENT;

constexpr int32_t java::lang::reflect::Modifier::NATIVE;

constexpr int32_t java::lang::reflect::Modifier::INTERFACE;

constexpr int32_t java::lang::reflect::Modifier::ABSTRACT;

constexpr int32_t java::lang::reflect::Modifier::STRICT;

void java::lang::reflect::Modifier::ctor()
{
    super::ctor();
}

bool java::lang::reflect::Modifier::isPublic(int32_t v)
{
    clinit();
    return (v & PUBLIC) != 0;
}

bool java::lang::reflect::Modifier::isPrivate(int32_t v)
{
    clinit();
    return (v & PRIVATE) != 0;
}

bool java::lang::reflect::Modifier::isProtected(int32_t v)
{
    clinit();
    return (v & PROTECTED) != 0;
}

bool java::lang::reflect::Modifier::isStatic(int32_t v)
{
    clinit();
    return (v & STATIC) != 0;
}

bool java::lang::reflect::Modifier::isFinal(int32_t v)
{
    clinit();
    return (v & FINAL) != 0;
}

bool java::lang::reflect::Modifier::isSuper(int32_t v)
{
    clinit();
    return (v & SUPER) != 0;
}

bool java::lang::reflect::Modifier::isNative(int32_t v)
{
    clinit();
    return (v & NATIVE) != 0;
}

bool java::lang::reflect::Modifier::isAbstract(int32_t v)
{
    clinit();
    return (v & ABSTRACT) != 0;
}

bool java::lang::reflect::Modifier::isInterface(int32_t v)
{
    clinit();
    return (v & INTERFACE) != 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::reflect::Modifier::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.reflect.Modifier", 26);
    return c;
}

java::lang::Class* java::lang::reflect::Modifier::getClass0()
{
    return class_();
}

