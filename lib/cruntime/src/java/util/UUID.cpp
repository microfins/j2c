// Generated from /runtime/java/util/UUID.java
#include <java/util/UUID.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Random.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::UUID::UUID(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::UUID::UUID(::int8_tArray* data) 
    : UUID(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

void java::util::UUID::ctor(::int8_tArray* data)
{
    super::ctor();
    this->data = data;
}

java::util::UUID* java::util::UUID::randomUUID()
{
    clinit();
    auto array = new ::int8_tArray(int32_t(16));
    (new Random())->nextBytes(array);
    (*array)[int32_t(6)] &= 15;
    (*array)[int32_t(6)] |= 64;
    (*array)[int32_t(8)] &= 63;
    (*array)[int32_t(8)] |= 128;
    return new UUID(array);
}

java::lang::String* java::util::UUID::toString()
{
    auto sb = new ::java::lang::StringBuilder();
    toHex(sb, data, 0, 4);
    npc(sb)->append(u'-');
    toHex(sb, data, 4, 2);
    npc(sb)->append(u'-');
    toHex(sb, data, 6, 2);
    npc(sb)->append(u'-');
    toHex(sb, data, 8, 2);
    npc(sb)->append(u'-');
    toHex(sb, data, 10, 6);
    return npc(sb)->toString();
}

char16_t java::util::UUID::toHex(int32_t i)
{
    clinit();
    return static_cast< char16_t >((i < 10 ? i + u'0' : (i - int32_t(10)) + u'A'));
}

void java::util::UUID::toHex(::java::lang::StringBuilder* sb, ::int8_tArray* array, int32_t offset, int32_t length)
{
    clinit();
    for (auto i = offset; i < offset + length; ++i) {
        npc(sb)->append(toHex(((*array)[i] >> int32_t(4)) & int32_t(15)));
        npc(sb)->append(toHex(((*array)[i]) & int32_t(15)));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::UUID::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.UUID", 14);
    return c;
}

java::lang::Class* java::util::UUID::getClass0()
{
    return class_();
}

