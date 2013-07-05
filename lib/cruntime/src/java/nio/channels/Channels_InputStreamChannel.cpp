// Generated from /runtime/java/nio/channels/Channels.java
#include <java/nio/channels/Channels_InputStreamChannel.hpp>

#include <java/io/InputStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/nio/ByteBuffer.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::nio::channels::Channels_InputStreamChannel::Channels_InputStreamChannel(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::channels::Channels_InputStreamChannel::Channels_InputStreamChannel(::java::io::InputStream* stream) 
    : Channels_InputStreamChannel(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream);
}

void java::nio::channels::Channels_InputStreamChannel::ctor(::java::io::InputStream* stream)
{
    super::ctor();
    this->stream = stream;
}

void java::nio::channels::Channels_InputStreamChannel::close() /* throws(IOException) */
{
    if(stream != nullptr) {
        npc(stream)->close();
        stream = nullptr;
    }
}

bool java::nio::channels::Channels_InputStreamChannel::isOpen()
{
    return stream != nullptr;
}

int32_t java::nio::channels::Channels_InputStreamChannel::read(::java::nio::ByteBuffer* b) /* throws(IOException) */
{
    auto c = npc(stream)->read(npc(b)->array(), npc(b)->arrayOffset() + npc(b)->position(), npc(b)->remaining());
    if(c > 0) {
        npc(b)->position(npc(b)->position() + c);
    }
    return c;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::Channels_InputStreamChannel::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.Channels.InputStreamChannel", 45);
    return c;
}

java::lang::Class* java::nio::channels::Channels_InputStreamChannel::getClass0()
{
    return class_();
}

