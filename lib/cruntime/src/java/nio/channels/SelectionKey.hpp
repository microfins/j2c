// Generated from /runtime/java/nio/channels/SelectionKey.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/nio/channels/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::nio::channels::SelectionKey
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t OP_READ { int32_t(1) };
    static constexpr int32_t OP_WRITE { int32_t(4) };
    static constexpr int32_t OP_CONNECT { int32_t(8) };
    static constexpr int32_t OP_ACCEPT { int32_t(16) };

private:
    SelectableChannel* channel_ {  };
    Selector* selector_ {  };
    int32_t interestOps_ {  };
    int32_t readyOps_ {  };
    ::java::lang::Object* attachment_ {  };
protected:
    void ctor(SelectableChannel* channel, Selector* selector, int32_t interestOps, ::java::lang::Object* attachment);

public:
    virtual int32_t interestOps();
    virtual SelectionKey* interestOps(int32_t v);
    virtual int32_t readyOps();
    virtual void readyOps(int32_t v);
    virtual bool isReadable();
    virtual bool isWritable();
    virtual bool isConnectable();
    virtual bool isAcceptable();
    virtual bool isValid();
    virtual SelectableChannel* channel();
    virtual Selector* selector();
    virtual ::java::lang::Object* attachment();

    // Generated
    SelectionKey(SelectableChannel* channel, Selector* selector, int32_t interestOps, ::java::lang::Object* attachment);
protected:
    SelectionKey(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
