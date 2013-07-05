// Generated from /runtime/java/io/FileInputStream.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/io/InputStream.hpp>

struct default_init_tag;

class java::io::FileInputStream
    : public InputStream
{

public:
    typedef InputStream super;

private:
    int32_t fd {  };
    int32_t remaining {  };
protected:
    void ctor(FileDescriptor* fd);
    void ctor(::java::lang::String* path) /* throws(IOException) */;
    void ctor(File* file) /* throws(IOException) */;

public:
    int32_t available() /* throws(IOException) */ override;

private:
    static int32_t open(::java::lang::String* path) /* throws(IOException) */;
    static int32_t read(int32_t fd) /* throws(IOException) */;
    static int32_t read(int32_t fd, ::int8_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */;

public:
    static void close(int32_t fd) /* throws(IOException) */;
    int32_t read() /* throws(IOException) */ override;
    int32_t read(::int8_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

    // Generated
    FileInputStream(FileDescriptor* fd);
    FileInputStream(::java::lang::String* path);
    FileInputStream(File* file);
protected:
    FileInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t read(::int8_tArray* buffer);

private:
    virtual ::java::lang::Class* getClass0();
};
