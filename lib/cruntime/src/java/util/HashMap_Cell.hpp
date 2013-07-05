// Generated from /runtime/java/util/HashMap.java

#pragma once

#include <java/util/fwd-runtime.hpp>
#include <java/util/Map_Entry.hpp>

struct java::util::HashMap_Cell
    : public virtual Map_Entry
{
    virtual HashMap_Cell* next() = 0;
    virtual void setNext(HashMap_Cell* next) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
