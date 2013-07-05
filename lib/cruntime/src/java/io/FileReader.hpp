// Generated from /runtime/java/io/FileReader.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/io/Reader.hpp>

struct default_init_tag;

class java::io::FileReader
    : public Reader
{

public:
    typedef Reader super;

private:
    Reader* in {  };
protected:
    void ctor(FileInputStream* in);
    void ctor(FileDescriptor* fd);
    void ctor(::java::lang::String* path) /* throws(IOException) */;
    void ctor(File* file) /* throws(IOException) */;

public:
    int32_t read(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

    // Generated
    FileReader(FileInputStream* in);
    FileReader(FileDescriptor* fd);
    FileReader(::java::lang::String* path);
    FileReader(File* file);
protected:
    FileReader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t read();
    virtual int32_t read(::char16_tArray* buffer);

private:
    virtual ::java::lang::Class* getClass0();
};
