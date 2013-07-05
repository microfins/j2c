// Generated from /runtime/java/nio/channels/SelectionKey.java
#include <java/nio/channels/SelectionKey.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/nio/channels/SelectableChannel.hpp>
#include <java/nio/channels/Selector.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::nio::channels::SelectionKey::SelectionKey(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::channels::SelectionKey::SelectionKey(SelectableChannel* channel, Selector* selector, int32_t interestOps, ::java::lang::Object* attachment) 
    : SelectionKey(*static_cast< ::default_init_tag* >(0))
{
    ctor(channel,selector,interestOps,attachment);
}

constexpr int32_t java::nio::channels::SelectionKey::OP_READ;

constexpr int32_t java::nio::channels::SelectionKey::OP_WRITE;

constexpr int32_t java::nio::channels::SelectionKey::OP_CONNECT;

constexpr int32_t java::nio::channels::SelectionKey::OP_ACCEPT;

void java::nio::channels::SelectionKey::ctor(SelectableChannel* channel, Selector* selector, int32_t interestOps, ::java::lang::Object* attachment)
{
    super::ctor();
    this->channel_ = channel;
    this->selector_ = selector;
    this->interestOps_ = interestOps;
    this->attachment_ = attachment;
    this->readyOps_ = 0;
}

int32_t java::nio::channels::SelectionKey::interestOps()
{
    return interestOps_;
}

java::nio::channels::SelectionKey* java::nio::channels::SelectionKey::interestOps(int32_t v)
{
    this->interestOps_ = v;
    return this;
}

int32_t java::nio::channels::SelectionKey::readyOps()
{
    return readyOps_;
}

void java::nio::channels::SelectionKey::readyOps(int32_t v)
{
    this->readyOps_ = v;
}

bool java::nio::channels::SelectionKey::isReadable()
{
    return (readyOps_ & OP_READ) != 0;
}

bool java::nio::channels::SelectionKey::isWritable()
{
    return (readyOps_ & OP_WRITE) != 0;
}

bool java::nio::channels::SelectionKey::isConnectable()
{
    return (readyOps_ & OP_CONNECT) != 0;
}

bool java::nio::channels::SelectionKey::isAcceptable()
{
    return (readyOps_ & OP_ACCEPT) != 0;
}

bool java::nio::channels::SelectionKey::isValid()
{
    return npc(channel_)->isOpen() && npc(selector_)->isOpen();
}

java::nio::channels::SelectableChannel* java::nio::channels::SelectionKey::channel()
{
    return channel_;
}

java::nio::channels::Selector* java::nio::channels::SelectionKey::selector()
{
    return selector_;
}

java::lang::Object* java::nio::channels::SelectionKey::attachment()
{
    return attachment_;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::SelectionKey::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.SelectionKey", 30);
    return c;
}

java::lang::Class* java::nio::channels::SelectionKey::getClass0()
{
    return class_();
}

