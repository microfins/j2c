// Generated from /runtime/java/util/zip/ZipFile.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/zip/fwd-runtime.hpp>
#include <java/util/zip/ZipEntry.hpp>
#include <java/util/zip/ZipFile_MyEntry.hpp>

struct default_init_tag;

class java::util::zip::ZipFile_MyZipEntry
    : public ZipEntry
    , public virtual ZipFile_MyEntry
{

public:
    typedef ZipEntry super;
    ZipFile_Window* window {  };
    int32_t pointer_ {  };
protected:
    void ctor(ZipFile_Window* window, int32_t pointer);

public:
    ::java::lang::String* getName() override;
    int32_t getCompressedSize() override;
    int32_t getSize() override;
    int32_t pointer() override;

    // Generated
    ZipFile_MyZipEntry(ZipFile_Window* window, int32_t pointer);
protected:
    ZipFile_MyZipEntry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ZipFile;
    friend class ZipFile_getInputStream_1;
    friend class ZipFile_Window;
    friend class ZipFile_MyEntry;
    friend class ZipFile_EntryFactory;
    friend class ZipFile_ZipEntryFactory;
    friend class ZipFile_MyEnumeration;
    friend class ZipFile_MyInputStream;
};
