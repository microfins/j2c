// Generated from /runtime/java/lang/Math.java
#include <java/lang/Math.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/util/Random.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::lang::Math::Math(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Math::Math() 
    : Math(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr double java::lang::Math::E;

constexpr double java::lang::Math::PI;

java::util::Random*& java::lang::Math::random_()
{
    clinit();
    return random__;
}
java::util::Random* java::lang::Math::random__;

void java::lang::Math::ctor()
{
    super::ctor();
}

double java::lang::Math::max(double a, double b)
{
    clinit();
    return (a < b ? b : a);
}

double java::lang::Math::min(double a, double b)
{
    clinit();
    return (a > b ? b : a);
}

float java::lang::Math::max(float a, float b)
{
    clinit();
    return (a < b ? b : a);
}

float java::lang::Math::min(float a, float b)
{
    clinit();
    return (a > b ? b : a);
}

int64_t java::lang::Math::max(int64_t a, int64_t b)
{
    clinit();
    return (a < b ? b : a);
}

int64_t java::lang::Math::min(int64_t a, int64_t b)
{
    clinit();
    return (a > b ? b : a);
}

int32_t java::lang::Math::max(int32_t a, int32_t b)
{
    clinit();
    return (a < b ? b : a);
}

int32_t java::lang::Math::min(int32_t a, int32_t b)
{
    clinit();
    return (a > b ? b : a);
}

int32_t java::lang::Math::abs(int32_t v)
{
    clinit();
    return (v < 0 ? -v : v);
}

int64_t java::lang::Math::abs(int64_t v)
{
    clinit();
    return (v < 0 ? -v : v);
}

float java::lang::Math::abs(float v)
{
    clinit();
    return (v < 0 ? -v : v);
}

double java::lang::Math::abs(double v)
{
    clinit();
    return (v < 0 ? -v : v);
}

int64_t java::lang::Math::round(double v)
{
    clinit();
    return static_cast< int64_t >(Math::floor(v + 0.5));
}

int32_t java::lang::Math::round(float v)
{
    clinit();
    return static_cast< int32_t >(Math::floor(v + 0.5));
}

double java::lang::Math::random()
{
    clinit();
    return npc(random__)->nextDouble();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Math::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Math", 14);
    return c;
}

void java::lang::Math::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        random__ = new ::java::util::Random();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::lang::Math::getClass0()
{
    return class_();
}

