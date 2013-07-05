// Generated from /runtime/java/util/Calendar.java
#include <java/util/Calendar.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/System.hpp>
#include <java/util/Calendar_MyCalendar.hpp>
#include <java/util/Date.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::Calendar::Calendar(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Calendar::Calendar() 
    : Calendar(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::util::Calendar::init()
{
    fields = new ::int32_tArray(FIELD_COUNT);
    isSet = new ::boolArray(FIELD_COUNT);
}

constexpr int32_t java::util::Calendar::AM;

constexpr int32_t java::util::Calendar::AM_PM;

constexpr int32_t java::util::Calendar::DAY_OF_MONTH;

constexpr int32_t java::util::Calendar::DAY_OF_WEEK;

constexpr int32_t java::util::Calendar::HOUR;

constexpr int32_t java::util::Calendar::HOUR_OF_DAY;

constexpr int32_t java::util::Calendar::MINUTE;

constexpr int32_t java::util::Calendar::MONTH;

constexpr int32_t java::util::Calendar::PM;

constexpr int32_t java::util::Calendar::SECOND;

constexpr int32_t java::util::Calendar::YEAR;

constexpr int32_t java::util::Calendar::FIELD_COUNT;

void java::util::Calendar::ctor()
{
    super::ctor();
    init();
}

java::util::Calendar* java::util::Calendar::getInstance()
{
    clinit();
    return new Calendar_MyCalendar(::java::lang::System::currentTimeMillis());
}

int32_t java::util::Calendar::get(int32_t field)
{
    return (*fields)[field];
}

void java::util::Calendar::set(int32_t field, int32_t value)
{
    (*fields)[field] = value;
}

void java::util::Calendar::set(int32_t year, int32_t month, int32_t date)
{
    set(YEAR, year);
    set(MONTH, month);
    set(DAY_OF_MONTH, date);
}

void java::util::Calendar::setTime(Date* date)
{
    time = npc(date)->getTime();
}

void java::util::Calendar::roll(int32_t field, int32_t amount)
{
    auto up = amount >= 0;
    if(!up) {
        amount = -amount;
    }
    for (auto i = int32_t(0); i < amount; ++i) {
        roll(field, up);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Calendar::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Calendar", 18);
    return c;
}

java::lang::Class* java::util::Calendar::getClass0()
{
    return class_();
}

