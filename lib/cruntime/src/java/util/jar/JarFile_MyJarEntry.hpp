// Generated from /runtime/java/util/jar/JarFile.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/jar/fwd-runtime.hpp>
#include <java/util/zip/fwd-runtime.hpp>
#include <java/util/jar/JarEntry.hpp>
#include <java/util/zip/ZipFile_MyEntry.hpp>

struct default_init_tag;

class java::util::jar::JarFile_MyJarEntry
    : public JarEntry
    , public virtual ::java::util::zip::ZipFile_MyEntry
{

public:
    typedef JarEntry super;
    ::java::util::zip::ZipFile_Window* window {  };
    int32_t pointer_ {  };
protected:
    void ctor(::java::util::zip::ZipFile_Window* window, int32_t pointer);

public:
    ::java::lang::String* getName() override;
    int32_t getCompressedSize() override;
    int32_t getSize() override;
    int32_t pointer() override;

    // Generated
    JarFile_MyJarEntry(::java::util::zip::ZipFile_Window* window, int32_t pointer);
protected:
    JarFile_MyJarEntry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class JarFile;
    friend class JarFile_JarEntryFactory;
};
