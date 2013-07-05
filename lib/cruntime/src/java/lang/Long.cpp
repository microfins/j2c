// Generated from /runtime/java/lang/Long.java
#include <java/lang/Long.hpp>

#include <avian/Classes.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/NumberFormatException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
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

java::lang::Long::Long(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Long::Long(int64_t value) 
    : Long(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

java::lang::Long::Long(String* s) 
    : Long(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int64_t java::lang::Long::MIN_VALUE;

constexpr int64_t java::lang::Long::MAX_VALUE;

java::lang::Class*& java::lang::Long::TYPE()
{
    clinit();
    return TYPE_;
}
java::lang::Class* java::lang::Long::TYPE_;

void java::lang::Long::ctor(int64_t value)
{
    super::ctor();
    this->value = value;
}

void java::lang::Long::ctor(String* s)
{
    super::ctor();
    this->value = parseLong(s);
}

java::lang::Long* java::lang::Long::valueOf(String* value)
{
    clinit();
    return new Long(value);
}

java::lang::Long* java::lang::Long::valueOf(int64_t value)
{
    clinit();
    return new Long(value);
}

int32_t java::lang::Long::compareTo(Long* o)
{
    return value > npc(o)->value ? int32_t(1) : (value < npc(o)->value ? -int32_t(1) : int32_t(0));
}

int32_t java::lang::Long::compareTo(Object* o)
{ 
    return compareTo(dynamic_cast< Long* >(o));
}

bool java::lang::Long::equals(Object* o)
{
    return dynamic_cast< Long* >(o) != nullptr && npc((java_cast< Long* >(o)))->value == value;
}

int32_t java::lang::Long::hashCode()
{
    return static_cast< int32_t >(((value >> int32_t(32)) ^ (value & int32_t(255))));
}

java::lang::String* java::lang::Long::toString()
{
    return String::valueOf(value);
}

java::lang::String* java::lang::Long::toString(int64_t v, int32_t radix)
{
    clinit();
    if(radix < 1 || radix > 36) {
        throw new IllegalArgumentException(::java::lang::StringBuilder().append(u"radix "_j)->append(radix)
            ->append(u" not in [1,36]"_j)->toString());
    }
    if(v == 0) {
        return u"0"_j;
    }
    auto negative = v < 0;
    auto size = (negative ? int32_t(1) : int32_t(0));
    for (auto n = v; n != 0; n /= radix) 
                ++size;

    auto array = new ::char16_tArray(size);
    auto i = size - int32_t(1);
    for (auto n = v; n != 0; n /= radix) {
        auto digit = n % radix;
        if(negative)
            digit = -digit;

        if(digit >= 0 && digit <= 9) {
            (*array)[i] = static_cast< char16_t >((u'0' + digit));
        } else {
            (*array)[i] = static_cast< char16_t >((u'a' + (digit - int32_t(10))));
        }
        --i;
    }
    if(negative) {
        (*array)[i] = u'-';
    }
    return new String(array, int32_t(0), size, false);
}

java::lang::String* java::lang::Long::toString(int64_t v)
{
    clinit();
    return toString(v, 10);
}

java::lang::String* java::lang::Long::toHexString(int64_t v)
{
    clinit();
    return toString(v, 16);
}

java::lang::String* java::lang::Long::toOctalString(int64_t v)
{
    clinit();
    return toString(v, 8);
}

java::lang::String* java::lang::Long::toBinaryString(int64_t v)
{
    clinit();
    return toString(v, 2);
}

int8_t java::lang::Long::byteValue()
{
    return static_cast< int8_t >(value);
}

int16_t java::lang::Long::shortValue()
{
    return static_cast< int16_t >(value);
}

int32_t java::lang::Long::intValue()
{
    return static_cast< int32_t >(value);
}

int64_t java::lang::Long::longValue()
{
    return value;
}

float java::lang::Long::floatValue()
{
    return static_cast< float >(value);
}

double java::lang::Long::doubleValue()
{
    return static_cast< double >(value);
}

int32_t java::lang::Long::signum(int64_t v)
{
    clinit();
    if(v == 0)
        return 0;
    else if(v > 0)
        return 1;
    else
        return -int32_t(1);
}

int64_t java::lang::Long::pow(int64_t a, int64_t b)
{
    clinit();
    int64_t c = int32_t(1);
    for (auto i = int32_t(0); i < b; ++i) 
                c *= a;

    return c;
}

int64_t java::lang::Long::parseLong(String* s)
{
    clinit();
    return parseLong(s, 10);
}

int64_t java::lang::Long::parseLong(String* s, int32_t radix)
{
    clinit();
    auto i = int32_t(0);
    int64_t number = int32_t(0);
    auto negative = npc(s)->startsWith(u"-"_j);
    auto length = npc(s)->length();
    if(negative) {
        i = 1;
        --length;
    }
    auto factor = pow(radix, length - int32_t(1));
    for (; i < npc(s)->length(); ++i) {
        auto c = npc(s)->charAt(i);
        auto digit = Character::digit(c, radix);
        if(digit >= 0) {
            number += digit * factor;
            factor /= radix;
        } else {
            throw new NumberFormatException(::java::lang::StringBuilder().append(u"invalid character "_j)->append(c)
                ->append(u" code "_j)
                ->append(static_cast< int32_t >(c))->toString());
        }
    }
    if(negative) {
        number = -number;
    }
    return number;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Long::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Long", 14);
    return c;
}

void java::lang::Long::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        TYPE_ = ::avian::Classes::forCanonicalName(u"J"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::lang::Long::getClass0()
{
    return class_();
}

