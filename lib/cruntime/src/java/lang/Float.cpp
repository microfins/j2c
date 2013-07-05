// Generated from /runtime/java/lang/Float.java
#include <java/lang/Float.hpp>

#include <avian/Classes.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/NumberFormatException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <Array.hpp>

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

java::lang::Float::Float(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Float::Float(String* value) 
    : Float(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

java::lang::Float::Float(float value) 
    : Float(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

java::lang::Class*& java::lang::Float::TYPE()
{
    clinit();
    return TYPE_;
}
java::lang::Class* java::lang::Float::TYPE_;

constexpr int32_t java::lang::Float::EXP_BIT_MASK;

constexpr int32_t java::lang::Float::SIGNIF_BIT_MASK;

constexpr float java::lang::Float::NEGATIVE_INFINITY;

constexpr float java::lang::Float::POSITIVE_INFINITY;

constexpr float java::lang::Float::NaN;

void java::lang::Float::ctor(String* value)
{
    super::ctor();
    this->value = parseFloat(value);
}

void java::lang::Float::ctor(float value)
{
    super::ctor();
    this->value = value;
}

java::lang::Float* java::lang::Float::valueOf(float value)
{
    clinit();
    return new Float(value);
}

java::lang::Float* java::lang::Float::valueOf(String* s)
{
    clinit();
    return new Float(s);
}

bool java::lang::Float::equals(Object* o)
{
    return dynamic_cast< Float* >(o) != nullptr && npc((java_cast< Float* >(o)))->value == value;
}

int32_t java::lang::Float::hashCode()
{
    return floatToRawIntBits(value);
}

java::lang::String* java::lang::Float::toString()
{
    return toString(value);
}

java::lang::String* java::lang::Float::toString(float v)
{
    clinit();
    return Double::toString(v);
}

int8_t java::lang::Float::byteValue()
{
    return static_cast< int8_t >(value);
}

int16_t java::lang::Float::shortValue()
{
    return static_cast< int16_t >(value);
}

int32_t java::lang::Float::intValue()
{
    return static_cast< int32_t >(value);
}

int64_t java::lang::Float::longValue()
{
    return static_cast< int64_t >(value);
}

float java::lang::Float::floatValue()
{
    return value;
}

double java::lang::Float::doubleValue()
{
    return static_cast< double >(value);
}

bool java::lang::Float::isInfinite()
{
    return isInfinite(value);
}

bool java::lang::Float::isNaN()
{
    return isNaN(value);
}

float java::lang::Float::parseFloat(String* s)
{
    clinit();
    auto numRead = new ::int32_tArray(int32_t(1));
    auto f = floatFromString(s, numRead);
    if((*numRead)[int32_t(0)] == 1) {
        return f;
    } else {
        throw new NumberFormatException(s);
    }
}

int32_t java::lang::Float::floatToIntBits(float value)
{
    clinit();
    auto result = floatToRawIntBits(value);
    if(((result & EXP_BIT_MASK) == EXP_BIT_MASK) && (result & SIGNIF_BIT_MASK) != 0) {
        result = 2143289344;
    }
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Float::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Float", 15);
    return c;
}

void java::lang::Float::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        TYPE_ = ::avian::Classes::forCanonicalName(u"F"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::lang::Float::getClass0()
{
    return class_();
}

