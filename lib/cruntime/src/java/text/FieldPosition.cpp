// Generated from /runtime/java/text/FieldPosition.java
#include <java/text/FieldPosition.hpp>

java::text::FieldPosition::FieldPosition(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::text::FieldPosition::FieldPosition(int32_t field) 
    : FieldPosition(*static_cast< ::default_init_tag* >(0))
{
    ctor(field);
}

void java::text::FieldPosition::ctor(int32_t field)
{
    super::ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::text::FieldPosition::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.text.FieldPosition", 23);
    return c;
}

java::lang::Class* java::text::FieldPosition::getClass0()
{
    return class_();
}

