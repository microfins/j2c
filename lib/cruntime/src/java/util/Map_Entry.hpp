// Generated from /runtime/java/util/Map.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::util::Map_Entry
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::Object* getKey() = 0;
    virtual ::java::lang::Object* getValue() = 0;
    virtual ::java::lang::Object* setValue(::java::lang::Object* value) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
