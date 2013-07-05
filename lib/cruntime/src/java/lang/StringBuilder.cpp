// Generated from /runtime/java/lang/StringBuilder.java
#include <java/lang/StringBuilder.hpp>

#include <java/lang/CharSequence.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder_Cell.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::lang::StringBuilder::StringBuilder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::StringBuilder::StringBuilder(String* s) 
    : StringBuilder(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

java::lang::StringBuilder::StringBuilder(int32_t capacity) 
    : StringBuilder(*static_cast< ::default_init_tag* >(0))
{
    ctor(capacity);
}

java::lang::StringBuilder::StringBuilder() 
    : StringBuilder(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t java::lang::StringBuilder::BufferSize;

void java::lang::StringBuilder::ctor(String* s)
{
    super::ctor();
    append(s);
}

void java::lang::StringBuilder::ctor(int32_t capacity)
{
    super::ctor();
}

void java::lang::StringBuilder::ctor()
{
    ctor(int32_t(0));
}

void java::lang::StringBuilder::flush()
{
    if(position > 0) {
        chain = new StringBuilder_Cell(new String(buffer, int32_t(0), position, false), chain);
        buffer = nullptr;
        position = 0;
    }
}

java::lang::StringBuilder* java::lang::StringBuilder::append(String* s)
{
    if(s == nullptr) {
        return append(u"null"_j);
    } else {
        if(npc(s)->length() > 0) {
            if(buffer != nullptr && npc(s)->length() <= npc(buffer)->length - position) {
                npc(s)->getChars(0, npc(s)->length(), buffer, position);
                position += npc(s)->length();
            } else {
                flush();
                chain = new StringBuilder_Cell(s, chain);
            }
            length_ += npc(s)->length();
        }
        return this;
    }
}

java::lang::StringBuilder* java::lang::StringBuilder::append(StringBuffer* sb)
{
    return append(npc(sb)->toString());
}

java::lang::StringBuilder* java::lang::StringBuilder::append(CharSequence* sequence)
{
    return append(npc(sequence)->toString());
}

java::lang::Appendable* java::lang::StringBuilder::append(CharSequence* sequence, int32_t start, int32_t end)
{
    return append(npc(sequence)->subSequence(start, end));
}

java::lang::StringBuilder* java::lang::StringBuilder::append(::char16_tArray* b, int32_t offset, int32_t length)
{
    return append(new String(b, offset, length));
}

java::lang::StringBuilder* java::lang::StringBuilder::append(Object* o)
{
    return append(o == nullptr ? u"null"_j : npc(o)->toString());
}

java::lang::StringBuilder* java::lang::StringBuilder::append(char16_t v)
{
    if(buffer == nullptr) {
        buffer = new ::char16_tArray(BufferSize);
    } else if(position >= npc(buffer)->length) {
        flush();
        buffer = new ::char16_tArray(BufferSize);
    }
    (*buffer)[position++] = v;
    ++length_;
    return this;
}

java::lang::StringBuilder* java::lang::StringBuilder::append(bool v)
{
    return append(String::valueOf(v));
}

java::lang::StringBuilder* java::lang::StringBuilder::append(int32_t v)
{
    return append(String::valueOf(v));
}

java::lang::StringBuilder* java::lang::StringBuilder::append(int64_t v)
{
    return append(String::valueOf(v));
}

java::lang::StringBuilder* java::lang::StringBuilder::append(float v)
{
    return append(String::valueOf(v));
}

java::lang::StringBuilder* java::lang::StringBuilder::append(double v)
{
    return append(String::valueOf(v));
}

char16_t java::lang::StringBuilder::charAt(int32_t i)
{
    if(i < 0 || i >= length_) {
        throw new IndexOutOfBoundsException();
    }
    flush();
    auto index = length_;
    for (auto *c = chain; c != nullptr; c = npc(c)->next) {
        auto start = index - npc(npc(c)->value)->length();
        index = start;
        if(i >= start) {
            return npc(npc(c)->value)->charAt(i - start);
        }
    }
    throw new RuntimeException();
}

java::lang::StringBuilder* java::lang::StringBuilder::insert(int32_t i, String* s)
{
    if(i < 0 || i > length_) {
        throw new IndexOutOfBoundsException();
    }
    if(i == length_) {
        append(s);
    } else {
        flush();
        auto index = length_;
        for (auto *c = chain; c != nullptr; c = npc(c)->next) {
            auto start = index - npc(npc(c)->value)->length();
            index = start;
            if(i >= start) {
                if(i == start) {
                    npc(c)->next = new StringBuilder_Cell(s, npc(c)->next);
                } else {
                    auto v = npc(c)->value;
                    npc(c)->value = npc(v)->substring(i - start, npc(v)->length());
                    npc(c)->next = new StringBuilder_Cell(s, new StringBuilder_Cell(npc(v)->substring(0, i - start), npc(c)->next));
                }
                break;
            }
        }
        length_ += npc(s)->length();
    }
    return this;
}

java::lang::StringBuilder* java::lang::StringBuilder::insert(int32_t i, CharSequence* s)
{
    return insert(i, npc(s)->toString());
}

java::lang::StringBuilder* java::lang::StringBuilder::insert(int32_t i, char16_t c)
{
    return insert(i, new String(new ::char16_tArray({c}), int32_t(0), int32_t(1), false));
}

java::lang::StringBuilder* java::lang::StringBuilder::insert(int32_t i, int32_t v)
{
    return insert(i, String::valueOf(v));
}

java::lang::StringBuilder* java::lang::StringBuilder::delete_(int32_t start, int32_t end)
{
    if(start >= end) {
        return this;
    }
    if(start < 0 || end > length_) {
        throw new IndexOutOfBoundsException();
    }
    flush();
    auto index = length_;
    StringBuilder_Cell* p = nullptr;
    for (auto *c = chain; c != nullptr; c = npc(c)->next) {
        auto e = index;
        auto s = index - npc(npc(c)->value)->length();
        index = s;
        if(end >= e) {
            if(start <= s) {
                if(p == nullptr) {
                    chain = npc(c)->next;
                } else {
                    npc(p)->next = npc(c)->next;
                }
            } else {
                npc(c)->value = npc(npc(c)->value)->substring(0, start - s);
                break;
            }
        } else {
            if(start <= s) {
                npc(c)->value = npc(npc(c)->value)->substring(end - s, e - s);
            } else {
                auto v = npc(c)->value;
                npc(c)->value = npc(v)->substring(end - s, e - s);
                npc(c)->next = new StringBuilder_Cell(npc(v)->substring(0, start - s), npc(c)->next);
                break;
            }
        }
    }
    length_ -= (end - start);
    return this;
}

java::lang::StringBuilder* java::lang::StringBuilder::deleteCharAt(int32_t i)
{
    return delete_(i, i + int32_t(1));
}

java::lang::StringBuilder* java::lang::StringBuilder::replace(int32_t start, int32_t end, String* str)
{
    delete_(start, end);
    insert(start, str);
    return this;
}

int32_t java::lang::StringBuilder::indexOf(String* s)
{
    return indexOf(s, 0);
}

int32_t java::lang::StringBuilder::indexOf(String* s, int32_t start)
{
    auto slength = npc(s)->length();
    if(slength == 0)
        return start;

    for (auto i = start; i < length_ - slength + int32_t(1); ++i) {
        auto j = int32_t(0);
        for (; j < slength; ++j) {
            if(charAt(i + j) != npc(s)->charAt(j)) {
                break;
            }
        }
        if(j == slength) {
            return i;
        }
    }
    return -int32_t(1);
}

int32_t java::lang::StringBuilder::lastIndexOf(String* s)
{
    return lastIndexOf(s, length_ - npc(s)->length());
}

int32_t java::lang::StringBuilder::lastIndexOf(String* s, int32_t lastIndex)
{
    auto slength = npc(s)->length();
    if(slength == 0)
        return lastIndex;

    for (auto i = Math::min(length_ - slength, lastIndex); i >= 0; --i) {
        auto j = int32_t(0);
        for (; j < slength && i + j < length_; ++j) {
            if(charAt(i + j) != npc(s)->charAt(j)) {
                break;
            }
        }
        if(j == slength) {
            return i;
        }
    }
    return -int32_t(1);
}

int32_t java::lang::StringBuilder::length()
{
    return length_;
}

void java::lang::StringBuilder::setLength(int32_t v)
{
    if(v < 0) {
        throw new IndexOutOfBoundsException();
    }
    if(v == 0) {
        length_ = 0;
        chain = nullptr;
        return;
    }
    flush();
    auto index = length_;
    length_ = v;
    for (auto *c = chain; c != nullptr; c = npc(c)->next) {
        auto start = index - npc(npc(c)->value)->length();
        if(v > start) {
            if(v < index) {
                npc(c)->value = npc(npc(c)->value)->substring(0, v - start);
            }
            break;
        }
        chain = npc(c)->next;
        index = start;
    }
}

void java::lang::StringBuilder::getChars(int32_t srcStart, int32_t srcEnd, ::char16_tArray* dst, int32_t dstStart)
{
    if(srcStart < 0 || srcEnd > length_) {
        throw new IndexOutOfBoundsException();
    }
    flush();
    auto index = length_;
    for (auto *c = chain; c != nullptr; c = npc(c)->next) {
        auto start = index - npc(npc(c)->value)->length();
        auto end = index;
        index = start;
        if(start < srcStart) {
            start = srcStart;
        }
        if(end > srcEnd) {
            end = srcEnd;
        }
        if(start < end) {
            npc(npc(c)->value)->getChars(start - index, end - index, dst, dstStart + (start - srcStart));
        }
    }
}

java::lang::String* java::lang::StringBuilder::toString()
{
    auto array = new ::char16_tArray(length_);
    getChars(0, length_, array, 0);
    return new String(array, int32_t(0), length_, false);
}

java::lang::String* java::lang::StringBuilder::substring(int32_t start)
{
    return substring(start, length_);
}

java::lang::String* java::lang::StringBuilder::substring(int32_t start, int32_t end)
{
    auto len = end - start;
    auto buf = new ::char16_tArray(len);
    getChars(start, end, buf, 0);
    return new String(buf, int32_t(0), len, false);
}

java::lang::CharSequence* java::lang::StringBuilder::subSequence(int32_t start, int32_t end)
{
    return substring(start, end);
}

void java::lang::StringBuilder::setCharAt(int32_t index, char16_t ch)
{
    if(index < 0 || index >= length_)
        throw new IndexOutOfBoundsException();

    deleteCharAt(index);
    insert(index, ch);
}

void java::lang::StringBuilder::ensureCapacity(int32_t capacity)
{
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::StringBuilder::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.StringBuilder", 23);
    return c;
}

java::lang::Class* java::lang::StringBuilder::getClass0()
{
    return class_();
}

