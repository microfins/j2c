// Generated from /runtime/java/lang/IllegalMonitorStateException.java
#include <java/lang/IllegalMonitorStateException.hpp>

java::lang::IllegalMonitorStateException::IllegalMonitorStateException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::IllegalMonitorStateException::IllegalMonitorStateException(String* message) 
    : IllegalMonitorStateException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::IllegalMonitorStateException::IllegalMonitorStateException() 
    : IllegalMonitorStateException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::IllegalMonitorStateException::ctor(String* message)
{
    super::ctor(message, nullptr);
}

void java::lang::IllegalMonitorStateException::ctor()
{
    ctor(nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::IllegalMonitorStateException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.IllegalMonitorStateException", 38);
    return c;
}

java::lang::Class* java::lang::IllegalMonitorStateException::getClass0()
{
    return class_();
}

