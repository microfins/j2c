// Generated from /runtime/java/io/OutputStream.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Closeable.hpp>
#include <java/io/Flushable.hpp>

struct default_init_tag;

class java::io::OutputStream
    : public virtual ::java::lang::Object
    , public virtual Closeable
    , public virtual Flushable
{

public:
    typedef ::java::lang::Object super;
    virtual void write(int32_t c) /* throws(IOException) */ = 0;
    virtual void write(::int8_tArray* buffer) /* throws(IOException) */;
    virtual void write(::int8_tArray* buffer, int32_t offset, int32_t length) /* throws(IOException) */;
    void flush() /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

    // Generated
    OutputStream();
protected:
    OutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
