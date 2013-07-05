// Generated from /runtime/java/nio/channels/Channels.java
#include <java/nio/channels/Channels_OutputStreamChannel.hpp>

#include <java/io/OutputStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/nio/ByteBuffer.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::nio::channels::Channels_OutputStreamChannel::Channels_OutputStreamChannel(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::channels::Channels_OutputStreamChannel::Channels_OutputStreamChannel(::java::io::OutputStream* stream) 
    : Channels_OutputStreamChannel(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream);
}

void java::nio::channels::Channels_OutputStreamChannel::ctor(::java::io::OutputStream* stream)
{
    super::ctor();
    this->stream = stream;
}

void java::nio::channels::Channels_OutputStreamChannel::close() /* throws(IOException) */
{
    if(stream != nullptr) {
        npc(stream)->close();
        stream = nullptr;
    }
}

bool java::nio::channels::Channels_OutputStreamChannel::isOpen()
{
    return stream != nullptr;
}

int32_t java::nio::channels::Channels_OutputStreamChannel::write(::java::nio::ByteBuffer* b) /* throws(IOException) */
{
    npc(stream)->write(npc(b)->array(), npc(b)->arrayOffset() + npc(b)->position(), npc(b)->remaining());
    auto c = npc(b)->remaining();
    npc(b)->position(npc(b)->limit());
    return c;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::Channels_OutputStreamChannel::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.Channels.OutputStreamChannel", 46);
    return c;
}

java::lang::Class* java::nio::channels::Channels_OutputStreamChannel::getClass0()
{
    return class_();
}

