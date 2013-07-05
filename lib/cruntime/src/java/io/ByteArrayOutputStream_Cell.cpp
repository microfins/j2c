// Generated from /runtime/java/io/ByteArrayOutputStream.java
#include <java/io/ByteArrayOutputStream_Cell.hpp>

#include <Array.hpp>

java::io::ByteArrayOutputStream_Cell::ByteArrayOutputStream_Cell(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::ByteArrayOutputStream_Cell::ByteArrayOutputStream_Cell(::int8_tArray* array, int32_t offset, int32_t length, ByteArrayOutputStream_Cell* next) 
    : ByteArrayOutputStream_Cell(*static_cast< ::default_init_tag* >(0))
{
    ctor(array,offset,length,next);
}

void java::io::ByteArrayOutputStream_Cell::ctor(::int8_tArray* array, int32_t offset, int32_t length, ByteArrayOutputStream_Cell* next)
{
    super::ctor();
    this->array = array;
    this->offset = offset;
    this->length = length;
    this->next = next;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::ByteArrayOutputStream_Cell::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.ByteArrayOutputStream.Cell", 34);
    return c;
}

java::lang::Class* java::io::ByteArrayOutputStream_Cell::getClass0()
{
    return class_();
}

