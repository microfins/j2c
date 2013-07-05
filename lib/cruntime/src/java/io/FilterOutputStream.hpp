// Generated from /runtime/java/io/FilterOutputStream.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/io/OutputStream.hpp>

struct default_init_tag;

class java::io::FilterOutputStream
    : public OutputStream
{

public:
    typedef OutputStream super;

public: /* protected */
    OutputStream* out {  };
protected:
    void ctor(OutputStream* out);

public:
    void close() /* throws(IOException) */ override;
    void flush() /* throws(IOException) */ override;
    void write(::int8_tArray* b) /* throws(IOException) */ override;
    void write(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */ override;
    void write(int32_t b) /* throws(IOException) */ override;

    // Generated
    FilterOutputStream(OutputStream* out);
protected:
    FilterOutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
