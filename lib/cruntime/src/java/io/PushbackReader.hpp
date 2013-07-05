// Generated from /runtime/java/io/PushbackReader.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/io/Reader.hpp>

struct default_init_tag;

class java::io::PushbackReader
    : public Reader
{

public:
    typedef Reader super;

private:
    Reader* in {  };
    char16_t savedChar {  };
    bool hasSavedChar {  };
protected:
    void ctor(Reader* in, int32_t bufferSize);
    void ctor(Reader* in);

public:
    int32_t read(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */ override;
    virtual void unread(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */;
    virtual void unread(::char16_tArray* b) /* throws(IOException) */;
    virtual void unread(int32_t c) /* throws(IOException) */;
    void close() /* throws(IOException) */ override;

    // Generated
    PushbackReader(Reader* in, int32_t bufferSize);
    PushbackReader(Reader* in);
protected:
    PushbackReader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t read();
    virtual int32_t read(::char16_tArray* buffer);

private:
    virtual ::java::lang::Class* getClass0();
};
