// Generated from /runtime/avian/Utf8.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class avian::Utf8
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static bool test(::java::lang::Object* data);
    static ::int8_tArray* encode(::char16_tArray* s16, int32_t offset, int32_t length);
    static ::java::lang::Object* decode(::int8_tArray* s8, int32_t offset, int32_t length);
    static ::char16_tArray* decode16(::int8_tArray* s8, int32_t offset, int32_t length);

private:
    static void cram(::java::lang::Object* data, int32_t index, int32_t val);
    static ::java::lang::Object* widen(::java::lang::Object* data, int32_t length, int32_t capacity);
    static ::java::lang::Object* trim(::java::lang::Object* data, int32_t length);

    // Generated

public:
    Utf8();
protected:
    Utf8(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
