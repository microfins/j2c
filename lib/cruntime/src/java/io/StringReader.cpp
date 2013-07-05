// Generated from /runtime/java/io/StringReader.java
#include <java/io/StringReader.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::io::StringReader::StringReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::StringReader::StringReader(::java::lang::String* in) 
    : StringReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void java::io::StringReader::init()
{
    position = int32_t(0);
}

void java::io::StringReader::ctor(::java::lang::String* in)
{
    super::ctor();
    init();
    this->in = in;
}

int32_t java::io::StringReader::read(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */
{
    if(length > npc(in)->length() - position) {
        length = npc(in)->length() - position;
        if(length <= 0) {
            return -int32_t(1);
        }
    }
    npc(in)->getChars(position, position + length, b, offset);
    position += length;
    return length;
}

void java::io::StringReader::close() /* throws(IOException) */
{
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::StringReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.StringReader", 20);
    return c;
}

int32_t java::io::StringReader::read()
{
    return super::read();
}

int32_t java::io::StringReader::read(::char16_tArray* buffer)
{
    return super::read(buffer);
}

java::lang::Class* java::io::StringReader::getClass0()
{
    return class_();
}

