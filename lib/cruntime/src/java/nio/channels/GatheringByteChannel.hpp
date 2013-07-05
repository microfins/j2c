// Generated from /runtime/java/nio/channels/GatheringByteChannel.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/nio/fwd-runtime.hpp>
#include <java/nio/channels/fwd-runtime.hpp>
#include <java/nio/channels/WritableByteChannel.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
    } // lang

    namespace nio
    {
typedef ::SubArray< ::java::nio::Buffer, ::java::lang::ObjectArray > BufferArray;
typedef ::SubArray< ::java::nio::ByteBuffer, BufferArray, ::java::lang::ComparableArray > ByteBufferArray;
    } // nio
} // java

struct java::nio::channels::GatheringByteChannel
    : public virtual WritableByteChannel
{
    virtual int64_t write(::java::nio::ByteBufferArray* srcs) /* throws(IOException) */ = 0;
    virtual int64_t write(::java::nio::ByteBufferArray* srcs, int32_t offset, int32_t length) /* throws(IOException) */ = 0;

    // Generated
    static ::java::lang::Class *class_();
    virtual int32_t write(::java::nio::ByteBuffer* b) = 0;
};
