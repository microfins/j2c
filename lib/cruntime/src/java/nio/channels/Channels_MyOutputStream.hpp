// Generated from /runtime/java/nio/channels/Channels.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/nio/channels/fwd-runtime.hpp>
#include <java/io/OutputStream.hpp>

struct default_init_tag;

class java::nio::channels::Channels_MyOutputStream
    : public ::java::io::OutputStream
{

public:
    typedef ::java::io::OutputStream super;

private:
    WritableByteChannel* channel {  };
protected:
    void ctor(WritableByteChannel* channel);

public:
    void write(int32_t v) /* throws(IOException) */ override;
    void write(::int8_tArray* buffer, int32_t offset, int32_t length) /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

    // Generated
    Channels_MyOutputStream(WritableByteChannel* channel);
protected:
    Channels_MyOutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void write(::int8_tArray* buffer);

private:
    virtual ::java::lang::Class* getClass0();
    friend class Channels;
    friend class Channels_MyInputStream;
    friend class Channels_InputStreamChannel;
    friend class Channels_OutputStreamChannel;
};
