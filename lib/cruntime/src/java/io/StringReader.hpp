// Generated from /runtime/java/io/StringReader.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/io/Reader.hpp>

struct default_init_tag;

class java::io::StringReader
    : public Reader
{

public:
    typedef Reader super;

private:
    ::java::lang::String* in {  };
    int32_t position {  };
protected:
    void ctor(::java::lang::String* in);

public:
    int32_t read(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

    // Generated
    StringReader(::java::lang::String* in);
protected:
    StringReader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    virtual int32_t read();
    virtual int32_t read(::char16_tArray* buffer);

private:
    virtual ::java::lang::Class* getClass0();
};
