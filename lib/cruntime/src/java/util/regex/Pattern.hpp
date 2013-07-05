// Generated from /runtime/java/util/regex/Pattern.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/regex/fwd-runtime.hpp>
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

class java::util::regex::Pattern
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t UNIX_LINES { int32_t(1) };
    static constexpr int32_t CASE_INSENSITIVE { int32_t(2) };
    static constexpr int32_t COMMENTS { int32_t(4) };
    static constexpr int32_t MULTILINE { int32_t(8) };
    static constexpr int32_t LITERAL { int32_t(16) };
    static constexpr int32_t DOTALL { int32_t(32) };
    static constexpr int32_t UNICODE_CASE { int32_t(64) };
    static constexpr int32_t CANON_EQ { int32_t(128) };

private:
    int32_t patternFlags {  };
    ::java::lang::String* pattern_ {  };
protected:
    void ctor(::java::lang::String* pattern, int32_t flags);

private:
    static bool trivial(::java::lang::String* pattern);

public:
    static Pattern* compile(::java::lang::String* regex);
    static Pattern* compile(::java::lang::String* regex, int32_t flags);
    virtual int32_t flags();
    virtual Matcher* matcher(::java::lang::CharSequence* input);
    static bool matches(::java::lang::String* regex, ::java::lang::CharSequence* input);
    virtual ::java::lang::String* pattern();
    virtual ::java::lang::StringArray* split(::java::lang::CharSequence* input);
    virtual ::java::lang::StringArray* split(::java::lang::CharSequence* input, int32_t limit);

public: /* package */
    static int32_t indexOf(::java::lang::CharSequence* haystack, ::java::lang::CharSequence* needle, int32_t start);

    // Generated

public: /* protected */
    Pattern(::java::lang::String* pattern, int32_t flags);
protected:
    Pattern(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
