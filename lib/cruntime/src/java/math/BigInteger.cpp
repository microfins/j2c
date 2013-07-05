// Generated from /runtime/java/math/BigInteger.java
#include <java/math/BigInteger.hpp>

#include <java/lang/Long.hpp>
#include <Array.hpp>

java::math::BigInteger::BigInteger(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::math::BigInteger::BigInteger(int32_t sign, int64_t value) 
    : BigInteger(*static_cast< ::default_init_tag* >(0))
{
    ctor(sign,value);
}

void java::math::BigInteger::ctor(int32_t sign, int64_t value)
{
    super::ctor();
    this->sign = sign;
    auto upperBits = static_cast< int32_t >((static_cast<int64_t>(static_cast<uint64_t>(value) >> int32_t(32))));
    if(upperBits == 0)
        this->value = new ::int32_tArray({static_cast< int32_t >(value)});
    else
        this->value = new ::int32_tArray({
            static_cast< int32_t >(value)
            , upperBits
        });
}

java::math::BigInteger*& java::math::BigInteger::ZERO()
{
    clinit();
    return ZERO_;
}
java::math::BigInteger* java::math::BigInteger::ZERO_;

java::math::BigInteger*& java::math::BigInteger::ONE()
{
    clinit();
    return ONE_;
}
java::math::BigInteger* java::math::BigInteger::ONE_;

java::math::BigInteger*& java::math::BigInteger::TEN()
{
    clinit();
    return TEN_;
}
java::math::BigInteger* java::math::BigInteger::TEN_;

java::math::BigInteger* java::math::BigInteger::valueOf(int64_t num)
{
    clinit();
    auto signum = ::java::lang::Long::signum(num);
    if(signum == 0)
        return BigInteger::ZERO_;
    else if(signum > 0)
        return new BigInteger(signum, num);
    else
        return new BigInteger(signum, -num);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::math::BigInteger::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.math.BigInteger", 20);
    return c;
}

void java::math::BigInteger::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        ZERO_ = new BigInteger(int32_t(0), int32_t(0));
        ONE_ = new BigInteger(int32_t(1), int32_t(1));
        TEN_ = new BigInteger(int32_t(1), int32_t(10));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::math::BigInteger::getClass0()
{
    return class_();
}

