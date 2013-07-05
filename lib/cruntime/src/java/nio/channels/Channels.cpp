// Generated from /runtime/java/nio/channels/Channels.java
#include <java/nio/channels/Channels.hpp>

#include <java/nio/channels/Channels_InputStreamChannel.hpp>
#include <java/nio/channels/Channels_MyInputStream.hpp>
#include <java/nio/channels/Channels_MyOutputStream.hpp>
#include <java/nio/channels/Channels_OutputStreamChannel.hpp>

java::nio::channels::Channels::Channels(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::channels::Channels::Channels()
    : Channels(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::io::InputStream* java::nio::channels::Channels::newInputStream(ReadableByteChannel* channel)
{
    clinit();
    return new Channels_MyInputStream(channel);
}

java::io::OutputStream* java::nio::channels::Channels::newOutputStream(WritableByteChannel* channel)
{
    clinit();
    return new Channels_MyOutputStream(channel);
}

java::nio::channels::ReadableByteChannel* java::nio::channels::Channels::newChannel(::java::io::InputStream* stream)
{
    clinit();
    return new Channels_InputStreamChannel(stream);
}

java::nio::channels::WritableByteChannel* java::nio::channels::Channels::newChannel(::java::io::OutputStream* stream)
{
    clinit();
    return new Channels_OutputStreamChannel(stream);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::Channels::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.Channels", 26);
    return c;
}

java::lang::Class* java::nio::channels::Channels::getClass0()
{
    return class_();
}

