// Generated from /runtime/java/io/Writer.java
#include <java/io/Writer.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::Writer::Writer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::Writer::Writer()
    : Writer(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::io::Writer::write(int32_t c) /* throws(IOException) */
{
    auto buffer = new ::char16_tArray({static_cast< char16_t >(c)});
    write(buffer);
}

void java::io::Writer::write(::char16_tArray* buffer) /* throws(IOException) */
{
    write(buffer, int32_t(0), npc(buffer)->length);
}

void java::io::Writer::write(::java::lang::String* s) /* throws(IOException) */
{
    write(npc(s)->toCharArray_());
}

void java::io::Writer::write(::java::lang::String* s, int32_t offset, int32_t length) /* throws(IOException) */
{
    auto b = new ::char16_tArray(length);
    npc(s)->getChars(offset, offset + length, b, 0);
    write(b);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::Writer::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.Writer", 14);
    return c;
}

java::lang::Class* java::io::Writer::getClass0()
{
    return class_();
}

