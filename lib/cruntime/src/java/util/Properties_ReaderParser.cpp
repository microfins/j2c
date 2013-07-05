// Generated from /runtime/java/util/Properties.java
#include <java/util/Properties_ReaderParser.hpp>

#include <java/io/Reader.hpp>
#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::Properties_ReaderParser::Properties_ReaderParser(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Properties_ReaderParser::Properties_ReaderParser(::java::io::Reader* in) 
    : Properties_ReaderParser(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void java::util::Properties_ReaderParser::ctor(::java::io::Reader* in)
{
    super::ctor();
    this->in = in;
}

int32_t java::util::Properties_ReaderParser::readCharacter() /* throws(IOException) */
{
    return npc(in)->read();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Properties_ReaderParser::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Properties.ReaderParser", 33);
    return c;
}

java::lang::Class* java::util::Properties_ReaderParser::getClass0()
{
    return class_();
}

