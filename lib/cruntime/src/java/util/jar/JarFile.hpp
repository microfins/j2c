// Generated from /runtime/java/util/jar/JarFile.java

#pragma once

#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/jar/fwd-runtime.hpp>
#include <java/util/zip/ZipFile.hpp>

struct default_init_tag;

class java::util::jar::JarFile
    : public ::java::util::zip::ZipFile
{

public:
    typedef ::java::util::zip::ZipFile super;
protected:
    void ctor(::java::lang::String* name) /* throws(IOException) */;
    void ctor(::java::io::File* file) /* throws(IOException) */;

public:
    ::java::util::Enumeration* entries() override;
    virtual JarEntry* getJarEntry(::java::lang::String* name);

    // Generated
    JarFile(::java::lang::String* name);
    JarFile(::java::io::File* file);
protected:
    JarFile(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class JarFile_MyJarEntry;
    friend class JarFile_JarEntryFactory;
};
