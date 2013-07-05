// Generated from /runtime/java/math/MathContext.java
#include <java/math/MathContext.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/math/RoundingMode.hpp>

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

java::math::MathContext::MathContext(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::math::MathContext::MathContext(int32_t precision, RoundingMode* roundingMode) 
    : MathContext(*static_cast< ::default_init_tag* >(0))
{
    ctor(precision,roundingMode);
}

java::math::MathContext::MathContext(int32_t precision) 
    : MathContext(*static_cast< ::default_init_tag* >(0))
{
    ctor(precision);
}

java::math::MathContext*& java::math::MathContext::DECIMAL32()
{
    clinit();
    return DECIMAL32_;
}
java::math::MathContext* java::math::MathContext::DECIMAL32_;

java::math::MathContext*& java::math::MathContext::DECIMAL64()
{
    clinit();
    return DECIMAL64_;
}
java::math::MathContext* java::math::MathContext::DECIMAL64_;

java::math::MathContext*& java::math::MathContext::DECIMAL128()
{
    clinit();
    return DECIMAL128_;
}
java::math::MathContext* java::math::MathContext::DECIMAL128_;

java::math::MathContext*& java::math::MathContext::UNLIMITED()
{
    clinit();
    return UNLIMITED_;
}
java::math::MathContext* java::math::MathContext::UNLIMITED_;

void java::math::MathContext::ctor(int32_t precision, RoundingMode* roundingMode)
{
    super::ctor();
    if(precision < 0)
        throw new ::java::lang::IllegalArgumentException();

    if(roundingMode == nullptr)
        throw new ::java::lang::NullPointerException();

    this->precision = precision;
    this->roundingMode = roundingMode;
}

void java::math::MathContext::ctor(int32_t precision)
{
    ctor(precision, RoundingMode::HALF_UP);
}

int32_t java::math::MathContext::getPrecision()
{
    return precision;
}

java::math::RoundingMode* java::math::MathContext::getRoundingMode()
{
    return roundingMode;
}

bool java::math::MathContext::equals(::java::lang::Object* that)
{
    return (dynamic_cast< MathContext* >(that) != nullptr) && (precision == npc((java_cast< MathContext* >(that)))->getPrecision()) && (roundingMode == npc((java_cast< MathContext* >(that)))->getRoundingMode());
}

int32_t java::math::MathContext::hashCode()
{
    return npc(roundingMode)->ordinal() | (precision << int32_t(4));
}

java::lang::String*& java::math::MathContext::precisionString()
{
    clinit();
    return precisionString_;
}
java::lang::String* java::math::MathContext::precisionString_;

java::lang::String*& java::math::MathContext::roundingModeString()
{
    clinit();
    return roundingModeString_;
}
java::lang::String* java::math::MathContext::roundingModeString_;

java::lang::String* java::math::MathContext::toString()
{
    auto sb = new ::java::lang::StringBuilder(int32_t(48));
    npc(npc(sb)->append(precisionString_))->append(precision);
    npc(npc(sb)->append(roundingModeString_))->append(static_cast< ::java::lang::Object* >(roundingMode));
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::math::MathContext::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.math.MathContext", 21);
    return c;
}

void java::math::MathContext::clinit()
{
struct string_init_ {
    string_init_() {
    precisionString_ = u"precision="_j;
    roundingModeString_ = u" roundingMode="_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        DECIMAL32_ = new MathContext(int32_t(7), RoundingMode::HALF_EVEN);
        DECIMAL64_ = new MathContext(int32_t(16), RoundingMode::HALF_EVEN);
        DECIMAL128_ = new MathContext(int32_t(34), RoundingMode::HALF_EVEN);
        UNLIMITED_ = new MathContext(int32_t(0), RoundingMode::HALF_UP);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::math::MathContext::getClass0()
{
    return class_();
}

