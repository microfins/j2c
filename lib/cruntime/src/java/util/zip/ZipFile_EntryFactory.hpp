// Generated from /runtime/java/util/zip/ZipFile.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/util/zip/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::util::zip::ZipFile_EntryFactory
    : public virtual ::java::lang::Object
{
    virtual ZipEntry* makeEntry(ZipFile_Window* window, int32_t pointer) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
