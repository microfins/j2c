// Generated from /runtime/java/util/zip/ZipFile.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/zip/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::zip::ZipFile
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::io::RandomAccessFile* file {  };
    ZipFile_Window* window {  };
    ::java::util::Map* index {  };
protected:
    void ctor(::java::lang::String* name) /* throws(IOException) */;
    void ctor(::java::io::File* file) /* throws(IOException) */;

public:
    virtual int32_t size();

public: /* protected */
    virtual ::java::util::Enumeration* makeEnumeration(ZipFile_EntryFactory* factory);

public:
    virtual ::java::util::Enumeration* entries();

public: /* protected */
    virtual ZipEntry* getEntry(ZipFile_EntryFactory* factory, ::java::lang::String* name);

public:
    virtual ZipEntry* getEntry(::java::lang::String* name);
    virtual ::java::io::InputStream* getInputStream(ZipEntry* entry) /* throws(IOException) */;

private:
    static bool equal(::int8_tArray* a, int32_t aOffset, ::int8_tArray* b, int32_t bOffset, int32_t size);
    static int32_t get2(ZipFile_Window* w, int32_t p) /* throws(IOException) */;
    static int32_t get4(ZipFile_Window* w, int32_t p) /* throws(IOException) */;
    static int32_t directoryOffset(ZipFile_Window* w, int32_t p) /* throws(IOException) */;
    static int32_t entryNameLength(ZipFile_Window* w, int32_t p) /* throws(IOException) */;

public: /* protected */
    static ::java::lang::String* entryName(ZipFile_Window* w, int32_t p) /* throws(IOException) */;

private:
    static int32_t compressionMethod(ZipFile_Window* w, int32_t p) /* throws(IOException) */;

public: /* protected */
    static int32_t compressedSize(ZipFile_Window* w, int32_t p) /* throws(IOException) */;
    static int32_t uncompressedSize(ZipFile_Window* w, int32_t p) /* throws(IOException) */;

private:
    static int32_t fileNameLength(ZipFile_Window* w, int32_t p) /* throws(IOException) */;
    static int32_t extraFieldLength(ZipFile_Window* w, int32_t p) /* throws(IOException) */;
    static int32_t commentFieldLength(ZipFile_Window* w, int32_t p) /* throws(IOException) */;
    static int32_t entryEnd(ZipFile_Window* w, int32_t p) /* throws(IOException) */;
    static int32_t fileData(ZipFile_Window* w, int32_t p) /* throws(IOException) */;
    static int32_t localHeader(ZipFile_Window* w, int32_t p) /* throws(IOException) */;
    static int32_t localFileNameLength(ZipFile_Window* w, int32_t p) /* throws(IOException) */;
    static int32_t localExtraFieldLength(ZipFile_Window* w, int32_t p) /* throws(IOException) */;

public:
    virtual void close() /* throws(IOException) */;

    // Generated
    ZipFile(::java::lang::String* name);
    ZipFile(::java::io::File* file);
protected:
    ZipFile(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class ZipFile_getInputStream_1;
    friend class ZipFile_Window;
    friend class ZipFile_MyEntry;
    friend class ZipFile_MyZipEntry;
    friend class ZipFile_EntryFactory;
    friend class ZipFile_ZipEntryFactory;
    friend class ZipFile_MyEnumeration;
    friend class ZipFile_MyInputStream;
};
