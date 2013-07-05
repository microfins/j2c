// Generated from /runtime/java/lang/Short.java
#include <java/lang/Short.hpp>

#include <avian/Classes.hpp>
#include <java/lang/ClassCastException.hpp>
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

java::lang::Short::Short(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Short::Short(int16_t value) 
    : Short(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

java::lang::Class*& java::lang::Short::TYPE()
{
    clinit();
    return TYPE_;
}
java::lang::Class* java::lang::Short::TYPE_;

constexpr int16_t java::lang::Short::MAX_VALUE;

void java::lang::Short::ctor(int16_t value)
{
    super::ctor();
    this->value = value;
}

java::lang::Short* java::lang::Short::valueOf(int16_t value)
{
    clinit();
    return new Short(value);
}

int32_t java::lang::Short::compareTo(Short* o)
{
    return value - npc(o)->value;
}

int32_t java::lang::Short::compareTo(Object* o)
{ 
    return compareTo(dynamic_cast< Short* >(o));
}

bool java::lang::Short::equals(Object* o)
{
    return dynamic_cast< Short* >(o) != nullptr && npc((java_cast< Short* >(o)))->value == value;
}

int32_t java::lang::Short::hashCode()
{
    return value;
}

java::lang::String* java::lang::Short::toString()
{
    return toString(value);
}

java::lang::String* java::lang::Short::toString(int16_t v, int32_t radix)
{
    clinit();
    return Long::toString(v, radix);
}

java::lang::String* java::lang::Short::toString(int16_t v)
{
    clinit();
    return toString(v, 10);
}

int8_t java::lang::Short::byteValue()
{
    return static_cast< int8_t >(value);
}

int16_t java::lang::Short::shortValue()
{
    return value;
}

int32_t java::lang::Short::intValue()
{
    return value;
}

int64_t java::lang::Short::longValue()
{
    return value;
}

float java::lang::Short::floatValue()
{
    return static_cast< float >(value);
}

double java::lang::Short::doubleValue()
{
    return static_cast< double >(value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Short::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Short", 15);
    return c;
}

void java::lang::Short::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        TYPE_ = ::avian::Classes::forCanonicalName(u"S"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::lang::Short::getClass0()
{
    return class_();
}

