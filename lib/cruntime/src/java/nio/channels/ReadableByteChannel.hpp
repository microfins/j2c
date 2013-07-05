// Generated from /runtime/java/nio/channels/ReadableByteChannel.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/nio/fwd-runtime.hpp>
#include <java/nio/channels/fwd-runtime.hpp>
#include <java/nio/channels/Channel.hpp>

struct java::nio::channels::ReadableByteChannel
    : public virtual Channel
{
    virtual int32_t read(::java::nio::ByteBuffer* b) /* throws(IOException) */ = 0;

    // Generated
    static ::java::lang::Class *class_();
};
