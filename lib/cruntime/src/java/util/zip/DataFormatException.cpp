// Generated from /runtime/java/util/zip/DataFormatException.java
#include <java/util/zip/DataFormatException.hpp>

java::util::zip::DataFormatException::DataFormatException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::zip::DataFormatException::DataFormatException(::java::lang::String* s) 
    : DataFormatException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

java::util::zip::DataFormatException::DataFormatException() 
    : DataFormatException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::util::zip::DataFormatException::ctor(::java::lang::String* s)
{
    super::ctor(s);
}

void java::util::zip::DataFormatException::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::zip::DataFormatException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.zip.DataFormatException", 33);
    return c;
}

java::lang::Class* java::util::zip::DataFormatException::getClass0()
{
    return class_();
}

