// Generated from /runtime/java/io/LineNumberReader.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/io/BufferedReader.hpp>

struct default_init_tag;

class java::io::LineNumberReader
    : public BufferedReader
{

public:
    typedef BufferedReader super;

private:
    int32_t line {  };
protected:
    void ctor(Reader* in, int32_t bufferSize);
    void ctor(Reader* in);

public:
    virtual int32_t getLineNumber();
    virtual void setLineNumber(int32_t v);
    int32_t read(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */ override;

    // Generated
    LineNumberReader(Reader* in, int32_t bufferSize);
    LineNumberReader(Reader* in);
protected:
    LineNumberReader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t read();
    virtual int32_t read(::char16_tArray* buffer);

private:
    virtual ::java::lang::Class* getClass0();
};
