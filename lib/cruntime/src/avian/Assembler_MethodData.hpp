// Generated from /runtime/avian/Assembler.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class avian::Assembler_MethodData
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    int32_t flags {  };
    int32_t nameIndex {  };
    int32_t specIndex {  };
    ::int8_tArray* code {  };
protected:
    void ctor(int32_t flags, int32_t nameIndex, int32_t specIndex, ::int8_tArray* code);

    // Generated

public:
    Assembler_MethodData(int32_t flags, int32_t nameIndex, int32_t specIndex, ::int8_tArray* code);
protected:
    Assembler_MethodData(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Assembler;
};
