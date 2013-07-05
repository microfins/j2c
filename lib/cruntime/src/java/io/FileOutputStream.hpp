// Generated from /runtime/java/io/FileOutputStream.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/io/OutputStream.hpp>

struct default_init_tag;

class java::io::FileOutputStream
    : public OutputStream
{

public:
    typedef OutputStream super;

private:
    int32_t fd {  };
protected:
    void ctor(FileDescriptor* fd);
    void ctor(::java::lang::String* path) /* throws(IOException) */;
    void ctor(::java::lang::String* path, bool append) /* throws(IOException) */;
    void ctor(File* file) /* throws(IOException) */;

private:
    static int32_t open(::java::lang::String* path, bool append) /* throws(IOException) */;
    static void write(int32_t fd, int32_t c) /* throws(IOException) */;
    static void write(int32_t fd, ::int8_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */;
    static void close(int32_t fd) /* throws(IOException) */;

public:
    void write(int32_t c) /* throws(IOException) */ override;
    void write(::int8_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

    // Generated
    FileOutputStream(FileDescriptor* fd);
    FileOutputStream(::java::lang::String* path);
    FileOutputStream(::java::lang::String* path, bool append);
    FileOutputStream(File* file);
protected:
    FileOutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void write(::int8_tArray* buffer);

private:
    virtual ::java::lang::Class* getClass0();
};
