// Generated from /runtime/java/lang/Byte.java
#include <java/lang/Byte.hpp>

#include <avian/Classes.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>
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

java::lang::Byte::Byte(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Byte::Byte(int8_t value) 
    : Byte(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

java::lang::Class*& java::lang::Byte::TYPE()
{
    clinit();
    return TYPE_;
}
java::lang::Class* java::lang::Byte::TYPE_;

void java::lang::Byte::ctor(int8_t value)
{
    super::ctor();
    this->value = value;
}

java::lang::Byte* java::lang::Byte::valueOf(int8_t value)
{
    clinit();
    return new Byte(value);
}

bool java::lang::Byte::equals(Object* o)
{
    return dynamic_cast< Byte* >(o) != nullptr && npc((java_cast< Byte* >(o)))->value == value;
}

int32_t java::lang::Byte::hashCode()
{
    return value;
}

java::lang::String* java::lang::Byte::toString()
{
    return toString(value);
}

int32_t java::lang::Byte::compareTo(Byte* o)
{
    return value - npc(o)->value;
}

int32_t java::lang::Byte::compareTo(Object* o)
{ 
    return compareTo(dynamic_cast< Byte* >(o));
}

java::lang::String* java::lang::Byte::toString(int8_t v, int32_t radix)
{
    clinit();
    return Long::toString(v, radix);
}

java::lang::String* java::lang::Byte::toString(int8_t v)
{
    clinit();
    return toString(v, 10);
}

int8_t java::lang::Byte::parseByte(String* s)
{
    clinit();
    return static_cast< int8_t >(Integer::parseInt(s));
}

int8_t java::lang::Byte::byteValue()
{
    return value;
}

int16_t java::lang::Byte::shortValue()
{
    return value;
}

int32_t java::lang::Byte::intValue()
{
    return value;
}

int64_t java::lang::Byte::longValue()
{
    return value;
}

float java::lang::Byte::floatValue()
{
    return static_cast< float >(value);
}

double java::lang::Byte::doubleValue()
{
    return static_cast< double >(value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Byte::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Byte", 14);
    return c;
}

void java::lang::Byte::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        TYPE_ = ::avian::Classes::forCanonicalName(u"B"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::lang::Byte::getClass0()
{
    return class_();
}

