// Generated from /runtime/java/nio/channels/Channels.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/nio/channels/fwd-runtime.hpp>
#include <java/io/InputStream.hpp>

struct default_init_tag;

class java::nio::channels::Channels_MyInputStream
    : public ::java::io::InputStream
{

public:
    typedef ::java::io::InputStream super;

private:
    ReadableByteChannel* channel {  };
protected:
    void ctor(ReadableByteChannel* channel);

public:
    int32_t read() /* throws(IOException) */ override;
    int32_t read(::int8_tArray* buffer, int32_t offset, int32_t length) /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

    // Generated
    Channels_MyInputStream(ReadableByteChannel* channel);
protected:
    Channels_MyInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t read(::int8_tArray* buffer);

private:
    virtual ::java::lang::Class* getClass0();
    friend class Channels;
    friend class Channels_MyOutputStream;
    friend class Channels_InputStreamChannel;
    friend class Channels_OutputStreamChannel;
};
