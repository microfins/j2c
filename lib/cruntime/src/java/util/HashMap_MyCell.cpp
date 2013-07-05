// Generated from /runtime/java/util/HashMap.java
#include <java/util/HashMap_MyCell.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/HashMap_Cell.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

java::util::HashMap_MyCell::HashMap_MyCell(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::HashMap_MyCell::HashMap_MyCell(::java::lang::Object* key, ::java::lang::Object* value, HashMap_Cell* next, int32_t hashCode) 
    : HashMap_MyCell(*static_cast< ::default_init_tag* >(0))
{
    ctor(key,value,next,hashCode);
}

void java::util::HashMap_MyCell::ctor(::java::lang::Object* key, ::java::lang::Object* value, HashMap_Cell* next, int32_t hashCode)
{
    super::ctor();
    this->key = key;
    this->value = value;
    this->next_ = next;
    this->hashCode_ = hashCode;
}

java::lang::Object* java::util::HashMap_MyCell::getKey()
{
    return java_cast< ::java::lang::Object* >(key);
}

java::lang::Object* java::util::HashMap_MyCell::getValue()
{
    return java_cast< ::java::lang::Object* >(value);
}

java::lang::Object* java::util::HashMap_MyCell::setValue(::java::lang::Object* value)
{
    auto old = java_cast< ::java::lang::Object* >(this->value);
    this->value = value;
    return old;
}

java::util::HashMap_Cell* java::util::HashMap_MyCell::next()
{
    return next_;
}

void java::util::HashMap_MyCell::setNext(HashMap_Cell* next)
{
    this->next_ = next;
}

int32_t java::util::HashMap_MyCell::hashCode()
{
    return hashCode_;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::HashMap_MyCell::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.HashMap.MyCell", 24);
    return c;
}

java::lang::Class* java::util::HashMap_MyCell::getClass0()
{
    return class_();
}

