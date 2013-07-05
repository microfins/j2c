// Generated from /runtime/java/lang/Math.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::Math final
    : public Object
{

public:
    typedef Object super;
    static constexpr double E { 2.718281828459045 };
    static constexpr double PI { 3.141592653589793 };

private:
    static ::java::util::Random* random__;
protected:
    void ctor();

public:
    static double max(double a, double b);
    static double min(double a, double b);
    static float max(float a, float b);
    static float min(float a, float b);
    static int64_t max(int64_t a, int64_t b);
    static int64_t min(int64_t a, int64_t b);
    static int32_t max(int32_t a, int32_t b);
    static int32_t min(int32_t a, int32_t b);
    static int32_t abs(int32_t v);
    static int64_t abs(int64_t v);
    static float abs(float v);
    static double abs(double v);
    static int64_t round(double v);
    static int32_t round(float v);
    static double random();
    static double floor(double v);
    static double ceil(double v);
    static double exp(double v);
    static double log(double v);
    static double cos(double v);
    static double sin(double v);
    static double tan(double v);
    static double cosh(double v);
    static double sinh(double v);
    static double tanh(double v);
    static double acos(double v);
    static double asin(double v);
    static double atan(double v);
    static double sqrt(double v);
    static double pow(double v, double e);

    // Generated

private:
    Math();
protected:
    Math(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::Random*& random_();
    virtual ::java::lang::Class* getClass0();
};
