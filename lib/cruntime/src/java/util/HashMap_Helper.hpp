// Generated from /runtime/java/util/HashMap.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::util::HashMap_Helper
    : public virtual ::java::lang::Object
{
    virtual HashMap_Cell* make(::java::lang::Object* key, ::java::lang::Object* value, HashMap_Cell* next) = 0;
    virtual int32_t hash(::java::lang::Object* key) = 0;
    virtual bool equal(::java::lang::Object* a, ::java::lang::Object* b) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
