// Generated from /runtime/java/nio/channels/Channels.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/nio/fwd-runtime.hpp>
#include <java/nio/channels/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/nio/channels/WritableByteChannel.hpp>

struct default_init_tag;

class java::nio::channels::Channels_OutputStreamChannel
    : public virtual ::java::lang::Object
    , public virtual WritableByteChannel
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::io::OutputStream* stream {  };
protected:
    void ctor(::java::io::OutputStream* stream);

public:
    void close() /* throws(IOException) */ override;
    bool isOpen() override;
    int32_t write(::java::nio::ByteBuffer* b) /* throws(IOException) */ override;

    // Generated
    Channels_OutputStreamChannel(::java::io::OutputStream* stream);
protected:
    Channels_OutputStreamChannel(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Channels;
    friend class Channels_MyInputStream;
    friend class Channels_MyOutputStream;
    friend class Channels_InputStreamChannel;
};
