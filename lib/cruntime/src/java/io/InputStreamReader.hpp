// Generated from /runtime/java/io/InputStreamReader.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/io/Reader.hpp>

struct default_init_tag;

class java::io::InputStreamReader
    : public Reader
{

public:
    typedef Reader super;

private:
    static constexpr int32_t MultibytePadding { int32_t(4) };
    InputStream* in {  };
protected:
    void ctor(InputStream* in);
    void ctor(InputStream* in, ::java::lang::String* encoding) /* throws(UnsupportedEncodingException) */;

public:
    int32_t read(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

    // Generated
    InputStreamReader(InputStream* in);
    InputStreamReader(InputStream* in, ::java::lang::String* encoding);
protected:
    InputStreamReader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t read();
    virtual int32_t read(::char16_tArray* buffer);

private:
    virtual ::java::lang::Class* getClass0();
};
