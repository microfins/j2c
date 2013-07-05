// Generated from /runtime/java/util/Calendar.java
#include <java/util/Calendar_MyCalendar.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Cloneable.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

java::util::Calendar_MyCalendar::Calendar_MyCalendar(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Calendar_MyCalendar::Calendar_MyCalendar(int64_t time) 
    : Calendar_MyCalendar(*static_cast< ::default_init_tag* >(0))
{
    ctor(time);
}

constexpr int64_t java::util::Calendar_MyCalendar::MILLIS_PER_DAY;

constexpr int32_t java::util::Calendar_MyCalendar::MILLIS_PER_HOUR;

constexpr int32_t java::util::Calendar_MyCalendar::MILLIS_PER_MINUTE;

constexpr int32_t java::util::Calendar_MyCalendar::MILLIS_PER_SECOND;

constexpr int32_t java::util::Calendar_MyCalendar::EPOCH_YEAR;

constexpr int32_t java::util::Calendar_MyCalendar::EPOCH_LEAP_YEAR;

constexpr int32_t java::util::Calendar_MyCalendar::DAYS_TO_EPOCH;

int32_tArrayArray*& java::util::Calendar_MyCalendar::DAYS_IN_MONTH()
{
    clinit();
    return DAYS_IN_MONTH_;
}
int32_tArrayArray* java::util::Calendar_MyCalendar::DAYS_IN_MONTH_;

void java::util::Calendar_MyCalendar::ctor(int64_t time)
{
    super::ctor();
    this->time = time;
    this->isTimeSet = true;
    parseIntoFields(time);
}

void java::util::Calendar_MyCalendar::setTime(Date* date)
{
    super::setTime(date);
    parseIntoFields(this->time);
}

bool java::util::Calendar_MyCalendar::isLeapYear(int32_t year)
{
    clinit();
    return (year % int32_t(4) == 0) && (year % int32_t(100) != 0) || (year % int32_t(400) == 0);
}

void java::util::Calendar_MyCalendar::parseIntoFields(int64_t timeInMillis)
{
    auto days = timeInMillis / MILLIS_PER_DAY;
    days += DAYS_TO_EPOCH;
    auto years = int32_t(4) * days / int32_t(1461);
    auto year = static_cast< int32_t >((EPOCH_LEAP_YEAR + years));
    days -= int32_t(365) * years + years / int32_t(4);
    if(!isLeapYear(year))
        days--;

    auto month = int32_t(0);
    auto leapIndex = isLeapYear(year) ? int32_t(1) : int32_t(0);
    while (days >= (*(*DAYS_IN_MONTH_)[leapIndex])[month]) {
        days -= (*(*DAYS_IN_MONTH_)[leapIndex])[month++];
    }
    days++;
    auto remainder = static_cast< int32_t >((timeInMillis % MILLIS_PER_DAY));
    auto hour = remainder / MILLIS_PER_HOUR;
    remainder = remainder % MILLIS_PER_HOUR;
    auto minute = remainder / MILLIS_PER_MINUTE;
    remainder = remainder % MILLIS_PER_MINUTE;
    auto second = remainder / MILLIS_PER_SECOND;
    (*fields)[YEAR] = year;
    (*fields)[MONTH] = month;
    (*fields)[DAY_OF_MONTH] = static_cast< int32_t >(days);
    (*fields)[HOUR_OF_DAY] = hour;
    (*fields)[MINUTE] = minute;
    (*fields)[SECOND] = second;
}

void java::util::Calendar_MyCalendar::roll(int32_t field, bool up)
{
}

void java::util::Calendar_MyCalendar::add(int32_t fild, int32_t amount)
{
}

int32_t java::util::Calendar_MyCalendar::getMinimum(int32_t field)
{
    return 0;
}

int32_t java::util::Calendar_MyCalendar::getMaximum(int32_t field)
{
    return 0;
}

int32_t java::util::Calendar_MyCalendar::getActualMinimum(int32_t field)
{
    return 0;
}

int32_t java::util::Calendar_MyCalendar::getActualMaximum(int32_t field)
{
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Calendar_MyCalendar::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Calendar.MyCalendar", 29);
    return c;
}

void java::util::Calendar_MyCalendar::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        DAYS_IN_MONTH_ = new ::int32_tArrayArray({
            (new ::int32_tArray({
            int32_t(31)
            , int32_t(28)
            , int32_t(31)
            , int32_t(30)
            , int32_t(31)
            , int32_t(30)
            , int32_t(31)
            , int32_t(31)
            , int32_t(30)
            , int32_t(31)
            , int32_t(30)
            , int32_t(31)
        }))
            , (new ::int32_tArray({
            int32_t(31)
            , int32_t(29)
            , int32_t(31)
            , int32_t(30)
            , int32_t(31)
            , int32_t(30)
            , int32_t(31)
            , int32_t(31)
            , int32_t(30)
            , int32_t(31)
            , int32_t(30)
            , int32_t(31)
        }))
        });
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

void java::util::Calendar_MyCalendar::roll(int32_t field, int32_t amount)
{
    super::roll(field, amount);
}

java::lang::Class* java::util::Calendar_MyCalendar::getClass0()
{
    return class_();
}

