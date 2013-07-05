// Generated from /runtime/java/io/FilenameFilter.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::io::FilenameFilter
    : public virtual ::java::lang::Object
{
    virtual bool accept(File* dir, ::java::lang::String* name) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
