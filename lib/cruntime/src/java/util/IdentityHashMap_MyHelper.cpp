// Generated from /runtime/java/util/IdentityHashMap.java
#include <java/util/IdentityHashMap_MyHelper.hpp>

#include <java/lang/Object.hpp>
#include <java/lang/System.hpp>

java::util::IdentityHashMap_MyHelper::IdentityHashMap_MyHelper(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::IdentityHashMap_MyHelper::IdentityHashMap_MyHelper()
    : IdentityHashMap_MyHelper(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t java::util::IdentityHashMap_MyHelper::hash(::java::lang::Object* a)
{
    return (a == nullptr ? int32_t(0) : ::java::lang::System::identityHashCode(a));
}

bool java::util::IdentityHashMap_MyHelper::equal(::java::lang::Object* a, ::java::lang::Object* b)
{
    return a == b;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::IdentityHashMap_MyHelper::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.IdentityHashMap.MyHelper", 34);
    return c;
}

java::lang::Class* java::util::IdentityHashMap_MyHelper::getClass0()
{
    return class_();
}

