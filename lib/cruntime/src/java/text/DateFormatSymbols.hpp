// Generated from /runtime/java/text/DateFormatSymbols.java

#pragma once

#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/text/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

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

struct default_init_tag;

class java::text::DateFormatSymbols
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::StringArray* ampm {  };
    ::java::lang::StringArray* shortWeekdays {  };
    ::java::lang::StringArray* shortMonths {  };

public:
    virtual ::java::lang::StringArray* getAmPmStrings();
    virtual void setAmPmStrings(::java::lang::StringArray* v);
    virtual ::java::lang::StringArray* getShortWeekdays();
    virtual ::java::lang::StringArray* getShortMonths();

    // Generated
    DateFormatSymbols();
protected:
    void ctor();
    DateFormatSymbols(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
