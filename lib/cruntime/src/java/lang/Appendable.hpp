// Generated from /runtime/java/lang/Appendable.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::lang::Appendable
    : public virtual Object
{
    virtual Appendable* append(char16_t c) /* throws(IOException) */ = 0;
    virtual Appendable* append(CharSequence* sequence) /* throws(IOException) */ = 0;
    virtual Appendable* append(CharSequence* sequence, int32_t start, int32_t end) /* throws(IOException) */ = 0;

    // Generated
    static ::java::lang::Class *class_();
};
