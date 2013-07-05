// Generated from /runtime/java/io/File.java
#include <java/io/File_Pair.hpp>

#include <java/lang/String.hpp>

java::io::File_Pair::File_Pair(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::File_Pair::File_Pair(::java::lang::String* value, File_Pair* next) 
    : File_Pair(*static_cast< ::default_init_tag* >(0))
{
    ctor(value,next);
}

void java::io::File_Pair::ctor(::java::lang::String* value, File_Pair* next)
{
    super::ctor();
    this->value = value;
    this->next = next;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::File_Pair::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.File.Pair", 17);
    return c;
}

java::lang::Class* java::io::File_Pair::getClass0()
{
    return class_();
}

