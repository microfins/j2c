// Generated from /runtime/java/io/InputStream.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Closeable.hpp>

struct default_init_tag;

class java::io::InputStream
    : public virtual ::java::lang::Object
    , public virtual Closeable
{

public:
    typedef ::java::lang::Object super;
    virtual int32_t read() /* throws(IOException) */ = 0;
    virtual int32_t read(::int8_tArray* buffer) /* throws(IOException) */;
    virtual int32_t read(::int8_tArray* buffer, int32_t offset, int32_t length) /* throws(IOException) */;
    virtual int64_t skip(int64_t count) /* throws(IOException) */;
    virtual int32_t available() /* throws(IOException) */;
    virtual void mark(int32_t limit);
    virtual void reset() /* throws(IOException) */;
    virtual bool markSupported();
    void close() /* throws(IOException) */ override;

    // Generated
    InputStream();
protected:
    InputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
