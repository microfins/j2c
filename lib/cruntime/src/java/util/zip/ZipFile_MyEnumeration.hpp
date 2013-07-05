// Generated from /runtime/java/util/zip/ZipFile.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/zip/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Enumeration.hpp>
#include <java/util/zip/ZipEntry.hpp>

struct default_init_tag;

class java::util::zip::ZipFile_MyEnumeration
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Enumeration
{

public:
    typedef ::java::lang::Object super;

private:
    ZipFile_EntryFactory* factory {  };
    ZipFile_Window* window {  };
    ::java::util::Iterator* iterator {  };
protected:
    void ctor(ZipFile_EntryFactory* factory, ZipFile_Window* window, ::java::util::Iterator* iterator);

public:
    bool hasMoreElements() override;
    ZipEntry* nextElement() override;

    // Generated
    ZipFile_MyEnumeration(ZipFile_EntryFactory* factory, ZipFile_Window* window, ::java::util::Iterator* iterator);
protected:
    ZipFile_MyEnumeration(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ZipFile;
    friend class ZipFile_getInputStream_1;
    friend class ZipFile_Window;
    friend class ZipFile_MyEntry;
    friend class ZipFile_MyZipEntry;
    friend class ZipFile_EntryFactory;
    friend class ZipFile_ZipEntryFactory;
    friend class ZipFile_MyInputStream;
};
