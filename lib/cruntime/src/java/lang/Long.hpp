// Generated from /runtime/java/lang/Long.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class java::lang::Long final
    : public Number
    , public Comparable
{

public:
    typedef Number super;
    static constexpr int64_t MIN_VALUE { int64_t(-0x7fffffffffffffffLL-1) };
    static constexpr int64_t MAX_VALUE { int64_t(9223372036854775807LL) };

private:
    static Class* TYPE_;
    int64_t value {  };
protected:
    void ctor(int64_t value);
    void ctor(String* s);

public:
    static Long* valueOf(String* value);
    static Long* valueOf(int64_t value);
    int32_t compareTo(Long* o);
    bool equals(Object* o) override;
    int32_t hashCode() override;
    String* toString() override;
    static String* toString(int64_t v, int32_t radix);
    static String* toString(int64_t v);
    static String* toHexString(int64_t v);
    static String* toOctalString(int64_t v);
    static String* toBinaryString(int64_t v);
    int8_t byteValue() override;
    int16_t shortValue() override;
    int32_t intValue() override;
    int64_t longValue() override;
    float floatValue() override;
    double doubleValue() override;
    static int32_t signum(int64_t v);

private:
    static int64_t pow(int64_t a, int64_t b);

public:
    static int64_t parseLong(String* s);
    static int64_t parseLong(String* s, int32_t radix);

    // Generated
    Long(int64_t value);
    Long(String* s);
protected:
    Long(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual int32_t compareTo(Object* o) override;
    static Class*& TYPE();

private:
    virtual ::java::lang::Class* getClass0();
};
