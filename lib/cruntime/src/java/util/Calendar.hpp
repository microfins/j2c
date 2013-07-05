// Generated from /runtime/java/util/Calendar.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::Calendar
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t AM { int32_t(0) };
    static constexpr int32_t AM_PM { int32_t(9) };
    static constexpr int32_t DAY_OF_MONTH { int32_t(5) };
    static constexpr int32_t DAY_OF_WEEK { int32_t(7) };
    static constexpr int32_t HOUR { int32_t(10) };
    static constexpr int32_t HOUR_OF_DAY { int32_t(11) };
    static constexpr int32_t MINUTE { int32_t(12) };
    static constexpr int32_t MONTH { int32_t(2) };
    static constexpr int32_t PM { int32_t(1) };
    static constexpr int32_t SECOND { int32_t(13) };
    static constexpr int32_t YEAR { int32_t(1) };
    static constexpr int32_t FIELD_COUNT { int32_t(17) };

public: /* protected */
    int64_t time {  };
    bool isTimeSet {  };
    ::int32_tArray* fields {  };
    bool areFieldsSet {  };
    ::boolArray* isSet {  };
protected:
    void ctor();

public:
    static Calendar* getInstance();
    virtual int32_t get(int32_t field);
    virtual void set(int32_t field, int32_t value);
    virtual void set(int32_t year, int32_t month, int32_t date);
    virtual void setTime(Date* date);
    virtual void roll(int32_t field, bool up) = 0;
    virtual void add(int32_t field, int32_t amount) = 0;
    virtual void roll(int32_t field, int32_t amount);
    virtual int32_t getMinimum(int32_t field) = 0;
    virtual int32_t getMaximum(int32_t field) = 0;
    virtual int32_t getActualMinimum(int32_t field) = 0;
    virtual int32_t getActualMaximum(int32_t field) = 0;

    // Generated

public: /* protected */
    Calendar();
protected:
    Calendar(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class Calendar_MyCalendar;
};
