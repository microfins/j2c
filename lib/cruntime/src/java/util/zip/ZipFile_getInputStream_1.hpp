// Generated from /runtime/java/util/zip/ZipFile.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/util/zip/fwd-runtime.hpp>
#include <java/util/zip/InflaterInputStream.hpp>

struct default_init_tag;

class java::util::zip::ZipFile_getInputStream_1
    : public InflaterInputStream
{

public:
    typedef InflaterInputStream super;

public: /* package */
    int32_t remaining {  };

public:
    int32_t read() /* throws(IOException) */ override;
    int32_t read(::int8_tArray* buffer) /* throws(IOException) */ override;
    int32_t read(::int8_tArray* buffer, int32_t offset, int32_t length) /* throws(IOException) */ override;
    int32_t available() override;

    // Generated
    ZipFile_getInputStream_1(ZipFile *ZipFile_this, int32_t pointer, ::java::io::InputStream* in, Inflater* inflater, int32_t bufferSize);
    ZipFile_getInputStream_1(ZipFile *ZipFile_this, int32_t pointer, ::java::io::InputStream* in, Inflater* inflater);
    ZipFile_getInputStream_1(ZipFile *ZipFile_this, int32_t pointer, ::java::io::InputStream* in);
    static ::java::lang::Class *class_();

private:
    void init();
    ZipFile *ZipFile_this;
    int32_t pointer;
    virtual ::java::lang::Class* getClass0();
    friend class ZipFile;
    friend class ZipFile_Window;
    friend class ZipFile_MyEntry;
    friend class ZipFile_MyZipEntry;
    friend class ZipFile_EntryFactory;
    friend class ZipFile_ZipEntryFactory;
    friend class ZipFile_MyEnumeration;
    friend class ZipFile_MyInputStream;
};
