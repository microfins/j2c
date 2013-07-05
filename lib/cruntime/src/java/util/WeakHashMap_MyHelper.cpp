// Generated from /runtime/java/util/WeakHashMap.java
#include <java/util/WeakHashMap_MyHelper.hpp>

#include <java/lang/Object.hpp>
#include <java/util/HashMap_Cell.hpp>
#include <java/util/WeakHashMap_MyCell.hpp>
#include <java/util/WeakHashMap.hpp>

java::util::WeakHashMap_MyHelper::WeakHashMap_MyHelper(WeakHashMap *WeakHashMap_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , WeakHashMap_this(WeakHashMap_this)
{
    clinit();
}

java::util::WeakHashMap_MyHelper::WeakHashMap_MyHelper(WeakHashMap *WeakHashMap_this)
    : WeakHashMap_MyHelper(WeakHashMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::HashMap_Cell* java::util::WeakHashMap_MyHelper::make(::java::lang::Object* key, ::java::lang::Object* value, HashMap_Cell* next)
{
    return new WeakHashMap_MyCell(key, WeakHashMap_this->queue, value, next, hash(static_cast< ::java::lang::Object* >(key)));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::WeakHashMap_MyHelper::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.WeakHashMap.MyHelper", 30);
    return c;
}

java::lang::Class* java::util::WeakHashMap_MyHelper::getClass0()
{
    return class_();
}

