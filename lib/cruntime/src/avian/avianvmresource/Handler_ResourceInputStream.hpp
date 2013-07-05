// Generated from /runtime/avian/avianvmresource/Handler.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/avianvmresource/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/io/InputStream.hpp>

struct default_init_tag;

class avian::avianvmresource::Handler_ResourceInputStream
    : public ::java::io::InputStream
{

public:
    typedef ::java::io::InputStream super;

private:
    int64_t peer {  };
    int32_t position {  };
protected:
    void ctor(::java::lang::String* path) /* throws(IOException) */;

private:
    static int32_t getContentLength(::java::lang::String* path);
    static int64_t open(::java::lang::String* path) /* throws(IOException) */;
    static int32_t read(int64_t peer, int32_t position) /* throws(IOException) */;
    static int32_t read(int64_t peer, int32_t position, ::int8_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */;

public:
    static void close(int64_t peer) /* throws(IOException) */;
    static int32_t available(int64_t peer, int32_t position);
    int32_t available() override;
    int32_t read() /* throws(IOException) */ override;
    int32_t read(::int8_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

    // Generated
    Handler_ResourceInputStream(::java::lang::String* path);
protected:
    Handler_ResourceInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t read(::int8_tArray* buffer);

private:
    virtual ::java::lang::Class* getClass0();
    friend class Handler;
    friend class Handler_ResourceConnection;
};
