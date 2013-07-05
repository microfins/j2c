// Generated from /runtime/java/util/zip/ZipFile.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/util/zip/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/zip/ZipFile_EntryFactory.hpp>

struct default_init_tag;

class java::util::zip::ZipFile_ZipEntryFactory
    : public virtual ::java::lang::Object
    , public virtual ZipFile_EntryFactory
{

public:
    typedef ::java::lang::Object super;

private:
    static ZipFile_ZipEntryFactory* Instance_;

public:
    ZipEntry* makeEntry(ZipFile_Window* window, int32_t pointer) override;

    // Generated
    ZipFile_ZipEntryFactory();
protected:
    ZipFile_ZipEntryFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ZipFile_ZipEntryFactory*& Instance();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ZipFile;
    friend class ZipFile_getInputStream_1;
    friend class ZipFile_Window;
    friend class ZipFile_MyEntry;
    friend class ZipFile_MyZipEntry;
    friend class ZipFile_EntryFactory;
    friend class ZipFile_MyEnumeration;
    friend class ZipFile_MyInputStream;
};
