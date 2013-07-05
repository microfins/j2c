// Generated from /runtime/java/nio/channels/SocketSelector.java

#pragma once

#include <atomic>
#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/nio/channels/fwd-runtime.hpp>
#include <java/nio/channels/Selector.hpp>

struct default_init_tag;

class java::nio::channels::SocketSelector
    : public Selector
{

public:
    typedef Selector super;

public: /* protected */
    std::atomic< int64_t > state {  };
    ::java::lang::Object* lock {  };
    bool woken {  };
protected:
    void ctor() /* throws(IOException) */;

public:
    bool isOpen() override;
    Selector* wakeup() override;

private:
    bool clearWoken();

public:
    int32_t selectNow() /* throws(IOException) */ override;
    int32_t select() /* throws(IOException) */ override;
    int32_t select(int64_t interval) /* throws(IOException) */ override;
    virtual int32_t doSelect(int64_t interval) /* throws(IOException) */;
    void close() override;

private:
    static int64_t natInit();
    static void natWakeup(int64_t state);
    static void natClose(int64_t state);
    static void natSelectClearAll(int32_t socket, int64_t state);
    static int32_t natSelectUpdateInterestSet(int32_t socket, int32_t interest, int64_t state, int32_t max);
    static int32_t natDoSocketSelect(int64_t state, int32_t max, int64_t interval) /* throws(IOException) */;
    static int32_t natUpdateReadySet(int32_t socket, int32_t interest, int64_t state);

    // Generated

public:
    SocketSelector();
protected:
    SocketSelector(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
