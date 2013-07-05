// Generated from /runtime/java/io/PrintStream.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/io/OutputStream.hpp>

struct default_init_tag;

class java::io::PrintStream
    : public OutputStream
{

public:
    typedef OutputStream super;

private:
    OutputStream* out {  };
    bool autoFlush {  };
protected:
    void ctor(OutputStream* out, bool autoFlush);
    void ctor(OutputStream* out);

public:
    virtual void print(::java::lang::String* s);
    virtual void print(::java::lang::Object* o);
    virtual void print(bool v);
    virtual void print(char16_t c);
    virtual void print(int32_t v);
    virtual void print(int64_t v);
    virtual void print(float v);
    virtual void print(double v);
    virtual void print(::char16_tArray* s);
    virtual void println(::java::lang::String* s);
    virtual void println();
    virtual void println(::java::lang::Object* o);
    virtual void println(bool v);
    virtual void println(char16_t c);
    virtual void println(int32_t v);
    virtual void println(int64_t v);
    virtual void println(float v);
    virtual void println(double v);
    virtual void println(::char16_tArray* s);
    void write(int32_t c) /* throws(IOException) */ override;
    void write(::int8_tArray* buffer, int32_t offset, int32_t length) /* throws(IOException) */ override;
    void flush() override;
    void close() override;

    // Generated
    PrintStream(OutputStream* out, bool autoFlush);
    PrintStream(OutputStream* out);
protected:
    PrintStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void write(::int8_tArray* buffer);

private:
    virtual ::java::lang::Class* getClass0();
    friend class PrintStream_Static;
};
