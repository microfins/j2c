// Generated from /runtime/java/math/RoundingMode.java
#include <java/math/RoundingMode.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray > EnumArray;
    } // lang

    namespace math
    {
typedef ::SubArray< ::java::math::RoundingMode, ::java::lang::EnumArray > RoundingModeArray;
    } // math
} // java

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::math::RoundingMode::RoundingMode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::math::RoundingMode::RoundingMode(::java::lang::String* name, int ordinal, int32_t rm) 
    : RoundingMode(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, rm);
}

java::math::RoundingMode* java::math::RoundingMode::UP = new ::java::math::RoundingMode(u"UP"_j, 0, int32_t(0));
java::math::RoundingMode* java::math::RoundingMode::DOWN = new ::java::math::RoundingMode(u"DOWN"_j, 1, int32_t(1));
java::math::RoundingMode* java::math::RoundingMode::CEILING = new ::java::math::RoundingMode(u"CEILING"_j, 2, int32_t(2));
java::math::RoundingMode* java::math::RoundingMode::FLOOR = new ::java::math::RoundingMode(u"FLOOR"_j, 3, int32_t(3));
java::math::RoundingMode* java::math::RoundingMode::HALF_UP = new ::java::math::RoundingMode(u"HALF_UP"_j, 4, int32_t(4));
java::math::RoundingMode* java::math::RoundingMode::HALF_DOWN = new ::java::math::RoundingMode(u"HALF_DOWN"_j, 5, int32_t(5));
java::math::RoundingMode* java::math::RoundingMode::HALF_EVEN = new ::java::math::RoundingMode(u"HALF_EVEN"_j, 6, int32_t(6));
java::math::RoundingMode* java::math::RoundingMode::UNNECESSARY = new ::java::math::RoundingMode(u"UNNECESSARY"_j, 7, int32_t(7));
void java::math::RoundingMode::ctor(::java::lang::String* name, int ordinal, int32_t rm)
{
    super::ctor(name, ordinal);
    roundingMode = rm;
}

java::math::RoundingMode* java::math::RoundingMode::valueOf(int32_t roundingMode)
{
    clinit();
    auto const values = RoundingMode::values();
    if(roundingMode < 0 || roundingMode >= npc(values)->length)
        throw new ::java::lang::IllegalArgumentException();

    return (*values)[roundingMode];
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::math::RoundingMode::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.math.RoundingMode", 22);
    return c;
}

java::lang::Enum* java::math::RoundingMode::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

java::math::RoundingMode* java::math::RoundingMode::valueOf(::java::lang::String* a0)
{
    if(CEILING->toString()->equals(a0))
        return CEILING;
    if(DOWN->toString()->equals(a0))
        return DOWN;
    if(FLOOR->toString()->equals(a0))
        return FLOOR;
    if(HALF_DOWN->toString()->equals(a0))
        return HALF_DOWN;
    if(HALF_EVEN->toString()->equals(a0))
        return HALF_EVEN;
    if(HALF_UP->toString()->equals(a0))
        return HALF_UP;
    if(UNNECESSARY->toString()->equals(a0))
        return UNNECESSARY;
    if(UP->toString()->equals(a0))
        return UP;
    throw new ::java::lang::IllegalArgumentException(a0);
}

java::math::RoundingModeArray* java::math::RoundingMode::values()
{
    return new java::math::RoundingModeArray({
        CEILING,
        DOWN,
        FLOOR,
        HALF_DOWN,
        HALF_EVEN,
        HALF_UP,
        UNNECESSARY,
        UP,
    });
}

java::lang::Class* java::math::RoundingMode::getClass0()
{
    return class_();
}

