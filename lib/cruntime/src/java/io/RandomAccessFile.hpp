// Generated from /runtime/java/io/RandomAccessFile.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::io::RandomAccessFile
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int64_t peer {  };
    File* file {  };
    int64_t position {  };
    int64_t length_ {  };
protected:
    void ctor(::java::lang::String* name, ::java::lang::String* mode) /* throws(FileNotFoundException) */;

private:
    void open() /* throws(FileNotFoundException) */;
    static void open(::java::lang::String* name, ::int64_tArray* result) /* throws(FileNotFoundException) */;
    void refresh() /* throws(IOException) */;

public:
    virtual int64_t length() /* throws(IOException) */;
    virtual int64_t getFilePointer() /* throws(IOException) */;
    virtual void seek(int64_t position) /* throws(IOException) */;
    virtual int32_t skipBytes(int32_t count) /* throws(IOException) */;
    virtual int32_t read(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */;
    virtual int32_t read(::int8_tArray* b) /* throws(IOException) */;
    virtual void readFully(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */;
    virtual void readFully(::int8_tArray* b) /* throws(IOException) */;

private:
    static int32_t readBytes(int64_t peer, int64_t position, ::int8_tArray* buffer, int32_t offset, int32_t length);

public:
    virtual void close() /* throws(IOException) */;

private:
    static void close(int64_t peer);

    // Generated

public:
    RandomAccessFile(::java::lang::String* name, ::java::lang::String* mode);
protected:
    RandomAccessFile(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
