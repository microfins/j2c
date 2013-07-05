// Generated from /runtime/java/lang/String.java
#include <java/lang/String.hpp>

#include <avian/Iso88591.hpp>
#include <avian/Utf8.hpp>
#include <java/io/Serializable.hpp>
#include <java/io/UnsupportedEncodingException.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/Byte.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Float.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String_1.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/Locale.hpp>
#include <java/util/regex/Matcher.hpp>
#include <java/util/regex/Pattern.hpp>
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
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, CharSequenceArray, ComparableArray, ::java::io::SerializableArray > StringArray;
    } // lang
} // java

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

java::lang::String::String(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::String::String() 
    : String(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String::String(::char16_tArray* data, int32_t offset, int32_t length, bool copy) 
    : String(*static_cast< ::default_init_tag* >(0))
{
    ctor(data,offset,length,copy);
}

java::lang::String::String(::char16_tArray* data, int32_t offset, int32_t length) 
    : String(*static_cast< ::default_init_tag* >(0))
{
    ctor(data,offset,length);
}

java::lang::String::String(::char16_tArray* data) 
    : String(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

java::lang::String::String(::int8_tArray* bytes, int32_t offset, int32_t length, String* charsetName)  /* throws(UnsupportedEncodingException) */
    : String(*static_cast< ::default_init_tag* >(0))
{
    ctor(bytes,offset,length,charsetName);
}

java::lang::String::String(::int8_tArray* data, int32_t offset, int32_t length, bool copy) 
    : String(*static_cast< ::default_init_tag* >(0))
{
    ctor(data,offset,length,copy);
}

java::lang::String::String(::int8_tArray* data, int32_t offset, int32_t length) 
    : String(*static_cast< ::default_init_tag* >(0))
{
    ctor(data,offset,length);
}

java::lang::String::String(::int8_tArray* data) 
    : String(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

java::lang::String::String(String* s) 
    : String(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

java::lang::String::String(::int8_tArray* data, String* charset)  /* throws(UnsupportedEncodingException) */
    : String(*static_cast< ::default_init_tag* >(0))
{
    ctor(data,charset);
}

java::lang::String::String(::int8_tArray* bytes, int32_t highByte, int32_t offset, int32_t length) 
    : String(*static_cast< ::default_init_tag* >(0))
{
    ctor(bytes,highByte,offset,length);
}

java::lang::String::String(Object* data, int32_t offset, int32_t length, bool copy) 
    : String(*static_cast< ::default_init_tag* >(0))
{
    ctor(data,offset,length,copy);
}

java::lang::String*& java::lang::String::UTF_8_ENCODING()
{
    clinit();
    return UTF_8_ENCODING_;
}
java::lang::String* java::lang::String::UTF_8_ENCODING_;

java::lang::String*& java::lang::String::ISO_8859_1_ENCODING()
{
    clinit();
    return ISO_8859_1_ENCODING_;
}
java::lang::String* java::lang::String::ISO_8859_1_ENCODING_;

java::lang::String*& java::lang::String::LATIN_1_ENCODING()
{
    clinit();
    return LATIN_1_ENCODING_;
}
java::lang::String* java::lang::String::LATIN_1_ENCODING_;

java::lang::String*& java::lang::String::DEFAULT_ENCODING()
{
    clinit();
    return DEFAULT_ENCODING_;
}
java::lang::String* java::lang::String::DEFAULT_ENCODING_;

java::util::Comparator*& java::lang::String::CASE_INSENSITIVE_ORDER()
{
    clinit();
    return CASE_INSENSITIVE_ORDER_;
}
java::util::Comparator* java::lang::String::CASE_INSENSITIVE_ORDER_;

void java::lang::String::ctor()
{
    ctor(new ::char16_tArray(int32_t(0)), int32_t(0), int32_t(0));
}

void java::lang::String::ctor(::char16_tArray* data, int32_t offset, int32_t length, bool copy)
{
    ctor(java_cast< Object* >(data), offset, length, copy);
}

void java::lang::String::ctor(::char16_tArray* data, int32_t offset, int32_t length)
{
    ctor(data, offset, length, true);
}

void java::lang::String::ctor(::char16_tArray* data)
{
    ctor(data, int32_t(0), npc(data)->length);
}

void java::lang::String::ctor(::int8_tArray* bytes, int32_t offset, int32_t length, String* charsetName) /* throws(UnsupportedEncodingException) */
{
    ctor(bytes, offset, length);
    if(!(npc(charsetName)->equalsIgnoreCase(UTF_8_ENCODING_) || npc(charsetName)->equalsIgnoreCase(ISO_8859_1_ENCODING_))) {
        throw new ::java::io::UnsupportedEncodingException(charsetName);
    }
}

void java::lang::String::ctor(::int8_tArray* data, int32_t offset, int32_t length, bool copy)
{
    ctor(java_cast< Object* >(data), offset, length, copy);
}

void java::lang::String::ctor(::int8_tArray* data, int32_t offset, int32_t length)
{
    ctor(data, offset, length, true);
}

void java::lang::String::ctor(::int8_tArray* data)
{
    ctor(data, int32_t(0), npc(data)->length);
}

void java::lang::String::ctor(String* s)
{
    ctor(npc(s)->toCharArray_());
}

void java::lang::String::ctor(::int8_tArray* data, String* charset) /* throws(UnsupportedEncodingException) */
{
    ctor(data, int32_t(0), npc(data)->length, charset);
}

void java::lang::String::ctor(::int8_tArray* bytes, int32_t highByte, int32_t offset, int32_t length)
{
    super::ctor();
    if(offset < 0 || offset + length > npc(bytes)->length) {
        throw new IndexOutOfBoundsException(::java::lang::StringBuilder().append(offset)->append(u" < 0 or "_j)
            ->append(offset)
            ->append(u" + "_j)
            ->append(length)
            ->append(u" > "_j)
            ->append(npc(bytes)->length)->toString());
    }
    auto c = new ::char16_tArray(length);
    auto mask = highByte << int32_t(8);
    for (auto i = int32_t(0); i < length; ++i) {
        (*c)[i] = static_cast< char16_t >((((*bytes)[offset + i] & int32_t(255)) | mask));
    }
    this->data = c;
    this->offset = 0;
    this->length_ = length;
}

void java::lang::String::ctor(Object* data, int32_t offset, int32_t length, bool copy)
{
    super::ctor();
    int32_t l;
    if(dynamic_cast< ::char16_tArray* >(data) != nullptr) {
        l = npc((java_cast< ::char16_tArray* >(data)))->length;
    } else {
        l = npc((java_cast< ::int8_tArray* >(data)))->length;
    }
    if(offset < 0 || offset + length > l) {
        throw new IndexOutOfBoundsException(::java::lang::StringBuilder().append(offset)->append(u" < 0 or "_j)
            ->append(offset)
            ->append(u" + "_j)
            ->append(length)
            ->append(u" > "_j)
            ->append(l)->toString());
    }
    if(!copy && ::avian::Utf8::test(data))
        copy = true;

    if(copy) {
        Object* c;
        if(dynamic_cast< ::char16_tArray* >(data) != nullptr) {
            c = new ::char16_tArray(length);
            System::arraycopy(data, offset, c, 0, length);
        } else {
            c = ::avian::Utf8::decode(java_cast< ::int8_tArray* >(data), offset, length);
            if(dynamic_cast< ::char16_tArray* >(c) != nullptr)
                length = npc((java_cast< ::char16_tArray* >(c)))->length;

            if(c == nullptr) {
                throw new RuntimeException(::java::lang::StringBuilder().append(u"unable to parse \""_j)->append(new String(data, offset, length, false))
                    ->append(u"\""_j)->toString());
            }
        }
        this->data = c;
        this->offset = 0;
        this->length_ = length;
    } else {
        this->data = data;
        this->offset = offset;
        this->length_ = length;
    }
}

java::lang::String* java::lang::String::toString()
{
    return this;
}

int32_t java::lang::String::length()
{
    return length_;
}

int32_t java::lang::String::hashCode()
{
    if(hashCode_ == 0) {
        auto h = int32_t(0);
        for (auto i = int32_t(0); i < length_; ++i) 
                        h = (h * int32_t(31)) + charAt(i);

        hashCode_ = h;
    }
    return hashCode_;
}

bool java::lang::String::equals(Object* o)
{
    if(static_cast< Object* >(this) == o) {
        return true;
    } else if(dynamic_cast< String* >(o) != nullptr) {
        auto s = java_cast< String* >(o);
        return npc(s)->length_ == length_ && compareTo(s) == 0;
    } else {
        return false;
    }
}

bool java::lang::String::equalsIgnoreCase(String* o)
{
    if(this == o) {
        return true;
    } else if(dynamic_cast< String* >(o) != nullptr) {
        auto s = java_cast< String* >(o);
        return npc(s)->length_ == length_ && compareToIgnoreCase(s) == 0;
    } else {
        return false;
    }
}

int32_t java::lang::String::compareTo(String* s)
{
    if(this == s)
        return 0;

    auto idx = int32_t(0);
    int32_t result;
    auto end = (length_ < npc(s)->length_ ? length_ : npc(s)->length_);
    while (idx < end) {
        if((result = charAt(idx) - npc(s)->charAt(idx)) != 0) {
            return result;
        }
        idx++;
    }
    return length_ - npc(s)->length_;
}

int32_t java::lang::String::compareTo(Object* o)
{ 
    return compareTo(dynamic_cast< String* >(o));
}

int32_t java::lang::String::compareToIgnoreCase(String* s)
{
    if(this == s)
        return 0;

    auto idx = int32_t(0);
    int32_t result;
    auto end = (length_ < npc(s)->length_ ? length_ : npc(s)->length_);
    while (idx < end) {
        if((result = Character::toLowerCase(charAt(idx)) - Character::toLowerCase(npc(s)->charAt(idx))) != 0) {
            return result;
        }
        idx++;
    }
    return length_ - npc(s)->length_;
}

java::lang::String* java::lang::String::trim()
{
    auto start = -int32_t(1);
    for (auto i = int32_t(0); i < length_; ++i) {
        auto c = charAt(i);
        if(start == -int32_t(1) && !Character::isWhitespace(c)) {
            start = i;
            break;
        }
    }
    auto end = -int32_t(1);
    for (auto i = length_ - int32_t(1); i >= 0; --i) {
        auto c = charAt(i);
        if(end == -int32_t(1) && !Character::isWhitespace(c)) {
            end = i + int32_t(1);
            break;
        }
    }
    if(start >= end) {
        return u""_j;
    } else {
        return substring(start, end);
    }
}

java::lang::String* java::lang::String::toLowerCase()
{
    for (auto j = int32_t(0); j < length_; ++j) {
        auto ch = charAt(j);
        if(Character::toLowerCase(ch) != ch) {
            auto b = new ::char16_tArray(length_);
            for (auto i = int32_t(0); i < length_; ++i) {
                (*b)[i] = Character::toLowerCase(charAt(i));
            }
            return new String(b, int32_t(0), length_, false);
        }
    }
    return this;
}

java::lang::String* java::lang::String::toUpperCase()
{
    for (auto j = int32_t(0); j < length_; ++j) {
        auto ch = charAt(j);
        if(Character::toUpperCase(ch) != ch) {
            auto b = new ::char16_tArray(length_);
            for (auto i = int32_t(0); i < length_; ++i) {
                (*b)[i] = Character::toUpperCase(charAt(i));
            }
            return new String(b, int32_t(0), length_, false);
        }
    }
    return this;
}

int32_t java::lang::String::indexOf(int32_t c)
{
    return indexOf(c, int32_t(0));
}

int32_t java::lang::String::indexOf(int32_t c, int32_t start)
{
    for (auto i = start; i < length_; ++i) {
        if(charAt(i) == c) {
            return i;
        }
    }
    return -int32_t(1);
}

int32_t java::lang::String::lastIndexOf(int32_t ch)
{
    return lastIndexOf(ch, length_ - int32_t(1));
}

int32_t java::lang::String::indexOf(String* s)
{
    return indexOf(s, int32_t(0));
}

int32_t java::lang::String::indexOf(String* s, int32_t start)
{
    if(npc(s)->length_ == 0)
        return start;

    for (auto i = start; i < length_ - npc(s)->length_ + int32_t(1); ++i) {
        auto j = int32_t(0);
        for (; j < npc(s)->length_; ++j) {
            if(charAt(i + j) != npc(s)->charAt(j)) {
                break;
            }
        }
        if(j == npc(s)->length_) {
            return i;
        }
    }
    return -int32_t(1);
}

int32_t java::lang::String::lastIndexOf(String* s)
{
    return lastIndexOf(s, length_ - npc(s)->length_);
}

int32_t java::lang::String::lastIndexOf(String* s, int32_t lastIndex)
{
    if(npc(s)->length_ == 0)
        return lastIndex;

    for (auto i = Math::min(length_ - npc(s)->length_, lastIndex); i >= 0; --i) {
        auto j = int32_t(0);
        for (; j < npc(s)->length_ && i + j < length_; ++j) {
            if(charAt(i + j) != npc(s)->charAt(j)) {
                break;
            }
        }
        if(j == npc(s)->length_) {
            return i;
        }
    }
    return -int32_t(1);
}

java::lang::String* java::lang::String::replace(char16_t oldChar, char16_t newChar)
{
    if(dynamic_cast< ::char16_tArray* >(data) != nullptr) {
        auto buf = new ::char16_tArray(length_);
        for (auto i = int32_t(0); i < length_; i++) {
            if(charAt(i) == oldChar) {
                (*buf)[i] = newChar;
            } else {
                (*buf)[i] = charAt(i);
            }
        }
        return new String(buf, int32_t(0), length_, false);
    } else {
        auto buf = new ::int8_tArray(length_);
        auto orig = java_cast< ::int8_tArray* >(data);
        auto oldByte = static_cast< int8_t >(oldChar);
        auto newByte = static_cast< int8_t >(newChar);
        for (auto i = int32_t(0); i < length_; i++) {
            if((*orig)[i + offset] == oldByte) {
                (*buf)[i] = newByte;
            } else {
                (*buf)[i] = (*orig)[i + offset];
            }
        }
        return new String(buf, int32_t(0), length_, false);
    }
}

java::lang::String* java::lang::String::substring(int32_t start)
{
    return substring(start, length_);
}

java::lang::String* java::lang::String::substring(int32_t start, int32_t end)
{
    if(start >= 0 && end >= start && end <= length_) {
        if(start == 0 && end == length_) {
            return this;
        } else if(end - start == 0) {
            return u""_j;
        } else {
            return new String(data, offset + start, end - start, false);
        }
    } else {
        throw new IndexOutOfBoundsException(::java::lang::StringBuilder().append(start)->append(u" not in [0, "_j)
            ->append(end)
            ->append(u") or "_j)
            ->append(end)
            ->append(u" > "_j)
            ->append(length_)->toString());
    }
}

bool java::lang::String::startsWith(String* s)
{
    if(length_ >= npc(s)->length_) {
        return npc(substring(0, npc(s)->length_))->compareTo(s) == 0;
    } else {
        return false;
    }
}

bool java::lang::String::startsWith(String* s, int32_t start)
{
    if(length_ >= npc(s)->length_ + start) {
        return npc(substring(start, npc(s)->length_))->compareTo(s) == 0;
    } else {
        return false;
    }
}

bool java::lang::String::endsWith(String* s)
{
    if(length_ >= npc(s)->length_) {
        return npc(substring(length_ - npc(s)->length_))->compareTo(s) == 0;
    } else {
        return false;
    }
}

java::lang::String* java::lang::String::concat(String* s)
{
    if(npc(s)->length() == 0) {
        return this;
    } else {
        return ::java::lang::StringBuilder().append(this)->append(s)->toString();
    }
}

void java::lang::String::getBytes(int32_t srcOffset, int32_t srcLength, ::int8_tArray* dst, int32_t dstOffset)
{
    if(srcOffset < 0 || srcOffset + srcLength > length_) {
        throw new IndexOutOfBoundsException();
    }
    if(dynamic_cast< ::char16_tArray* >(data) != nullptr) {
        auto src = java_cast< ::char16_tArray* >(data);
        for (auto i = int32_t(0); i < srcLength; ++i) {
            (*dst)[i + dstOffset] = static_cast< int8_t >((*src)[i + offset + srcOffset]);
        }
    } else {
        auto src = java_cast< ::int8_tArray* >(data);
        System::arraycopy(src, offset + srcOffset, dst, dstOffset, srcLength);
    }
}

int8_tArray* java::lang::String::getBytes()
{
    try {
        return getBytes(DEFAULT_ENCODING_);
    } catch (::java::io::UnsupportedEncodingException* ex) {
        throw new RuntimeException(::java::lang::StringBuilder().append(u"Default '"_j)->append(DEFAULT_ENCODING_)
            ->append(u"' encoding not handled"_j)->toString(), ex);
    }
}

int8_tArray* java::lang::String::getBytes(String* format) /* throws(java.io.UnsupportedEncodingException) */
{
    if(dynamic_cast< ::int8_tArray* >(data) != nullptr) {
        auto b = new ::int8_tArray(length_);
        getBytes(0, length_, b, 0);
        return b;
    }
    auto fmt = npc(npc(format)->trim())->toUpperCase();
    if(npc(DEFAULT_ENCODING_)->equals(static_cast< Object* >(fmt))) {
        return ::avian::Utf8::encode(java_cast< ::char16_tArray* >(data), offset, length_);
    } else if(npc(ISO_8859_1_ENCODING_)->equals(static_cast< Object* >(fmt)) || npc(LATIN_1_ENCODING_)->equals(static_cast< Object* >(fmt))) {
        return ::avian::Iso88591::encode(java_cast< ::char16_tArray* >(data), offset, length_);
    } else {
        throw new ::java::io::UnsupportedEncodingException(::java::lang::StringBuilder().append(u"Encoding "_j)->append(format)
            ->append(u" not supported"_j)->toString());
    }
}

void java::lang::String::getChars(int32_t srcOffset, int32_t srcEnd, ::char16_tArray* dst, int32_t dstOffset)
{
    if(srcOffset < 0 || srcEnd > length_) {
        throw new IndexOutOfBoundsException();
    }
    auto srcLength = srcEnd - srcOffset;
    if(dynamic_cast< ::char16_tArray* >(data) != nullptr) {
        auto src = java_cast< ::char16_tArray* >(data);
        System::arraycopy(src, offset + srcOffset, dst, dstOffset, srcLength);
    } else {
        auto src = java_cast< ::int8_tArray* >(data);
        for (auto i = int32_t(0); i < srcLength; ++i) {
            (*dst)[i + dstOffset] = static_cast< char16_t >((*src)[i + offset + srcOffset]);
        }
    }
}

char16_tArray* java::lang::String::toCharArray_()
{
    auto b = new ::char16_tArray(length_);
    getChars(0, length_, b, 0);
    return b;
}

char16_t java::lang::String::charAt(int32_t index)
{
    if(index < 0 || index > length_) {
        throw new IndexOutOfBoundsException();
    }
    if(dynamic_cast< ::char16_tArray* >(data) != nullptr) {
        return (*(java_cast< ::char16_tArray* >(data)))[index + offset];
    } else {
        return static_cast< char16_t >((*(java_cast< ::int8_tArray* >(data)))[index + offset]);
    }
}

java::lang::StringArray* java::lang::String::split(String* regex)
{
    return split(regex, 0);
}

java::lang::StringArray* java::lang::String::split(String* regex, int32_t limit)
{
    return npc(::java::util::regex::Pattern::compile(regex))->split(this, limit);
}

java::lang::CharSequence* java::lang::String::subSequence(int32_t start, int32_t end)
{
    return substring(start, end);
}

bool java::lang::String::matches(String* regex)
{
    return ::java::util::regex::Pattern::matches(regex, this);
}

java::lang::String* java::lang::String::replaceFirst(String* regex, String* replacement)
{
    return npc(npc(::java::util::regex::Pattern::compile(regex))->matcher(this))->replaceFirst(replacement);
}

java::lang::String* java::lang::String::replaceAll(String* regex, String* replacement)
{
    return npc(npc(::java::util::regex::Pattern::compile(regex))->matcher(this))->replaceAll(replacement);
}

java::lang::String* java::lang::String::replace(CharSequence* target, CharSequence* replace)
{
    if(npc(target)->length() == 0) {
        return this->infuse(npc(replace)->toString());
    }
    auto targetString = npc(target)->toString();
    auto replaceString = npc(replace)->toString();
    auto targetSize = npc(target)->length();
    auto returnValue = new StringBuilder();
    auto unhandled = this;
    auto index = -int32_t(1);
    while ((index = npc(unhandled)->indexOf(targetString)) != -int32_t(1)) {
        npc(npc(returnValue)->append(npc(unhandled)->substring(0, index)))->append(replaceString);
        unhandled = npc(unhandled)->substring(index + targetSize, npc(unhandled)->length());
    }
    npc(returnValue)->append(unhandled);
    return npc(returnValue)->toString();
}

java::lang::String* java::lang::String::infuse(String* infuseWith)
{
    auto retVal = new StringBuilder();
    auto me = this;
    for (auto i = int32_t(0); i < npc(me)->length(); i++) {
        npc(npc(retVal)->append(infuseWith))->append(npc(me)->substring(i, i + int32_t(1)));
    }
    npc(retVal)->append(infuseWith);
    return npc(retVal)->toString();
}

java::lang::String* java::lang::String::valueOf(Object* s)
{
    clinit();
    return s == nullptr ? u"null"_j : npc(s)->toString();
}

java::lang::String* java::lang::String::valueOf(bool v)
{
    clinit();
    return Boolean::toString(v);
}

java::lang::String* java::lang::String::valueOf(int8_t v)
{
    clinit();
    return Byte::toString(v);
}

java::lang::String* java::lang::String::valueOf(int16_t v)
{
    clinit();
    return Short::toString(v);
}

java::lang::String* java::lang::String::valueOf(char16_t v)
{
    clinit();
    return Character::toString(v);
}

java::lang::String* java::lang::String::valueOf(int32_t v)
{
    clinit();
    return Integer::toString(v);
}

java::lang::String* java::lang::String::valueOf(int64_t v)
{
    clinit();
    return Long::toString(v);
}

java::lang::String* java::lang::String::valueOf(float v)
{
    clinit();
    return Float::toString(v);
}

java::lang::String* java::lang::String::valueOf(double v)
{
    clinit();
    return Double::toString(v);
}

java::lang::String* java::lang::String::valueOf(::char16_tArray* data, int32_t offset, int32_t length)
{
    clinit();
    return new String(data, offset, length);
}

java::lang::String* java::lang::String::valueOf(::char16_tArray* data)
{
    clinit();
    return valueOf(data, 0, npc(data)->length);
}

int32_t java::lang::String::lastIndexOf(int32_t ch, int32_t lastIndex)
{
    for (auto i = lastIndex; i >= 0; --i) {
        if(charAt(i) == ch) {
            return i;
        }
    }
    return -int32_t(1);
}

bool java::lang::String::regionMatches(int32_t thisOffset, String* match, int32_t matchOffset, int32_t length)
{
    return regionMatches(false, thisOffset, match, matchOffset, length);
}

bool java::lang::String::regionMatches(bool ignoreCase, int32_t thisOffset, String* match, int32_t matchOffset, int32_t length)
{
    auto a = substring(thisOffset, thisOffset + length);
    auto b = npc(match)->substring(matchOffset, matchOffset + length);
    if(ignoreCase) {
        return npc(a)->equalsIgnoreCase(b);
    } else {
        return npc(a)->equals(static_cast< Object* >(b));
    }
}

bool java::lang::String::isEmpty()
{
    return length_ == 0;
}

bool java::lang::String::contains(CharSequence* match)
{
    return indexOf(npc(match)->toString()) != -int32_t(1);
}

int32_t java::lang::String::codePointAt(int32_t offset)
{
    return Character::codePointAt(this, offset);
}

int32_t java::lang::String::codePointCount(int32_t start, int32_t end)
{
    return Character::codePointCount(this, start, end);
}

java::lang::String* java::lang::String::toUpperCase(::java::util::Locale* locale)
{
    if(locale == ::java::util::Locale::ENGLISH()) {
        return toUpperCase();
    } else {
        throw new UnsupportedOperationException(::java::lang::StringBuilder().append(u"toUpperCase("_j)->append(static_cast< Object* >(locale))
            ->append(u')')->toString());
    }
}

java::lang::String* java::lang::String::toLowerCase(::java::util::Locale* locale)
{
    if(locale == ::java::util::Locale::ENGLISH()) {
        return toLowerCase();
    } else {
        throw new UnsupportedOperationException(::java::lang::StringBuilder().append(u"toLowerCase("_j)->append(static_cast< Object* >(locale))
            ->append(u')')->toString());
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::String::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.String", 16);
    return c;
}

void java::lang::String::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CASE_INSENSITIVE_ORDER_ = new String_1();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* java::lang::String::getClass0()
{
    return class_();
}

