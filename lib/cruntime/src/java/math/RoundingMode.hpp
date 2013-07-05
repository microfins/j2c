// Generated from /runtime/java/math/RoundingMode.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/math/fwd-runtime.hpp>
#include <java/lang/Enum.hpp>

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

struct default_init_tag;

class java::math::RoundingMode final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static RoundingMode *UP;
    static RoundingMode *DOWN;
    static RoundingMode *CEILING;
    static RoundingMode *FLOOR;
    static RoundingMode *HALF_UP;
    static RoundingMode *HALF_DOWN;
    static RoundingMode *HALF_EVEN;
    static RoundingMode *UNNECESSARY;
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t rm);

private:
    int32_t roundingMode {  };

public:
    static RoundingMode* valueOf(int32_t roundingMode);

    // Generated

private:
    RoundingMode(::java::lang::String* name, int ordinal, int32_t rm);
protected:
    RoundingMode(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);
    static RoundingMode* valueOf(::java::lang::String* a0);
    static RoundingModeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
