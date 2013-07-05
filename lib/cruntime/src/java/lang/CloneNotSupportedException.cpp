// Generated from /runtime/java/lang/CloneNotSupportedException.java
#include <java/lang/CloneNotSupportedException.hpp>

java::lang::CloneNotSupportedException::CloneNotSupportedException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::CloneNotSupportedException::CloneNotSupportedException(String* message) 
    : CloneNotSupportedException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

java::lang::CloneNotSupportedException::CloneNotSupportedException() 
    : CloneNotSupportedException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::lang::CloneNotSupportedException::ctor(String* message)
{
    super::ctor(message);
}

void java::lang::CloneNotSupportedException::ctor()
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::CloneNotSupportedException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.CloneNotSupportedException", 36);
    return c;
}

java::lang::Class* java::lang::CloneNotSupportedException::getClass0()
{
    return class_();
}

