// Generated from /runtime/java/io/LineNumberReader.java
#include <java/io/LineNumberReader.hpp>

#include <Array.hpp>

java::io::LineNumberReader::LineNumberReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::LineNumberReader::LineNumberReader(Reader* in, int32_t bufferSize) 
    : LineNumberReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,bufferSize);
}

java::io::LineNumberReader::LineNumberReader(Reader* in) 
    : LineNumberReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void java::io::LineNumberReader::ctor(Reader* in, int32_t bufferSize)
{
    super::ctor(in, bufferSize);
}

void java::io::LineNumberReader::ctor(Reader* in)
{
    super::ctor(in);
}

int32_t java::io::LineNumberReader::getLineNumber()
{
    return line;
}

void java::io::LineNumberReader::setLineNumber(int32_t v)
{
    line = v;
}

int32_t java::io::LineNumberReader::read(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */
{
    auto c = super::read(b, offset, length);
    for (auto i = int32_t(0); i < c; ++i) {
        if((*b)[i] == u'\u000a') {
            ++line;
        }
    }
    return c;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::LineNumberReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.LineNumberReader", 24);
    return c;
}

int32_t java::io::LineNumberReader::read()
{
    return super::read();
}

int32_t java::io::LineNumberReader::read(::char16_tArray* buffer)
{
    return super::read(buffer);
}

java::lang::Class* java::io::LineNumberReader::getClass0()
{
    return class_();
}

