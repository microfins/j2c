// Generated from /runtime/java/util/NoSuchElementException.java
#include <java/util/NoSuchElementException.hpp>

java::util::NoSuchElementException::NoSuchElementException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::NoSuchElementException::NoSuchElementException(::java::lang::String* message) 
    : NoSuchElementException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::util::NoSuchElementException::NoSuchElementException() 
    : NoSuchElementException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::util::NoSuchElementException::ctor(::java::lang::String* message)
{
    super::ctor(message);
}

void java::util::NoSuchElementException::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::NoSuchElementException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.NoSuchElementException", 32);
    return c;
}

java::lang::Class* java::util::NoSuchElementException::getClass0()
{
    return class_();
}

