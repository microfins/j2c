// Generated from /runtime/java/lang/Float.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Number.hpp>

struct default_init_tag;

class java::lang::Float final
    : public Number
{

public:
    typedef Number super;

private:
    static Class* TYPE_;
    static constexpr int32_t EXP_BIT_MASK { int32_t(2139095040) };
    static constexpr int32_t SIGNIF_BIT_MASK { int32_t(8388607) };

public:
    static constexpr float NEGATIVE_INFINITY { (-std::numeric_limits<float>::infinity()) };
    static constexpr float POSITIVE_INFINITY { std::numeric_limits<float>::infinity() };
    static constexpr float NaN { std::numeric_limits<float>::quiet_NaN() };

private:
    float value {  };
protected:
    void ctor(String* value);
    void ctor(float value);

public:
    static Float* valueOf(float value);
    static Float* valueOf(String* s);
    bool equals(Object* o) override;
    int32_t hashCode() override;
    String* toString() override;
    static String* toString(float v);
    int8_t byteValue() override;
    int16_t shortValue() override;
    int32_t intValue() override;
    int64_t longValue() override;
    float floatValue() override;
    double doubleValue() override;
    bool isInfinite();
    bool isNaN();
    static float parseFloat(String* s);
    static int32_t floatToIntBits(float value);
    static int32_t floatToRawIntBits(float value);
    static float intBitsToFloat(int32_t bits);
    static bool isInfinite(float value);
    static bool isNaN(float value);
    static float floatFromString(String* s, ::int32_tArray* numRead);

    // Generated
    Float(String* value);
    Float(float value);
protected:
    Float(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static Class*& TYPE();

private:
    virtual ::java::lang::Class* getClass0();
};
