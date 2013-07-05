// Generated from /runtime/java/lang/reflect/Array.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/reflect/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::reflect::Array_ final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static ::java::lang::Object* get(::java::lang::Object* array, int32_t index);
    static void set(::java::lang::Object* array, int32_t index, ::java::lang::Object* value);
    static int32_t getLength(::java::lang::Object* array);

private:
    static ::java::lang::Object* makeObjectArray_(::java::lang::Class* elementType, int32_t length);

public:
    static ::java::lang::Object* newInstance(::java::lang::Class* elementType, int32_t length);

    // Generated

private:
    Array_();
protected:
    Array_(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
