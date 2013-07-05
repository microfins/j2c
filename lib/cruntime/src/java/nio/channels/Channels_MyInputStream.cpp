// Generated from /runtime/java/nio/channels/Channels.java
#include <java/nio/channels/Channels_MyInputStream.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/nio/channels/ReadableByteChannel.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::nio::channels::Channels_MyInputStream::Channels_MyInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::channels::Channels_MyInputStream::Channels_MyInputStream(ReadableByteChannel* channel) 
    : Channels_MyInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(channel);
}

void java::nio::channels::Channels_MyInputStream::ctor(ReadableByteChannel* channel)
{
    super::ctor();
    this->channel = channel;
}

int32_t java::nio::channels::Channels_MyInputStream::read() /* throws(IOException) */
{
    auto buffer = new ::int8_tArray(int32_t(1));
    auto r = read(buffer);
    if(r == -int32_t(1)) {
        return -int32_t(1);
    } else {
        return (*buffer)[int32_t(0)] & int32_t(255);
    }
}

int32_t java::nio::channels::Channels_MyInputStream::read(::int8_tArray* buffer, int32_t offset, int32_t length) /* throws(IOException) */
{
    return npc(channel)->read(::java::nio::ByteBuffer::wrap(buffer, offset, length));
}

void java::nio::channels::Channels_MyInputStream::close() /* throws(IOException) */
{
    npc(channel)->close();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::Channels_MyInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.Channels.MyInputStream", 40);
    return c;
}

int32_t java::nio::channels::Channels_MyInputStream::read(::int8_tArray* buffer)
{
    return super::read(buffer);
}

java::lang::Class* java::nio::channels::Channels_MyInputStream::getClass0()
{
    return class_();
}

