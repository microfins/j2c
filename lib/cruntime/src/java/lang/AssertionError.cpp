// Generated from /runtime/java/lang/AssertionError.java
#include <java/lang/AssertionError.hpp>

#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

java::lang::AssertionError::AssertionError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::AssertionError::AssertionError() 
    : AssertionError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::AssertionError::AssertionError(bool detailMessage) 
    : AssertionError(*static_cast< ::default_init_tag* >(0))
{
    ctor(detailMessage);
}

java::lang::AssertionError::AssertionError(char16_t detailMessage) 
    : AssertionError(*static_cast< ::default_init_tag* >(0))
{
    ctor(detailMessage);
}

java::lang::AssertionError::AssertionError(double detailMessage) 
    : AssertionError(*static_cast< ::default_init_tag* >(0))
{
    ctor(detailMessage);
}

java::lang::AssertionError::AssertionError(float detailMessage) 
    : AssertionError(*static_cast< ::default_init_tag* >(0))
{
    ctor(detailMessage);
}

java::lang::AssertionError::AssertionError(int32_t detailMessage) 
    : AssertionError(*static_cast< ::default_init_tag* >(0))
{
    ctor(detailMessage);
}

java::lang::AssertionError::AssertionError(int64_t detailMessage) 
    : AssertionError(*static_cast< ::default_init_tag* >(0))
{
    ctor(detailMessage);
}

java::lang::AssertionError::AssertionError(Object* detailMessage) 
    : AssertionError(*static_cast< ::default_init_tag* >(0))
{
    ctor(detailMessage);
}

void java::lang::AssertionError::ctor()
{
    super::ctor(u""_j, nullptr);
}

void java::lang::AssertionError::ctor(bool detailMessage)
{
    super::ctor(::java::lang::StringBuilder().append(u""_j)->append(detailMessage)->toString(), nullptr);
}

void java::lang::AssertionError::ctor(char16_t detailMessage)
{
    super::ctor(::java::lang::StringBuilder().append(u""_j)->append(detailMessage)->toString(), nullptr);
}

void java::lang::AssertionError::ctor(double detailMessage)
{
    super::ctor(::java::lang::StringBuilder().append(u""_j)->append(detailMessage)->toString(), nullptr);
}

void java::lang::AssertionError::ctor(float detailMessage)
{
    super::ctor(::java::lang::StringBuilder().append(u""_j)->append(detailMessage)->toString(), nullptr);
}

void java::lang::AssertionError::ctor(int32_t detailMessage)
{
    super::ctor(::java::lang::StringBuilder().append(u""_j)->append(detailMessage)->toString(), nullptr);
}

void java::lang::AssertionError::ctor(int64_t detailMessage)
{
    super::ctor(::java::lang::StringBuilder().append(u""_j)->append(detailMessage)->toString(), nullptr);
}

void java::lang::AssertionError::ctor(Object* detailMessage)
{
    super::ctor(::java::lang::StringBuilder().append(u""_j)->append(static_cast< Object* >(detailMessage))->toString(), nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::AssertionError::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.AssertionError", 24);
    return c;
}

java::lang::Class* java::lang::AssertionError::getClass0()
{
    return class_();
}

