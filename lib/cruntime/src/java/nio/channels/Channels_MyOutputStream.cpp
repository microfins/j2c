// Generated from /runtime/java/nio/channels/Channels.java
#include <java/nio/channels/Channels_MyOutputStream.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/nio/channels/WritableByteChannel.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::nio::channels::Channels_MyOutputStream::Channels_MyOutputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::channels::Channels_MyOutputStream::Channels_MyOutputStream(WritableByteChannel* channel) 
    : Channels_MyOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(channel);
}

void java::nio::channels::Channels_MyOutputStream::ctor(WritableByteChannel* channel)
{
    super::ctor();
    this->channel = channel;
}

void java::nio::channels::Channels_MyOutputStream::write(int32_t v) /* throws(IOException) */
{
    auto buffer = new ::int8_tArray({static_cast< int8_t >((v & int32_t(255)))});
    write(buffer);
}

void java::nio::channels::Channels_MyOutputStream::write(::int8_tArray* buffer, int32_t offset, int32_t length) /* throws(IOException) */
{
    npc(channel)->write(::java::nio::ByteBuffer::wrap(buffer, offset, length));
}

void java::nio::channels::Channels_MyOutputStream::close() /* throws(IOException) */
{
    npc(channel)->close();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::Channels_MyOutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.Channels.MyOutputStream", 41);
    return c;
}

void java::nio::channels::Channels_MyOutputStream::write(::int8_tArray* buffer)
{
    super::write(buffer);
}

java::lang::Class* java::nio::channels::Channels_MyOutputStream::getClass0()
{
    return class_();
}

