// Generated from /runtime/java/lang/Number.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::Number
    : public virtual Object
{

public:
    typedef Object super;
    virtual int8_t byteValue() = 0;
    virtual int16_t shortValue() = 0;
    virtual int32_t intValue() = 0;
    virtual int64_t longValue() = 0;
    virtual float floatValue() = 0;
    virtual double doubleValue() = 0;

    // Generated
    Number();
protected:
    Number(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
