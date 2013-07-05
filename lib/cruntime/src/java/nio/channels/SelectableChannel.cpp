// Generated from /runtime/java/nio/channels/SelectableChannel.java
#include <java/nio/channels/SelectableChannel.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/nio/channels/SelectionKey.hpp>
#include <java/nio/channels/Selector.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::nio::channels::SelectableChannel::SelectableChannel(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::channels::SelectableChannel::SelectableChannel()
    : SelectableChannel(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::nio::channels::SelectableChannel::ctor()
{
    super::ctor();
    init();
}

void java::nio::channels::SelectableChannel::init()
{
    open = true;
}

java::nio::channels::SelectionKey* java::nio::channels::SelectableChannel::register_(Selector* selector, int32_t interestOps, ::java::lang::Object* attachment)
{
    key = new SelectionKey(this, selector, interestOps, attachment);
    npc(selector)->add(key);
    return key;
}

bool java::nio::channels::SelectableChannel::isOpen()
{
    return open;
}

void java::nio::channels::SelectableChannel::close() /* throws(IOException) */
{
    open = false;
    key = nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::SelectableChannel::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.SelectableChannel", 35);
    return c;
}

java::lang::Class* java::nio::channels::SelectableChannel::getClass0()
{
    return class_();
}

