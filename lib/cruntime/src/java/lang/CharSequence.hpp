// Generated from /runtime/java/lang/CharSequence.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::lang::CharSequence
    : public virtual Object
{
    virtual char16_t charAt(int32_t index) = 0;
    virtual int32_t length() = 0;
    virtual CharSequence* subSequence(int32_t start, int32_t end) = 0;
    /*virtual String* toString(); (already declared) */

    // Generated
    static ::java::lang::Class *class_();
};
