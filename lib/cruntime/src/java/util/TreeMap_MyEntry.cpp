// Generated from /runtime/java/util/TreeMap.java
#include <java/util/TreeMap_MyEntry.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Object.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

java::util::TreeMap_MyEntry::TreeMap_MyEntry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::TreeMap_MyEntry::TreeMap_MyEntry(::java::lang::Object* key, ::java::lang::Object* value) 
    : TreeMap_MyEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor(key,value);
}

void java::util::TreeMap_MyEntry::ctor(::java::lang::Object* key, ::java::lang::Object* value)
{
    super::ctor();
    this->key = key;
    this->value = value;
}

java::lang::Object* java::util::TreeMap_MyEntry::getKey()
{
    return java_cast< ::java::lang::Object* >(key);
}

java::lang::Object* java::util::TreeMap_MyEntry::getValue()
{
    return java_cast< ::java::lang::Object* >(value);
}

java::lang::Object* java::util::TreeMap_MyEntry::setValue(::java::lang::Object* value)
{
    auto old = java_cast< ::java::lang::Object* >(this->value);
    this->value = value;
    return old;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TreeMap_MyEntry::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TreeMap.MyEntry", 25);
    return c;
}

java::lang::Class* java::util::TreeMap_MyEntry::getClass0()
{
    return class_();
}

