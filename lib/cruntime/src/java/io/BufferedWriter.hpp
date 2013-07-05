// Generated from /runtime/java/io/BufferedWriter.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/io/Writer.hpp>

struct default_init_tag;

class java::io::BufferedWriter
    : public Writer
{

public:
    typedef Writer super;

private:
    Writer* out {  };
    ::char16_tArray* buffer {  };
    int32_t position {  };
protected:
    void ctor(Writer* out, int32_t size);
    void ctor(Writer* out);

private:
    void drain() /* throws(IOException) */;

public:
    void write(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */ override;
    void flush() /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

    // Generated
    BufferedWriter(Writer* out, int32_t size);
    BufferedWriter(Writer* out);
protected:
    BufferedWriter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void write(int32_t c);
    virtual void write(::char16_tArray* buffer);
    virtual void write(::java::lang::String* s);
    virtual void write(::java::lang::String* s, int32_t offset, int32_t length);

private:
    virtual ::java::lang::Class* getClass0();
};
