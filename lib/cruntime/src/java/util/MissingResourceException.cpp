// Generated from /runtime/java/util/MissingResourceException.java
#include <java/util/MissingResourceException.hpp>

#include <java/lang/String.hpp>

java::util::MissingResourceException::MissingResourceException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::MissingResourceException::MissingResourceException(::java::lang::String* message, ::java::lang::String* class__, ::java::lang::String* key) 
    : MissingResourceException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,class__,key);
}

void java::util::MissingResourceException::ctor(::java::lang::String* message, ::java::lang::String* class__, ::java::lang::String* key)
{
    super::ctor(message);
    this->class__ = class__;
    this->key = key;
}

java::lang::String* java::util::MissingResourceException::getClassName()
{
    return class__;
}

java::lang::String* java::util::MissingResourceException::getKey()
{
    return key;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::MissingResourceException::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.MissingResourceException", 34);
    return c;
}

java::lang::Class* java::util::MissingResourceException::getClass0()
{
    return class_();
}

