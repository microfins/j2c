// Generated from /runtime/java/nio/channels/SocketSelector.java
#include <java/nio/channels/SocketSelector.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/net/Socket.hpp>
#include <java/nio/channels/ClosedSelectorException.hpp>
#include <java/nio/channels/SelectableChannel.hpp>
#include <java/nio/channels/SelectionKey.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Set.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

extern void lock(::java::lang::Object *);
extern void unlock(::java::lang::Object *);

namespace
{
    struct synchronized
    {
        synchronized(::java::lang::Object *o) : o(o) { ::lock(o); }
        ~synchronized() { ::unlock(o); }
    private:
        synchronized(const synchronized&); synchronized& operator=(const synchronized&);
        ::java::lang::Object *o;
    };
}
java::nio::channels::SocketSelector::SocketSelector(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::channels::SocketSelector::SocketSelector()  /* throws(IOException) */
    : SocketSelector(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::nio::channels::SocketSelector::init()
{
    lock = new ::java::lang::Object();
    woken = false;
}

void java::nio::channels::SocketSelector::ctor() /* throws(IOException) */
{
    super::ctor();
    init();
    ::java::net::Socket::init_();
    state = natInit();
}

bool java::nio::channels::SocketSelector::isOpen()
{
    return state.load() != 0;
}

java::nio::channels::Selector* java::nio::channels::SocketSelector::wakeup()
{
    {
        synchronized synchronized_0(lock);
        {
            if(isOpen() && (!woken)) {
                woken = true;
                natWakeup(state.load());
            }
        }
    }
    return this;
}

bool java::nio::channels::SocketSelector::clearWoken()
{
    {
        synchronized synchronized_1(lock);
        {
            if(woken) {
                woken = false;
                return true;
            } else {
                return false;
            }
        }
    }
}

int32_t java::nio::channels::SocketSelector::selectNow() /* throws(IOException) */
{
    return doSelect(-int32_t(1));
}

int32_t java::nio::channels::SocketSelector::select() /* throws(IOException) */
{
    return doSelect(0);
}

int32_t java::nio::channels::SocketSelector::select(int64_t interval) /* throws(IOException) */
{
    if(interval < 0)
        throw new ::java::lang::IllegalArgumentException();

    return doSelect(interval);
}

int32_t java::nio::channels::SocketSelector::doSelect(int64_t interval) /* throws(IOException) */
{
    if(!isOpen()) {
        throw new ClosedSelectorException();
    }
    npc(selectedKeys_)->clear();
    if(clearWoken())
        interval = -int32_t(1);

    auto max = int32_t(0);
    for (auto *it = npc(keys_)->iterator(); npc(it)->hasNext(); ) {
        auto key = java_cast< SelectionKey* >(npc(it)->next());
        auto c = npc(key)->channel();
        auto socket = npc(c)->socketFD();
        if(npc(c)->isOpen()) {
            npc(key)->readyOps(0);
            max = natSelectUpdateInterestSet(socket, npc(key)->interestOps(), state.load(), max);
        } else {
            natSelectClearAll(socket, state.load());
            npc(it)->remove();
        }
    }
    auto r = natDoSocketSelect(state.load(), max, interval);
    if(r > 0) {
        for (auto _i = npc(keys_)->iterator(); _i->hasNext(); ) {
            SelectionKey* key = java_cast< SelectionKey* >(_i->next());
            {
                auto c = npc(key)->channel();
                auto socket = npc(c)->socketFD();
                auto ready = natUpdateReadySet(socket, npc(key)->interestOps(), state.load());
                npc(key)->readyOps(ready);
                if(ready != 0) {
                    npc(c)->handleReadyOps(ready);
                    npc(selectedKeys_)->add(key);
                }
            }
        }
    }
    clearWoken();
    return npc(selectedKeys_)->size();
}

void java::nio::channels::SocketSelector::close()
{
    {
        synchronized synchronized_2(lock);
        {
            if(isOpen()) {
                natClose(state.load());
                state = 0;
            }
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::SocketSelector::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.SocketSelector", 32);
    return c;
}

java::lang::Class* java::nio::channels::SocketSelector::getClass0()
{
    return class_();
}

