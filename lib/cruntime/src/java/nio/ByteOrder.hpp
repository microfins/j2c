// Generated from /runtime/java/nio/ByteOrder.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/nio/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::nio::ByteOrder final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ByteOrder* BIG_ENDIAN_;
    static ByteOrder* LITTLE_ENDIAN_;
    static ByteOrder* NATIVE_;
    static bool isNativeBigEndian();
    ::java::lang::String* name {  };
protected:
    void ctor(::java::lang::String* name);

public:
    ::java::lang::String* toString() override;
    static ByteOrder* nativeOrder();

    // Generated

private:
    ByteOrder(::java::lang::String* name);
protected:
    ByteOrder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ByteOrder*& BIG_ENDIAN();
    static ByteOrder*& LITTLE_ENDIAN();

private:
    static ByteOrder*& NATIVE();
    virtual ::java::lang::Class* getClass0();
};
