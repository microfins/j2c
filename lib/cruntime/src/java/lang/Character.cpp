// Generated from /runtime/java/lang/Character.java
#include <java/lang/Character.hpp>

#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <Array.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::lang::Character::Character(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Character::Character(char16_t value) 
    : Character(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

constexpr int32_t java::lang::Character::MIN_RADIX;

constexpr int32_t java::lang::Character::MAX_RADIX;

java::lang::Class*& java::lang::Character::TYPE()
{
    clinit();
    return TYPE_;
}
java::lang::Class* java::lang::Character::TYPE_;

void java::lang::Character::ctor(char16_t value)
{
    super::ctor();
    this->value = value;
}

java::lang::Character* java::lang::Character::valueOf(char16_t value)
{
    clinit();
    return new Character(value);
}

int32_t java::lang::Character::compareTo(Character* o)
{
    return value - npc(o)->value;
}

int32_t java::lang::Character::compareTo(Object* o)
{ 
    return compareTo(dynamic_cast< Character* >(o));
}

bool java::lang::Character::equals(Object* o)
{
    return dynamic_cast< Character* >(o) != nullptr && npc((java_cast< Character* >(o)))->value == value;
}

int32_t java::lang::Character::hashCode()
{
    return static_cast< int32_t >(value);
}

java::lang::String* java::lang::Character::toString()
{
    return toString(value);
}

java::lang::String* java::lang::Character::toString(char16_t v)
{
    clinit();
    return new String(new ::char16_tArray({v}));
}

char16_t java::lang::Character::charValue()
{
    return value;
}

char16_t java::lang::Character::toLowerCase(char16_t c)
{
    clinit();
    if(c >= u'A' && c <= u'Z') {
        return static_cast< char16_t >(((c - u'A') + u'a'));
    } else {
        return c;
    }
}

int32_t java::lang::Character::toLowerCase(int32_t codePoint)
{
    clinit();
    if(isSupplementaryCodePoint(codePoint)) {
        return codePoint;
    } else {
        return toLowerCase(static_cast< char16_t >(codePoint));
    }
}

char16_t java::lang::Character::toUpperCase(char16_t c)
{
    clinit();
    if(c >= u'a' && c <= u'z') {
        return static_cast< char16_t >(((c - u'a') + u'A'));
    } else {
        return c;
    }
}

int32_t java::lang::Character::toUpperCase(int32_t codePoint)
{
    clinit();
    if(isSupplementaryCodePoint(codePoint)) {
        return codePoint;
    } else {
        return toUpperCase(static_cast< char16_t >(codePoint));
    }
}

bool java::lang::Character::isDigit(char16_t c)
{
    clinit();
    return c >= u'0' && c <= u'9';
}

bool java::lang::Character::isDigit(int32_t c)
{
    clinit();
    return c >= u'0' && c <= u'9';
}

int32_t java::lang::Character::digit(char16_t c, int32_t radix)
{
    clinit();
    auto digit = int32_t(0);
    if((c >= u'0') && (c <= u'9')) {
        digit = c - u'0';
    } else if((c >= u'a') && (c <= u'z')) {
        digit = c - u'a' + int32_t(10);
    } else if((c >= u'A') && (c <= u'Z')) {
        digit = c - u'A' + int32_t(10);
    } else {
        return -int32_t(1);
    }
    if(digit < radix) {
        return digit;
    } else {
        return -int32_t(1);
    }
}

char16_t java::lang::Character::forDigit(int32_t digit, int32_t radix)
{
    clinit();
    if(MIN_RADIX <= radix && radix <= MAX_RADIX) {
        if(0 <= digit && digit < radix) {
            return static_cast< char16_t >((digit < 10 ? digit + u'0' : digit + u'a' - int32_t(10)));
        }
    }
    return 0;
}

bool java::lang::Character::isLetter(int32_t c)
{
    clinit();
    return canCastToChar(c) && isLetter(static_cast< char16_t >(c));
}

bool java::lang::Character::isLetter(char16_t c)
{
    clinit();
    return (c >= u'a' && c <= u'z') || (c >= u'A' && c <= u'Z');
}

bool java::lang::Character::isLetterOrDigit(char16_t c)
{
    clinit();
    return isDigit(c) || isLetter(c);
}

bool java::lang::Character::isLetterOrDigit(int32_t c)
{
    clinit();
    return canCastToChar(c) && (isDigit(static_cast< char16_t >(c)) || isLetter(static_cast< char16_t >(c)));
}

bool java::lang::Character::isLowerCase(int32_t c)
{
    clinit();
    return canCastToChar(c) && isLowerCase(static_cast< char16_t >(c));
}

bool java::lang::Character::isLowerCase(char16_t c)
{
    clinit();
    return (c >= u'a' && c <= u'z');
}

bool java::lang::Character::isUpperCase(char16_t c)
{
    clinit();
    return (c >= u'A' && c <= u'Z');
}

bool java::lang::Character::isUpperCase(int32_t c)
{
    clinit();
    return canCastToChar(c) && isUpperCase(static_cast< char16_t >(c));
}

bool java::lang::Character::isWhitespace(int32_t c)
{
    clinit();
    return canCastToChar(c) && isWhitespace(static_cast< char16_t >(c));
}

bool java::lang::Character::isWhitespace(char16_t c)
{
    clinit();
    return c == u' ' || c == u'\u0009' || c == u'\u000a' || c == u'\u000d';
}

bool java::lang::Character::isSpaceChar(char16_t c)
{
    clinit();
    return isWhitespace(c);
}

bool java::lang::Character::isHighSurrogate(char16_t ch)
{
    clinit();
    return ch >= char16_t(0xd800) && ch <= char16_t(0xdbff);
}

bool java::lang::Character::isLowSurrogate(char16_t ch)
{
    clinit();
    return ch >= char16_t(0xdc00) && ch <= char16_t(0xdfff);
}

int32_t java::lang::Character::toCodePoint(char16_t high, char16_t low)
{
    clinit();
    return (((high & int32_t(1023)) << int32_t(10)) | (low & int32_t(1023))) + int32_t(65536);
}

bool java::lang::Character::isSupplementaryCodePoint(int32_t codePoint)
{
    clinit();
    return codePoint >= 65536 && codePoint <= 1114111;
}

bool java::lang::Character::canCastToChar(int32_t codePoint)
{
    clinit();
    return (codePoint >= 0 && codePoint <= 65535);
}

char16_tArray* java::lang::Character::toChars(int32_t codePoint)
{
    clinit();
    if(isSupplementaryCodePoint(codePoint)) {
        auto cpPrime = codePoint - int32_t(65536);
        auto high = int32_t(55296) | ((cpPrime >> int32_t(10)) & int32_t(1023));
        auto low = int32_t(56320) | (cpPrime & int32_t(1023));
        return new ::char16_tArray({
            static_cast< char16_t >(high)
            , static_cast< char16_t >(low)
        });
    }
    return new ::char16_tArray({static_cast< char16_t >(codePoint)});
}

bool java::lang::Character::isSurrogatePair(char16_t high, char16_t low)
{
    clinit();
    return isHighSurrogate(high) && isLowSurrogate(low);
}

int32_t java::lang::Character::codePointAt(CharSequence* sequence, int32_t offset)
{
    clinit();
    auto length = npc(sequence)->length();
    if(offset < 0 || offset >= length) {
        throw new IndexOutOfBoundsException();
    }
    auto high = npc(sequence)->charAt(offset);
    if(!isHighSurrogate(high) || offset >= length) {
        return high;
    }
    auto low = npc(sequence)->charAt(offset + int32_t(1));
    if(!isLowSurrogate(low)) {
        return high;
    }
    return toCodePoint(high, low);
}

int32_t java::lang::Character::codePointCount(CharSequence* sequence, int32_t start, int32_t end)
{
    clinit();
    auto length = npc(sequence)->length();
    if(start < 0 || start > end || end >= length) {
        throw new IndexOutOfBoundsException();
    }
    auto count = int32_t(0);
    for (auto i = start; i < end; ++i) {
        if(isHighSurrogate(npc(sequence)->charAt(i)) && (i + int32_t(1)) < end && isLowSurrogate(npc(sequence)->charAt(i + int32_t(1)))) {
            ++i;
        }
        ++count;
    }
    return count;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Character::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Character", 19);
    return c;
}

void java::lang::Character::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        TYPE_ = Character::class_();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::lang::Character::getClass0()
{
    return class_();
}

