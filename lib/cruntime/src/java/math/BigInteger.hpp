// Generated from /runtime/java/math/BigInteger.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/math/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::math::BigInteger
    : public virtual ::java::lang::Object
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t sign {  };
    ::int32_tArray* value {  };
protected:
    void ctor(int32_t sign, int64_t value);

private:
    static BigInteger* ZERO_;
    static BigInteger* ONE_;
    static BigInteger* TEN_;

public:
    static BigInteger* valueOf(int64_t num);

    // Generated

private:
    BigInteger(int32_t sign, int64_t value);
protected:
    BigInteger(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static BigInteger*& ZERO();
    static BigInteger*& ONE();
    static BigInteger*& TEN();

private:
    virtual ::java::lang::Class* getClass0();
};
