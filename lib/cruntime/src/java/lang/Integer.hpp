// Generated from /runtime/java/lang/Integer.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class java::lang::Integer final
    : public Number
    , public Comparable
{

public:
    typedef Number super;

private:
    static Class* TYPE_;

public:
    static constexpr int32_t MIN_VALUE { int32_t(-0x7fffffff-1) };
    static constexpr int32_t MAX_VALUE { int32_t(2147483647) };

private:
    int32_t value {  };
protected:
    void ctor(int32_t value);
    void ctor(String* s);

public:
    static Integer* valueOf(int32_t value);
    static Integer* valueOf(String* value);
    bool equals(Object* o) override;
    int32_t hashCode() override;
    int32_t compareTo(Integer* other);
    String* toString() override;
    static String* toString(int32_t v, int32_t radix);
    static String* toString(int32_t v);
    static String* toHexString(int32_t v);
    static String* toOctalString(int32_t v);
    static String* toBinaryString(int32_t v);
    int8_t byteValue() override;
    int16_t shortValue() override;
    int32_t intValue() override;
    int64_t longValue() override;
    float floatValue() override;
    double doubleValue() override;
    static int32_t signum(int32_t v);
    static int32_t bitCount(int32_t v);
    static int32_t reverseBytes(int32_t v);
    static int32_t parseInt(String* s);
    static int32_t parseInt(String* s, int32_t radix);

    // Generated
    Integer(int32_t value);
    Integer(String* s);
protected:
    Integer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual int32_t compareTo(Object* o) override;
    static Class*& TYPE();

private:
    virtual ::java::lang::Class* getClass0();
};
