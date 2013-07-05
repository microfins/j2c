// Generated from /runtime/java/util/jar/JarFile.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/util/jar/fwd-runtime.hpp>
#include <java/util/zip/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/zip/ZipFile_EntryFactory.hpp>

struct default_init_tag;

class java::util::jar::JarFile_JarEntryFactory
    : public virtual ::java::lang::Object
    , public virtual ::java::util::zip::ZipFile_EntryFactory
{

public:
    typedef ::java::lang::Object super;

private:
    static JarFile_JarEntryFactory* Instance_;

public:
    ::java::util::zip::ZipEntry* makeEntry(::java::util::zip::ZipFile_Window* window, int32_t pointer) override;

    // Generated
    JarFile_JarEntryFactory();
protected:
    JarFile_JarEntryFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static JarFile_JarEntryFactory*& Instance();

private:
    virtual ::java::lang::Class* getClass0();
    friend class JarFile;
    friend class JarFile_MyJarEntry;
};
