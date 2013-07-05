// Generated from /runtime/java/util/zip/ZipFile.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/util/zip/fwd-runtime.hpp>
#include <java/io/InputStream.hpp>

struct default_init_tag;

class java::util::zip::ZipFile_MyInputStream
    : public ::java::io::InputStream
{

public:
    typedef ::java::io::InputStream super;

private:
    ::java::io::RandomAccessFile* file {  };
    int32_t offset {  };
    int32_t length {  };
protected:
    void ctor(::java::io::RandomAccessFile* file, int32_t start, int32_t length);

public:
    int32_t read() /* throws(IOException) */ override;
    int32_t read(::int8_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

    // Generated
    ZipFile_MyInputStream(::java::io::RandomAccessFile* file, int32_t start, int32_t length);
protected:
    ZipFile_MyInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t read(::int8_tArray* buffer);

private:
    virtual ::java::lang::Class* getClass0();
    friend class ZipFile;
    friend class ZipFile_getInputStream_1;
    friend class ZipFile_Window;
    friend class ZipFile_MyEntry;
    friend class ZipFile_MyZipEntry;
    friend class ZipFile_EntryFactory;
    friend class ZipFile_ZipEntryFactory;
    friend class ZipFile_MyEnumeration;
};
