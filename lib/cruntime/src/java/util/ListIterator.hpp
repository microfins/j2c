// Generated from /runtime/java/util/ListIterator.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/Iterator.hpp>

struct java::util::ListIterator
    : public virtual Iterator
{
    virtual bool hasPrevious() = 0;
    virtual ::java::lang::Object* previous() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
