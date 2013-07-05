// Generated from /runtime/java/lang/String.java

#pragma once

#include <stddef.h>
#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/io/Serializable.hpp>

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

class java::lang::String final
    : public virtual Object
    , public CharSequence
    , public Comparable
    , public ::java::io::Serializable
{

public:
    typedef Object super;

private:
    static String* UTF_8_ENCODING_;
    static String* ISO_8859_1_ENCODING_;
    static String* LATIN_1_ENCODING_;
    static String* DEFAULT_ENCODING_;
    static ::java::util::Comparator* CASE_INSENSITIVE_ORDER_;
    Object* data {  };
    int32_t offset {  };
    int32_t length_ {  };
    int32_t hashCode_ {  };
protected:
    void ctor();
    void ctor(::char16_tArray* data, int32_t offset, int32_t length, bool copy);
    void ctor(::char16_tArray* data, int32_t offset, int32_t length);
    void ctor(::char16_tArray* data);
    void ctor(::int8_tArray* bytes, int32_t offset, int32_t length, String* charsetName) /* throws(UnsupportedEncodingException) */;
    void ctor(::int8_tArray* data, int32_t offset, int32_t length, bool copy);
    void ctor(::int8_tArray* data, int32_t offset, int32_t length);
    void ctor(::int8_tArray* data);
    void ctor(String* s);
    void ctor(::int8_tArray* data, String* charset) /* throws(UnsupportedEncodingException) */;
    void ctor(::int8_tArray* bytes, int32_t highByte, int32_t offset, int32_t length);
    void ctor(Object* data, int32_t offset, int32_t length, bool copy);

public:
    String* toString() override;
    int32_t length() override;
    int32_t hashCode() override;
    bool equals(Object* o) override;
    bool equalsIgnoreCase(String* o);
    int32_t compareTo(String* s);
    int32_t compareToIgnoreCase(String* s);
    String* trim();
    String* toLowerCase();
    String* toUpperCase();
    int32_t indexOf(int32_t c);
    int32_t indexOf(int32_t c, int32_t start);
    int32_t lastIndexOf(int32_t ch);
    int32_t indexOf(String* s);
    int32_t indexOf(String* s, int32_t start);
    int32_t lastIndexOf(String* s);
    int32_t lastIndexOf(String* s, int32_t lastIndex);
    String* replace(char16_t oldChar, char16_t newChar);
    String* substring(int32_t start);
    String* substring(int32_t start, int32_t end);
    bool startsWith(String* s);
    bool startsWith(String* s, int32_t start);
    bool endsWith(String* s);
    String* concat(String* s);
    void getBytes(int32_t srcOffset, int32_t srcLength, ::int8_tArray* dst, int32_t dstOffset);
    ::int8_tArray* getBytes();
    ::int8_tArray* getBytes(String* format) /* throws(java.io.UnsupportedEncodingException) */;
    void getChars(int32_t srcOffset, int32_t srcEnd, ::char16_tArray* dst, int32_t dstOffset);
    ::char16_tArray* toCharArray_();
    char16_t charAt(int32_t index) override;
    StringArray* split(String* regex);
    StringArray* split(String* regex, int32_t limit);
    CharSequence* subSequence(int32_t start, int32_t end) override;
    bool matches(String* regex);
    String* replaceFirst(String* regex, String* replacement);
    String* replaceAll(String* regex, String* replacement);
    String* replace(CharSequence* target, CharSequence* replace);

private:
    String* infuse(String* infuseWith);

public:
    String* intern();
    static String* valueOf(Object* s);
    static String* valueOf(bool v);
    static String* valueOf(int8_t v);
    static String* valueOf(int16_t v);
    static String* valueOf(char16_t v);
    static String* valueOf(int32_t v);
    static String* valueOf(int64_t v);
    static String* valueOf(float v);
    static String* valueOf(double v);
    static String* valueOf(::char16_tArray* data, int32_t offset, int32_t length);
    static String* valueOf(::char16_tArray* data);
    int32_t lastIndexOf(int32_t ch, int32_t lastIndex);
    bool regionMatches(int32_t thisOffset, String* match, int32_t matchOffset, int32_t length);
    bool regionMatches(bool ignoreCase, int32_t thisOffset, String* match, int32_t matchOffset, int32_t length);
    bool isEmpty();
    bool contains(CharSequence* match);
    int32_t codePointAt(int32_t offset);
    int32_t codePointCount(int32_t start, int32_t end);
    String* toUpperCase(::java::util::Locale* locale);
    String* toLowerCase(::java::util::Locale* locale);

    // Generated
    String();
    String(::char16_tArray* data, int32_t offset, int32_t length, bool copy);
    String(::char16_tArray* data, int32_t offset, int32_t length);
    String(::char16_tArray* data);
    String(::int8_tArray* bytes, int32_t offset, int32_t length, String* charsetName);
    String(::int8_tArray* data, int32_t offset, int32_t length, bool copy);
    String(::int8_tArray* data, int32_t offset, int32_t length);
    String(::int8_tArray* data);
    String(String* s);
    String(::int8_tArray* data, String* charset);
    String(::int8_tArray* bytes, int32_t highByte, int32_t offset, int32_t length);

private:
    String(Object* data, int32_t offset, int32_t length, bool copy);
protected:
    String(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual int32_t compareTo(Object* o) override;
    static String*& UTF_8_ENCODING();
    static String*& ISO_8859_1_ENCODING();
    static String*& LATIN_1_ENCODING();
    static String*& DEFAULT_ENCODING();
    static ::java::util::Comparator*& CASE_INSENSITIVE_ORDER();

private:
    virtual ::java::lang::Class* getClass0();
    friend String *operator"" _j(const char16_t *s, size_t n);
    friend class String_1;
};
namespace java { namespace lang { String *operator "" _j(const char16_t *p, size_t n); } }
using java::lang::operator "" _j;

