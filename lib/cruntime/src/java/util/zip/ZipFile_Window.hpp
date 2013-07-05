// Generated from /runtime/java/util/zip/ZipFile.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/util/zip/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::zip::ZipFile_Window
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::io::RandomAccessFile* file {  };

public:
    ::int8_tArray* data {  };
    int32_t start {  };
    int32_t length {  };
protected:
    void ctor(::java::io::RandomAccessFile* file, int32_t size);

public:
    virtual int32_t seek(int32_t start, int32_t length) /* throws(IOException) */;

    // Generated
    ZipFile_Window(::java::io::RandomAccessFile* file, int32_t size);
protected:
    ZipFile_Window(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ZipFile;
    friend class ZipFile_getInputStream_1;
    friend class ZipFile_MyEntry;
    friend class ZipFile_MyZipEntry;
    friend class ZipFile_EntryFactory;
    friend class ZipFile_ZipEntryFactory;
    friend class ZipFile_MyEnumeration;
    friend class ZipFile_MyInputStream;
};
