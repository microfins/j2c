// Generated from /runtime/avian/Utf8.java
#include <avian/Utf8.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/System.hpp>
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

avian::Utf8::Utf8(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::Utf8::Utf8()
    : Utf8(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool avian::Utf8::test(::java::lang::Object* data)
{
    clinit();
    if(!(dynamic_cast< ::int8_tArray* >(data) != nullptr))
        return false;

    auto b = java_cast< ::int8_tArray* >(data);
    for (auto i = int32_t(0); i < npc(b)->length; ++i) {
        if((static_cast< int32_t >((*b)[i]) & int32_t(128)) != 0)
            return true;

    }
    return false;
}

int8_tArray* avian::Utf8::encode(::char16_tArray* s16, int32_t offset, int32_t length)
{
    clinit();
    auto buf = new ::java::io::ByteArrayOutputStream();
    for (auto i = offset; i < offset + length; ++i) {
        auto c = (*s16)[i];
        if(c == char16_t(0x0000)) {
            npc(buf)->write(int32_t(0));
            npc(buf)->write(int32_t(0));
        } else if(c < 128) {
            npc(buf)->write(static_cast< int32_t >(c));
        } else if(c < 2048) {
            npc(buf)->write(int32_t(192) | (static_cast<char16_t>(static_cast<uint32_t>(c) >> int32_t(6))));
            npc(buf)->write(int32_t(128) | (c & int32_t(63)));
        } else {
            npc(buf)->write(int32_t(224) | ((static_cast<char16_t>(static_cast<uint32_t>(c) >> int32_t(12))) & int32_t(15)));
            npc(buf)->write(int32_t(128) | ((static_cast<char16_t>(static_cast<uint32_t>(c) >> int32_t(6))) & int32_t(63)));
            npc(buf)->write(int32_t(128) | (c & int32_t(63)));
        }
    }
    return npc(buf)->toByteArray_();
}

java::lang::Object* avian::Utf8::decode(::int8_tArray* s8, int32_t offset, int32_t length)
{
    clinit();
    ::java::lang::Object* buf = new ::int8_tArray(length);
    auto isMultiByte = false;
    int32_t i = offset, j = int32_t(0);
    while (i < offset + length) {
        int32_t x = (*s8)[i++];
        if((x & int32_t(128)) == 0) {
            if(x == 0) {
                if(i == offset + length) {
                    return nullptr;
                }
                ++i;
            }
            cram(buf, j++, x);
        } else if((x & int32_t(224)) == 192) {
            if(i == offset + length) {
                return nullptr;
            }
            if(!isMultiByte) {
                buf = widen(buf, j, length - int32_t(1));
                isMultiByte = true;
            }
            int32_t y = (*s8)[i++];
            cram(buf, j++, ((x & int32_t(31)) << int32_t(6)) | (y & int32_t(63)));
        } else if((x & int32_t(240)) == 224) {
            if(i + int32_t(1) >= offset + length) {
                return nullptr;
            }
            if(!isMultiByte) {
                buf = widen(buf, j, length - int32_t(2));
                isMultiByte = true;
            }
            int32_t y = (*s8)[i++];
            int32_t z = (*s8)[i++];
            cram(buf, j++, ((x & int32_t(15)) << int32_t(12)) | ((y & int32_t(63)) << int32_t(6)) | (z & int32_t(63)));
        }
    }
    return trim(buf, j);
}

char16_tArray* avian::Utf8::decode16(::int8_tArray* s8, int32_t offset, int32_t length)
{
    clinit();
    auto decoded = decode(s8, offset, length);
    if(decoded == nullptr) {
        return nullptr;
    } else if(dynamic_cast< ::char16_tArray* >(decoded) != nullptr) {
        return java_cast< ::char16_tArray* >(decoded);
    } else {
        return java_cast< ::char16_tArray* >(widen(decoded, length, length));
    }
}

void avian::Utf8::cram(::java::lang::Object* data, int32_t index, int32_t val)
{
    clinit();
    if(dynamic_cast< ::int8_tArray* >(data) != nullptr)
        (*(java_cast< ::int8_tArray* >(data)))[index] = static_cast< int8_t >(val);
    else
        (*(java_cast< ::char16_tArray* >(data)))[index] = static_cast< char16_t >(val);
}

java::lang::Object* avian::Utf8::widen(::java::lang::Object* data, int32_t length, int32_t capacity)
{
    clinit();
    auto src = java_cast< ::int8_tArray* >(data);
    auto result = new ::char16_tArray(capacity);
    for (auto i = int32_t(0); i < length; ++i) 
                (*result)[i] = static_cast< char16_t >((static_cast< int32_t >((*src)[i]) & int32_t(255)));

    return result;
}

java::lang::Object* avian::Utf8::trim(::java::lang::Object* data, int32_t length)
{
    clinit();
    if(dynamic_cast< ::int8_tArray* >(data) != nullptr)
        return data;

    if(npc((java_cast< ::char16_tArray* >(data)))->length == length)
        return data;

    auto result = new ::char16_tArray(length);
    ::java::lang::System::arraycopy(data, 0, result, 0, length);
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::Utf8::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.Utf8", 10);
    return c;
}

java::lang::Class* avian::Utf8::getClass0()
{
    return class_();
}

