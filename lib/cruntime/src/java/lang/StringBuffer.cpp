// Generated from /runtime/java/lang/StringBuffer.java
#include <java/lang/StringBuffer.hpp>

#include <java/lang/CharSequence.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::lang::StringBuffer::StringBuffer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::StringBuffer::StringBuffer(String* s) 
    : StringBuffer(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

java::lang::StringBuffer::StringBuffer(int32_t capacity) 
    : StringBuffer(*static_cast< ::default_init_tag* >(0))
{
    ctor(capacity);
}

java::lang::StringBuffer::StringBuffer() 
    : StringBuffer(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::StringBuffer::ctor(String* s)
{
    super::ctor();
    sb = new StringBuilder(s);
}

void java::lang::StringBuffer::ctor(int32_t capacity)
{
    super::ctor();
    sb = new StringBuilder(capacity);
}

void java::lang::StringBuffer::ctor()
{
    ctor(int32_t(0));
}

java::lang::StringBuffer* java::lang::StringBuffer::append(String* s)
{
    npc(sb)->append(s);
    return this;
}

java::lang::StringBuffer* java::lang::StringBuffer::append(CharSequence* s)
{
    npc(sb)->append(s);
    return this;
}

java::lang::StringBuffer* java::lang::StringBuffer::append(StringBuffer* s)
{
    npc(sb)->append(s);
    return this;
}

java::lang::StringBuffer* java::lang::StringBuffer::append(Object* o)
{
    npc(sb)->append(o);
    return this;
}

java::lang::StringBuffer* java::lang::StringBuffer::append(char16_t v)
{
    npc(sb)->append(v);
    return this;
}

java::lang::StringBuffer* java::lang::StringBuffer::append(bool v)
{
    npc(sb)->append(v);
    return this;
}

java::lang::StringBuffer* java::lang::StringBuffer::append(int32_t v)
{
    npc(sb)->append(v);
    return this;
}

java::lang::StringBuffer* java::lang::StringBuffer::append(int64_t v)
{
    npc(sb)->append(v);
    return this;
}

java::lang::StringBuffer* java::lang::StringBuffer::append(float v)
{
    npc(sb)->append(v);
    return this;
}

java::lang::StringBuffer* java::lang::StringBuffer::append(double v)
{
    npc(sb)->append(v);
    return this;
}

java::lang::StringBuffer* java::lang::StringBuffer::append(::char16_tArray* b, int32_t offset, int32_t length)
{
    npc(sb)->append(b, offset, length);
    return this;
}

java::lang::StringBuffer* java::lang::StringBuffer::append(::char16_tArray* b)
{
    npc(sb)->append(b, int32_t(0), npc(b)->length);
    return this;
}

int32_t java::lang::StringBuffer::indexOf(String* s)
{
    return npc(sb)->indexOf(s);
}

int32_t java::lang::StringBuffer::indexOf(String* s, int32_t fromIndex)
{
    return npc(sb)->indexOf(s, fromIndex);
}

java::lang::StringBuffer* java::lang::StringBuffer::insert(int32_t i, String* s)
{
    npc(sb)->insert(i, s);
    return this;
}

java::lang::StringBuffer* java::lang::StringBuffer::insert(int32_t i, char16_t c)
{
    npc(sb)->insert(i, c);
    return this;
}

java::lang::StringBuffer* java::lang::StringBuffer::insert(int32_t i, int32_t v)
{
    npc(sb)->insert(i, v);
    return this;
}

java::lang::StringBuffer* java::lang::StringBuffer::delete_(int32_t start, int32_t end)
{
    npc(sb)->delete_(start, end);
    return this;
}

java::lang::StringBuffer* java::lang::StringBuffer::deleteCharAt(int32_t i)
{
    npc(sb)->deleteCharAt(i);
    return this;
}

char16_t java::lang::StringBuffer::charAt(int32_t i)
{
    return npc(sb)->charAt(i);
}

int32_t java::lang::StringBuffer::length()
{
    return npc(sb)->length();
}

java::lang::StringBuffer* java::lang::StringBuffer::replace(int32_t start, int32_t end, String* str)
{
    npc(sb)->replace(start, end, str);
    return this;
}

void java::lang::StringBuffer::setLength(int32_t v)
{
    npc(sb)->setLength(v);
}

void java::lang::StringBuffer::setCharAt(int32_t index, char16_t ch)
{
    npc(sb)->setCharAt(index, ch);
}

void java::lang::StringBuffer::getChars(int32_t srcStart, int32_t srcEnd, ::char16_tArray* dst, int32_t dstStart)
{
    npc(sb)->getChars(srcStart, srcEnd, dst, dstStart);
}

java::lang::String* java::lang::StringBuffer::toString()
{
    return npc(sb)->toString();
}

java::lang::String* java::lang::StringBuffer::substring(int32_t start, int32_t end)
{
    return npc(sb)->substring(start, end);
}

java::lang::CharSequence* java::lang::StringBuffer::subSequence(int32_t start, int32_t end)
{
    return npc(sb)->subSequence(start, end);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::StringBuffer::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.StringBuffer", 22);
    return c;
}

java::lang::Class* java::lang::StringBuffer::getClass0()
{
    return class_();
}

