// Generated from /runtime/java/util/jar/JarEntry.java

#pragma once

#include <java/util/jar/fwd-runtime.hpp>
#include <java/util/zip/ZipEntry.hpp>

struct default_init_tag;

class java::util::jar::JarEntry
    : public ::java::util::zip::ZipEntry
{

public:
    typedef ::java::util::zip::ZipEntry super;

    // Generated
    JarEntry();
protected:
    JarEntry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
