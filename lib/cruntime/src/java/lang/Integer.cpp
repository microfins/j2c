// Generated from /runtime/java/lang/Integer.java
#include <java/lang/Integer.hpp>

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

java::lang::Integer::Integer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Integer::Integer(int32_t value) 
    : Integer(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

java::lang::Integer::Integer(String* s) 
    : Integer(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

java::lang::Class*& java::lang::Integer::TYPE()
{
    clinit();
    return TYPE_;
}
java::lang::Class* java::lang::Integer::TYPE_;

constexpr int32_t java::lang::Integer::MIN_VALUE;

constexpr int32_t java::lang::Integer::MAX_VALUE;

void java::lang::Integer::ctor(int32_t value)
{
    super::ctor();
    this->value = value;
}

void java::lang::Integer::ctor(String* s)
{
    super::ctor();
    this->value = parseInt(s);
}

java::lang::Integer* java::lang::Integer::valueOf(int32_t value)
{
    clinit();
    return new Integer(value);
}

java::lang::Integer* java::lang::Integer::valueOf(String* value)
{
    clinit();
    return valueOf(parseInt(value));
}

bool java::lang::Integer::equals(Object* o)
{
    return dynamic_cast< Integer* >(o) != nullptr && npc((java_cast< Integer* >(o)))->value == value;
}

int32_t java::lang::Integer::hashCode()
{
    return value;
}

int32_t java::lang::Integer::compareTo(Integer* other)
{
    return value - npc(other)->value;
}

int32_t java::lang::Integer::compareTo(Object* o)
{ 
    return compareTo(dynamic_cast< Integer* >(o));
}

java::lang::String* java::lang::Integer::toString()
{
    return toString(value);
}

java::lang::String* java::lang::Integer::toString(int32_t v, int32_t radix)
{
    clinit();
    return Long::toString(v, radix);
}

java::lang::String* java::lang::Integer::toString(int32_t v)
{
    clinit();
    return toString(v, 10);
}

java::lang::String* java::lang::Integer::toHexString(int32_t v)
{
    clinit();
    return Long::toString((static_cast< int64_t >(v)) & int64_t(4294967295LL), 16);
}

java::lang::String* java::lang::Integer::toOctalString(int32_t v)
{
    clinit();
    return Long::toString((static_cast< int64_t >(v)) & int64_t(4294967295LL), 8);
}

java::lang::String* java::lang::Integer::toBinaryString(int32_t v)
{
    clinit();
    return Long::toString((static_cast< int64_t >(v)) & int64_t(4294967295LL), 2);
}

int8_t java::lang::Integer::byteValue()
{
    return static_cast< int8_t >(value);
}

int16_t java::lang::Integer::shortValue()
{
    return static_cast< int16_t >(value);
}

int32_t java::lang::Integer::intValue()
{
    return value;
}

int64_t java::lang::Integer::longValue()
{
    return value;
}

float java::lang::Integer::floatValue()
{
    return static_cast< float >(value);
}

double java::lang::Integer::doubleValue()
{
    return static_cast< double >(value);
}

int32_t java::lang::Integer::signum(int32_t v)
{
    clinit();
    if(v == 0)
        return 0;
    else if(v > 0)
        return 1;
    else
        return -int32_t(1);
}

int32_t java::lang::Integer::bitCount(int32_t v)
{
    clinit();
    v = v - ((v >> int32_t(1)) & int32_t(1431655765));
    v = (v & int32_t(858993459)) + ((v >> int32_t(2)) & int32_t(858993459));
    return ((v + (v >> int32_t(4)) & int32_t(252645135)) * int32_t(16843009)) >> int32_t(24);
}

int32_t java::lang::Integer::reverseBytes(int32_t v)
{
    clinit();
    auto byte3 = static_cast<int32_t>(static_cast<uint32_t>(v) >> int32_t(24));
    auto byte2 = (static_cast<int32_t>(static_cast<uint32_t>(v) >> int32_t(8))) & int32_t(65280);
    auto byte1 = (v << int32_t(8)) & int32_t(65280);
    auto byte0 = v << int32_t(24);
    return (byte0 | byte1 | byte2| byte3);
}

int32_t java::lang::Integer::parseInt(String* s)
{
    clinit();
    return parseInt(s, 10);
}

int32_t java::lang::Integer::parseInt(String* s, int32_t radix)
{
    clinit();
    return static_cast< int32_t >(Long::parseLong(s, radix));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Integer::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Integer", 17);
    return c;
}

void java::lang::Integer::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        TYPE_ = ::avian::Classes::forCanonicalName(u"I"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::lang::Integer::getClass0()
{
    return class_();
}

