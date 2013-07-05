// Generated from /runtime/java/text/DateFormatSymbols.java
#include <java/text/DateFormatSymbols.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/String.hpp>
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
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, CharSequenceArray, ComparableArray, ::java::io::SerializableArray > StringArray;
    } // lang
} // java

java::text::DateFormatSymbols::DateFormatSymbols(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::text::DateFormatSymbols::DateFormatSymbols()
    : DateFormatSymbols(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::text::DateFormatSymbols::ctor()
{
    super::ctor();
    init();
}

void java::text::DateFormatSymbols::init()
{
    ampm = new ::java::lang::StringArray({
        u"AM"_j
        , u"PM"_j
    });
    shortWeekdays = new ::java::lang::StringArray({
        u"Sun"_j
        , u"Mon"_j
        , u"Tue"_j
        , u"Wed"_j
        , u"Thu"_j
        , u"Fri"_j
        , u"Sat"_j
    });
    shortMonths = new ::java::lang::StringArray({
        u"Jan"_j
        , u"Feb"_j
        , u"Mar"_j
        , u"Apr"_j
        , u"May"_j
        , u"Jun"_j
        , u"Jul"_j
        , u"Aug"_j
        , u"Sep"_j
        , u"Oct"_j
        , u"Nov"_j
        , u"Dec"_j
    });
}

java::lang::StringArray* java::text::DateFormatSymbols::getAmPmStrings()
{
    return ampm;
}

void java::text::DateFormatSymbols::setAmPmStrings(::java::lang::StringArray* v)
{
    ampm = v;
}

java::lang::StringArray* java::text::DateFormatSymbols::getShortWeekdays()
{
    return shortWeekdays;
}

java::lang::StringArray* java::text::DateFormatSymbols::getShortMonths()
{
    return shortMonths;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::text::DateFormatSymbols::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.text.DateFormatSymbols", 27);
    return c;
}

java::lang::Class* java::text::DateFormatSymbols::getClass0()
{
    return class_();
}

