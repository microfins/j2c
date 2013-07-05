// Generated from /runtime/java/lang/Iterable.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::lang::Iterable
    : public virtual Object
{
    virtual ::java::util::Iterator* iterator() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
