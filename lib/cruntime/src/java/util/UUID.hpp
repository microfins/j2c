// Generated from /runtime/java/util/UUID.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::UUID
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::int8_tArray* data {  };
protected:
    void ctor(::int8_tArray* data);

public:
    static UUID* randomUUID();
    ::java::lang::String* toString() override;

private:
    static char16_t toHex(int32_t i);
    static void toHex(::java::lang::StringBuilder* sb, ::int8_tArray* array, int32_t offset, int32_t length);

    // Generated
    UUID(::int8_tArray* data);
protected:
    UUID(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
