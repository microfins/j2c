// Generated from /runtime/java/nio/channels/SelectableChannel.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/nio/channels/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/nio/channels/Channel.hpp>

struct default_init_tag;

class java::nio::channels::SelectableChannel
    : public virtual ::java::lang::Object
    , public virtual Channel
{

public:
    typedef ::java::lang::Object super;

private:
    SelectionKey* key {  };
    bool open {  };

public: /* package */
    virtual int32_t socketFD() = 0;
    virtual void handleReadyOps(int32_t ops) = 0;

public:
    virtual SelectableChannel* configureBlocking(bool v) /* throws(IOException) */ = 0;
    virtual SelectionKey* register_(Selector* selector, int32_t interestOps, ::java::lang::Object* attachment);
    bool isOpen() override;
    void close() /* throws(IOException) */ override;

    // Generated
    SelectableChannel();
protected:
    void ctor();
    SelectableChannel(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
