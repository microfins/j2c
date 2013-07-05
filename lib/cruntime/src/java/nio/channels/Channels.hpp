// Generated from /runtime/java/nio/channels/Channels.java

#pragma once

#include <java/io/fwd-runtime.hpp>
#include <java/nio/channels/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::nio::channels::Channels
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static ::java::io::InputStream* newInputStream(ReadableByteChannel* channel);
    static ::java::io::OutputStream* newOutputStream(WritableByteChannel* channel);
    static ReadableByteChannel* newChannel(::java::io::InputStream* stream);
    static WritableByteChannel* newChannel(::java::io::OutputStream* stream);

    // Generated
    Channels();
protected:
    Channels(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Channels_MyInputStream;
    friend class Channels_MyOutputStream;
    friend class Channels_InputStreamChannel;
    friend class Channels_OutputStreamChannel;
};
