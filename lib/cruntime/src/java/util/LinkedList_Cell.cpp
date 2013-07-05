// Generated from /runtime/java/util/LinkedList.java
#include <java/util/LinkedList_Cell.hpp>

#include <java/lang/Object.hpp>

java::util::LinkedList_Cell::LinkedList_Cell(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::LinkedList_Cell::LinkedList_Cell(::java::lang::Object* value, LinkedList_Cell* prev, LinkedList_Cell* next) 
    : LinkedList_Cell(*static_cast< ::default_init_tag* >(0))
{
    ctor(value,prev,next);
}

void java::util::LinkedList_Cell::ctor(::java::lang::Object* value, LinkedList_Cell* prev, LinkedList_Cell* next)
{
    super::ctor();
    this->value = value;
    this->prev = prev;
    this->next = next;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::LinkedList_Cell::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.LinkedList.Cell", 25);
    return c;
}

java::lang::Class* java::util::LinkedList_Cell::getClass0()
{
    return class_();
}

