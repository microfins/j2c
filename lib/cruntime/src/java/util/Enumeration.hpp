// Generated from /runtime/java/util/Enumeration.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::util::Enumeration
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::Object* nextElement() = 0;
    virtual bool hasMoreElements() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
