// Generated from /runtime/java/lang/Double.java
#include <java/lang/Double.hpp>

#include <avian/Classes.hpp>
#include <java/lang/ClassCastException.hpp>
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

java::lang::Double::Double(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Double::Double(String* value) 
    : Double(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

java::lang::Double::Double(double value) 
    : Double(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

java::lang::Class*& java::lang::Double::TYPE()
{
    clinit();
    return TYPE_;
}
java::lang::Class* java::lang::Double::TYPE_;

constexpr double java::lang::Double::NEGATIVE_INFINITY;

constexpr double java::lang::Double::POSITIVE_INFINITY;

constexpr double java::lang::Double::NaN;

void java::lang::Double::ctor(String* value)
{
    super::ctor();
    this->value = parseDouble(value);
}

void java::lang::Double::ctor(double value)
{
    super::ctor();
    this->value = value;
}

java::lang::Double* java::lang::Double::valueOf(double value)
{
    clinit();
    return new Double(value);
}

java::lang::Double* java::lang::Double::valueOf(String* s)
{
    clinit();
    return new Double(s);
}

bool java::lang::Double::equals(Object* o)
{
    return dynamic_cast< Double* >(o) != nullptr && npc((java_cast< Double* >(o)))->value == value;
}

int32_t java::lang::Double::hashCode()
{
    auto v = doubleToRawLongBits(value);
    return static_cast< int32_t >(((v >> int32_t(32)) ^ (v & int32_t(255))));
}

java::lang::String* java::lang::Double::toString()
{
    return toString(value);
}

java::lang::String* java::lang::Double::toString(double v)
{
    clinit();
    auto buffer = new ::int8_tArray(int32_t(20));
    auto numChars = fillBufferWithDouble(v, buffer, 20);
    return new String(buffer, int32_t(0), numChars, false);
}

int8_t java::lang::Double::byteValue()
{
    return static_cast< int8_t >(value);
}

int16_t java::lang::Double::shortValue()
{
    return static_cast< int16_t >(value);
}

int32_t java::lang::Double::intValue()
{
    return static_cast< int32_t >(value);
}

int64_t java::lang::Double::longValue()
{
    return static_cast< int64_t >(value);
}

float java::lang::Double::floatValue()
{
    return static_cast< float >(value);
}

double java::lang::Double::doubleValue()
{
    return value;
}

bool java::lang::Double::isInfinite()
{
    return isInfinite(value);
}

bool java::lang::Double::isNaN()
{
    return isNaN(value);
}

double java::lang::Double::parseDouble(String* s)
{
    clinit();
    auto numRead = new ::int32_tArray(int32_t(1));
    auto d = doubleFromString(s, numRead);
    if((*numRead)[int32_t(0)] == 1) {
        return d;
    } else {
        throw new NumberFormatException(s);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Double::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Double", 16);
    return c;
}

void java::lang::Double::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        TYPE_ = ::avian::Classes::forCanonicalName(u"D"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::lang::Double::getClass0()
{
    return class_();
}

