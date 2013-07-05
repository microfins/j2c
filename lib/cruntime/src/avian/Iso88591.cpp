// Generated from /runtime/avian/Iso88591.java
#include <avian/Iso88591.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

avian::Iso88591::Iso88591(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::Iso88591::Iso88591()
    : Iso88591(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int8_tArray* avian::Iso88591::encode(::char16_tArray* s16, int32_t offset, int32_t length)
{
    clinit();
    auto buf = new ::java::io::ByteArrayOutputStream();
    for (auto i = offset; i < offset + length; ++i) {
        npc(buf)->write(static_cast< int32_t >((*s16)[i]));
    }
    return npc(buf)->toByteArray_();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::Iso88591::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.Iso88591", 14);
    return c;
}

java::lang::Class* avian::Iso88591::getClass0()
{
    return class_();
}

