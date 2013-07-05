// Generated from /runtime/java/lang/StringBuilder.java
#include <java/lang/StringBuilder_Cell.hpp>

#include <java/lang/String.hpp>

java::lang::StringBuilder_Cell::StringBuilder_Cell(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::StringBuilder_Cell::StringBuilder_Cell(String* value, StringBuilder_Cell* next) 
    : StringBuilder_Cell(*static_cast< ::default_init_tag* >(0))
{
    ctor(value,next);
}

void java::lang::StringBuilder_Cell::ctor(String* value, StringBuilder_Cell* next)
{
    super::ctor();
    this->value = value;
    this->next = next;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::StringBuilder_Cell::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.StringBuilder.Cell", 28);
    return c;
}

java::lang::Class* java::lang::StringBuilder_Cell::getClass0()
{
    return class_();
}

