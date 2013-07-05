// Generated from /runtime/java/io/PrintWriter.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/io/Writer.hpp>

struct default_init_tag;

class java::io::PrintWriter
    : public Writer
{

public:
    typedef Writer super;

private:
    static ::char16_tArray* newline_;
    Writer* out {  };
    bool autoFlush {  };
protected:
    void ctor(Writer* out, bool autoFlush);
    void ctor(Writer* out);
    void ctor(OutputStream* out, bool autoFlush);
    void ctor(OutputStream* out);

public:
    virtual void print(::java::lang::String* s);
    virtual void print(::java::lang::Object* o);
    virtual void print(char16_t c);
    virtual void println(::java::lang::String* s);
    virtual void println();
    virtual void println(::java::lang::Object* o);
    virtual void println(char16_t c);
    void write(::char16_tArray* buffer, int32_t offset, int32_t length) /* throws(IOException) */ override;
    void flush() override;
    void close() override;

    // Generated
    PrintWriter(Writer* out, bool autoFlush);
    PrintWriter(Writer* out);
    PrintWriter(OutputStream* out, bool autoFlush);
    PrintWriter(OutputStream* out);
protected:
    PrintWriter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual void write(int32_t c);
    virtual void write(::char16_tArray* buffer);
    virtual void write(::java::lang::String* s);
    virtual void write(::java::lang::String* s, int32_t offset, int32_t length);

private:
    static ::char16_tArray*& newline();
    virtual ::java::lang::Class* getClass0();
};
