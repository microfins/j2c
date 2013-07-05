// Generated from /runtime/java/util/Calendar.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/Calendar.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang
} // java

namespace 
{
typedef ::SubArray< ::int32_tArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > int32_tArrayArray;
} // 

struct default_init_tag;

class java::util::Calendar_MyCalendar
    : public Calendar
{

public:
    typedef Calendar super;

private:
    static constexpr int64_t MILLIS_PER_DAY { int64_t(86400000LL) };
    static constexpr int32_t MILLIS_PER_HOUR { int32_t(3600000) };
    static constexpr int32_t MILLIS_PER_MINUTE { int32_t(60000) };
    static constexpr int32_t MILLIS_PER_SECOND { int32_t(1000) };
    static constexpr int32_t EPOCH_YEAR { int32_t(1970) };
    static constexpr int32_t EPOCH_LEAP_YEAR { int32_t(1968) };
    static constexpr int32_t DAYS_TO_EPOCH { int32_t(731) };
    static ::int32_tArrayArray* DAYS_IN_MONTH_;
protected:
    void ctor(int64_t time);

public:
    void setTime(Date* date) override;

private:
    static bool isLeapYear(int32_t year);
    void parseIntoFields(int64_t timeInMillis);

public:
    void roll(int32_t field, bool up) override;
    void add(int32_t fild, int32_t amount) override;
    int32_t getMinimum(int32_t field) override;
    int32_t getMaximum(int32_t field) override;
    int32_t getActualMinimum(int32_t field) override;
    int32_t getActualMaximum(int32_t field) override;

    // Generated
    Calendar_MyCalendar(int64_t time);
protected:
    Calendar_MyCalendar(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual void roll(int32_t field, int32_t amount);

private:
    static ::int32_tArrayArray*& DAYS_IN_MONTH();
    virtual ::java::lang::Class* getClass0();
    friend class Calendar;
};
