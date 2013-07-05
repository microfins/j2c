// Generated from /runtime/java/nio/ReadOnlyBufferException.java
#include <java/nio/ReadOnlyBufferException.hpp>

java::nio::ReadOnlyBufferException::ReadOnlyBufferException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::ReadOnlyBufferException::ReadOnlyBufferException()
    : ReadOnlyBufferException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::ReadOnlyBufferException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.ReadOnlyBufferException", 32);
    return c;
}

java::lang::Class* java::nio::ReadOnlyBufferException::getClass0()
{
    return class_();
}

