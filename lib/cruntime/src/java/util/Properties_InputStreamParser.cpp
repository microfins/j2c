// Generated from /runtime/java/util/Properties.java
#include <java/util/Properties_InputStreamParser.hpp>

#include <java/io/InputStream.hpp>
#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::Properties_InputStreamParser::Properties_InputStreamParser(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Properties_InputStreamParser::Properties_InputStreamParser(::java::io::InputStream* in) 
    : Properties_InputStreamParser(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void java::util::Properties_InputStreamParser::ctor(::java::io::InputStream* in)
{
    super::ctor();
    this->in = in;
}

int32_t java::util::Properties_InputStreamParser::readCharacter() /* throws(IOException) */
{
    return npc(in)->read();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Properties_InputStreamParser::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Properties.InputStreamParser", 38);
    return c;
}

java::lang::Class* java::util::Properties_InputStreamParser::getClass0()
{
    return class_();
}

