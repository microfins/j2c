// Generated from /runtime/avian/Traces.java
#include <avian/Traces_startTraceListener_1.hpp>

#include <avian/Traces.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/net/InetSocketAddress.hpp>
#include <java/net/ServerSocket.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/nio/channels/ServerSocketChannel.hpp>
#include <java/nio/channels/SocketChannel.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
avian::Traces_startTraceListener_1::Traces_startTraceListener_1(::java::lang::String* host, int32_t port)
    : super(*static_cast< ::default_init_tag* >(0))
    , host(host)
    , port(port)
{
    clinit();
    ctor();
}

void avian::Traces_startTraceListener_1::run()
{
    try {
        auto server = ::java::nio::channels::ServerSocketChannel::open();
        npc(npc(server)->socket())->bind(new ::java::net::InetSocketAddress(host, port));
        while (true) {
            auto c = npc(server)->accept();
            {
                auto finally0 = finally([&] {
                    npc(c)->close();
                });
                {
                    npc(c)->write(::java::nio::ByteBuffer::wrap(npc(Traces::traceAllThreads())->getBytes()));
                }
            }

        }
    } catch (::java::lang::Exception* e) {
        npc(e)->printStackTrace();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::Traces_startTraceListener_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* avian::Traces_startTraceListener_1::getClass0()
{
    return class_();
}

