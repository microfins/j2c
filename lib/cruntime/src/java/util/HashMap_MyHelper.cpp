// Generated from /runtime/java/util/HashMap.java
#include <java/util/HashMap_MyHelper.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/HashMap_Cell.hpp>
#include <java/util/HashMap_MyCell.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::HashMap_MyHelper::HashMap_MyHelper(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::HashMap_MyHelper::HashMap_MyHelper()
    : HashMap_MyHelper(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::HashMap_Cell* java::util::HashMap_MyHelper::make(::java::lang::Object* key, ::java::lang::Object* value, HashMap_Cell* next)
{
    return new HashMap_MyCell(key, value, next, hash(key));
}

int32_t java::util::HashMap_MyHelper::hash(::java::lang::Object* a)
{
    return (a == nullptr ? int32_t(0) : npc(a)->hashCode());
}

bool java::util::HashMap_MyHelper::equal(::java::lang::Object* a, ::java::lang::Object* b)
{
    return (a == nullptr && b == nullptr) || (a != nullptr && npc(a)->equals(b));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::HashMap_MyHelper::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.HashMap.MyHelper", 26);
    return c;
}

java::lang::Class* java::util::HashMap_MyHelper::getClass0()
{
    return class_();
}

