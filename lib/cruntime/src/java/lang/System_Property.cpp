// Generated from /runtime/java/lang/System.java
#include <java/lang/System_Property.hpp>

#include <java/lang/String.hpp>

java::lang::System_Property::System_Property(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::System_Property::System_Property(String* name, String* value, System_Property* next) 
    : System_Property(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,value,next);
}

void java::lang::System_Property::ctor(String* name, String* value, System_Property* next)
{
    super::ctor();
    this->name = name;
    this->value = value;
    this->next = next;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::System_Property::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.System.Property", 25);
    return c;
}

java::lang::Class* java::lang::System_Property::getClass0()
{
    return class_();
}

