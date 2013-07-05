// Generated from /runtime/avian/Assembler.java
#include <avian/Assembler_MethodData.hpp>

#include <Array.hpp>

avian::Assembler_MethodData::Assembler_MethodData(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::Assembler_MethodData::Assembler_MethodData(int32_t flags, int32_t nameIndex, int32_t specIndex, ::int8_tArray* code) 
    : Assembler_MethodData(*static_cast< ::default_init_tag* >(0))
{
    ctor(flags,nameIndex,specIndex,code);
}

void avian::Assembler_MethodData::ctor(int32_t flags, int32_t nameIndex, int32_t specIndex, ::int8_tArray* code)
{
    super::ctor();
    this->flags = flags;
    this->nameIndex = nameIndex;
    this->specIndex = specIndex;
    this->code = code;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::Assembler_MethodData::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.Assembler.MethodData", 26);
    return c;
}

java::lang::Class* avian::Assembler_MethodData::getClass0()
{
    return class_();
}

