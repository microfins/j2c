// Generated from /runtime/java/lang/Boolean.java
#include <java/lang/Boolean.hpp>

#include <avian/Classes.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::lang::Boolean::Boolean(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Boolean::Boolean(bool value) 
    : Boolean(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

java::lang::Boolean::Boolean(String* s) 
    : Boolean(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

java::lang::Class*& java::lang::Boolean::TYPE()
{
    clinit();
    return TYPE_;
}
java::lang::Class* java::lang::Boolean::TYPE_;

java::lang::Boolean*& java::lang::Boolean::FALSE()
{
    clinit();
    return FALSE_;
}
java::lang::Boolean* java::lang::Boolean::FALSE_;

java::lang::Boolean*& java::lang::Boolean::TRUE()
{
    clinit();
    return TRUE_;
}
java::lang::Boolean* java::lang::Boolean::TRUE_;

void java::lang::Boolean::ctor(bool value)
{
    super::ctor();
    this->value = value;
}

void java::lang::Boolean::ctor(String* s)
{
    super::ctor();
    this->value = npc(u"true"_j)->equals(static_cast< Object* >(s));
}

java::lang::Boolean* java::lang::Boolean::valueOf(bool value)
{
    clinit();
    return (value ? Boolean::TRUE_ : Boolean::FALSE_);
}

java::lang::Boolean* java::lang::Boolean::valueOf(String* s)
{
    clinit();
    npc(Boolean::TRUE_)->booleanValue();
    return (npc(u"true"_j)->equals(static_cast< Object* >(s)) ? Boolean::TRUE_ : Boolean::FALSE_);
}

int32_t java::lang::Boolean::compareTo(Boolean* o)
{
    return (value ? (npc(o)->value ? int32_t(0) : int32_t(1)) : (npc(o)->value ? -int32_t(1) : int32_t(0)));
}

int32_t java::lang::Boolean::compareTo(Object* o)
{ 
    return compareTo(dynamic_cast< Boolean* >(o));
}

bool java::lang::Boolean::equals(Object* o)
{
    return dynamic_cast< Boolean* >(o) != nullptr && npc((java_cast< Boolean* >(o)))->value == value;
}

int32_t java::lang::Boolean::hashCode()
{
    return (value ? int32_t(1) : int32_t(0));
}

java::lang::String* java::lang::Boolean::toString()
{
    return toString(value);
}

java::lang::String* java::lang::Boolean::toString(bool v)
{
    clinit();
    return (v ? u"true"_j : u"false"_j);
}

bool java::lang::Boolean::booleanValue()
{
    return value;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Boolean::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Boolean", 17);
    return c;
}

void java::lang::Boolean::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        TYPE_ = ::avian::Classes::forCanonicalName(u"Z"_j);
        FALSE_ = new Boolean(false);
        TRUE_ = new Boolean(true);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::lang::Boolean::getClass0()
{
    return class_();
}

