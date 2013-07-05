// Generated from /runtime/java/math/MathContext.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/math/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::math::MathContext final
    : public virtual ::java::lang::Object
    , public ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    static MathContext* DECIMAL32_;
    static MathContext* DECIMAL64_;
    static MathContext* DECIMAL128_;
    static MathContext* UNLIMITED_;
    int32_t precision {  };
    RoundingMode* roundingMode {  };
protected:
    void ctor(int32_t precision, RoundingMode* roundingMode);
    void ctor(int32_t precision);

public:
    int32_t getPrecision();
    RoundingMode* getRoundingMode();
    bool equals(::java::lang::Object* that) override;
    int32_t hashCode() override;

private:
    static ::java::lang::String* precisionString_;
    static ::java::lang::String* roundingModeString_;

public:
    ::java::lang::String* toString() override;

    // Generated
    MathContext(int32_t precision, RoundingMode* roundingMode);
    MathContext(int32_t precision);
protected:
    MathContext(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static MathContext*& DECIMAL32();
    static MathContext*& DECIMAL64();
    static MathContext*& DECIMAL128();
    static MathContext*& UNLIMITED();

private:
    static ::java::lang::String*& precisionString();
    static ::java::lang::String*& roundingModeString();
    virtual ::java::lang::Class* getClass0();
};
