// Generated from /runtime/java/io/Reader.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Closeable.hpp>

struct default_init_tag;

class java::io::Reader
    : public virtual ::java::lang::Object
    , public virtual Closeable
{

public:
    typedef ::java::lang::Object super;
    virtual int32_t read() /* throws(IOException) */;
    virtual int32_t read(::char16_tArray* buffer) /* throws(IOException) */;
    virtual int32_t read(::char16_tArray* buffer, int32_t offset, int32_t length) /* throws(IOException) */ = 0;
    virtual bool markSupported();
    virtual void mark(int32_t readAheadLimit) /* throws(IOException) */;
    virtual void reset() /* throws(IOException) */;
    /*void close(); (already declared) */

    // Generated
    Reader();
protected:
    Reader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
