// Generated from /runtime/java/lang/Byte.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class java::lang::Byte final
    : public Number
    , public Comparable
{

public:
    typedef Number super;

private:
    static Class* TYPE_;
    int8_t value {  };
protected:
    void ctor(int8_t value);

public:
    static Byte* valueOf(int8_t value);
    bool equals(Object* o) override;
    int32_t hashCode() override;
    String* toString() override;
    int32_t compareTo(Byte* o);
    static String* toString(int8_t v, int32_t radix);
    static String* toString(int8_t v);
    static int8_t parseByte(String* s);
    int8_t byteValue() override;
    int16_t shortValue() override;
    int32_t intValue() override;
    int64_t longValue() override;
    float floatValue() override;
    double doubleValue() override;

    // Generated
    Byte(int8_t value);
protected:
    Byte(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual int32_t compareTo(Object* o) override;
    static Class*& TYPE();

private:
    virtual ::java::lang::Class* getClass0();
};
