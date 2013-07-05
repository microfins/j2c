// Generated from /runtime/avian/Iso88591.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class avian::Iso88591
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static ::int8_tArray* encode(::char16_tArray* s16, int32_t offset, int32_t length);

    // Generated
    Iso88591();
protected:
    Iso88591(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
