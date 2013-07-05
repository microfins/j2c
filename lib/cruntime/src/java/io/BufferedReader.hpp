// Generated from /runtime/java/io/BufferedReader.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/io/Reader.hpp>

struct default_init_tag;

class java::io::BufferedReader
    : public Reader
{

public:
    typedef Reader super;

private:
    Reader* in {  };
    ::char16_tArray* buffer {  };
    int32_t position {  };
    int32_t limit {  };
protected:
    void ctor(Reader* in, int32_t bufferSize);
    void ctor(Reader* in);

private:
    void fill() /* throws(IOException) */;

public:
    virtual ::java::lang::String* readLine() /* throws(IOException) */;
    int32_t read(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

    // Generated
    BufferedReader(Reader* in, int32_t bufferSize);
    BufferedReader(Reader* in);
protected:
    BufferedReader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t read();
    virtual int32_t read(::char16_tArray* buffer);

private:
    virtual ::java::lang::Class* getClass0();
};
