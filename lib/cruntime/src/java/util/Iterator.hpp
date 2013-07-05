// Generated from /runtime/java/util/Iterator.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::util::Iterator
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::Object* next() = 0;
    virtual bool hasNext() = 0;
    virtual void remove() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
