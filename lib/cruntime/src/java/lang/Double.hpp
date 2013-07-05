// Generated from /runtime/java/lang/Double.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Number.hpp>

struct default_init_tag;

class java::lang::Double final
    : public Number
{

public:
    typedef Number super;

private:
    static Class* TYPE_;

public:
    static constexpr double NEGATIVE_INFINITY { (-std::numeric_limits<double>::infinity()) };
    static constexpr double POSITIVE_INFINITY { std::numeric_limits<double>::infinity() };
    static constexpr double NaN { std::numeric_limits<double>::quiet_NaN() };

private:
    double value {  };
protected:
    void ctor(String* value);
    void ctor(double value);

public:
    static Double* valueOf(double value);
    static Double* valueOf(String* s);
    bool equals(Object* o) override;
    int32_t hashCode() override;
    String* toString() override;
    static String* toString(double v);
    int8_t byteValue() override;
    int16_t shortValue() override;
    int32_t intValue() override;
    int64_t longValue() override;
    float floatValue() override;
    double doubleValue() override;
    bool isInfinite();
    bool isNaN();
    static double parseDouble(String* s);
    static int32_t fillBufferWithDouble(double value, ::int8_tArray* buffer, int32_t charCount);
    static int64_t doubleToRawLongBits(double value);
    static double longBitsToDouble(int64_t bits);
    static bool isInfinite(double value);
    static bool isNaN(double value);
    static double doubleFromString(String* s, ::int32_tArray* numRead);

    // Generated
    Double(String* value);
    Double(double value);
protected:
    Double(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static Class*& TYPE();

private:
    virtual ::java::lang::Class* getClass0();
};
