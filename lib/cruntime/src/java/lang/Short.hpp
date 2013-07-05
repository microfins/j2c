// Generated from /runtime/java/lang/Short.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class java::lang::Short final
    : public Number
    , public Comparable
{

public:
    typedef Number super;

private:
    static Class* TYPE_;

public:
    static constexpr int16_t MAX_VALUE { int16_t(32767) };

private:
    int16_t value {  };
protected:
    void ctor(int16_t value);

public:
    static Short* valueOf(int16_t value);
    int32_t compareTo(Short* o);
    bool equals(Object* o) override;
    int32_t hashCode() override;
    String* toString() override;
    static String* toString(int16_t v, int32_t radix);
    static String* toString(int16_t v);
    int8_t byteValue() override;
    int16_t shortValue() override;
    int32_t intValue() override;
    int64_t longValue() override;
    float floatValue() override;
    double doubleValue() override;

    // Generated
    Short(int16_t value);
protected:
    Short(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual int32_t compareTo(Object* o) override;
    static Class*& TYPE();

private:
    virtual ::java::lang::Class* getClass0();
};
