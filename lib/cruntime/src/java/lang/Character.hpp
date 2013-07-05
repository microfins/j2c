// Generated from /runtime/java/lang/Character.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class java::lang::Character final
    : public virtual Object
    , public Comparable
{

public:
    typedef Object super;
    static constexpr int32_t MIN_RADIX { int32_t(2) };
    static constexpr int32_t MAX_RADIX { int32_t(36) };

private:
    static Class* TYPE_;
    char16_t value {  };
protected:
    void ctor(char16_t value);

public:
    static Character* valueOf(char16_t value);
    int32_t compareTo(Character* o);
    bool equals(Object* o) override;
    int32_t hashCode() override;
    String* toString() override;
    static String* toString(char16_t v);
    char16_t charValue();
    static char16_t toLowerCase(char16_t c);
    static int32_t toLowerCase(int32_t codePoint);
    static char16_t toUpperCase(char16_t c);
    static int32_t toUpperCase(int32_t codePoint);
    static bool isDigit(char16_t c);
    static bool isDigit(int32_t c);
    static int32_t digit(char16_t c, int32_t radix);
    static char16_t forDigit(int32_t digit, int32_t radix);
    static bool isLetter(int32_t c);
    static bool isLetter(char16_t c);
    static bool isLetterOrDigit(char16_t c);
    static bool isLetterOrDigit(int32_t c);
    static bool isLowerCase(int32_t c);
    static bool isLowerCase(char16_t c);
    static bool isUpperCase(char16_t c);
    static bool isUpperCase(int32_t c);
    static bool isWhitespace(int32_t c);
    static bool isWhitespace(char16_t c);
    static bool isSpaceChar(char16_t c);
    static bool isHighSurrogate(char16_t ch);
    static bool isLowSurrogate(char16_t ch);
    static int32_t toCodePoint(char16_t high, char16_t low);
    static bool isSupplementaryCodePoint(int32_t codePoint);

private:
    static bool canCastToChar(int32_t codePoint);

public:
    static ::char16_tArray* toChars(int32_t codePoint);
    static bool isSurrogatePair(char16_t high, char16_t low);
    static int32_t codePointAt(CharSequence* sequence, int32_t offset);
    static int32_t codePointCount(CharSequence* sequence, int32_t start, int32_t end);

    // Generated
    Character(char16_t value);
protected:
    Character(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual int32_t compareTo(Object* o) override;
    static Class*& TYPE();

private:
    virtual ::java::lang::Class* getClass0();
};
