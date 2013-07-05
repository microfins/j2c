// Generated from /runtime/java/nio/channels/Selector.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/nio/channels/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::nio::channels::Selector
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::util::Set* keys_ {  };
    ::java::util::Set* selectedKeys_ {  };

public:
    static Selector* open() /* throws(IOException) */;
    virtual void add(SelectionKey* key);
    virtual void remove(SelectionKey* key);
    virtual ::java::util::Set* keys();
    virtual ::java::util::Set* selectedKeys();
    virtual bool isOpen() = 0;
    virtual Selector* wakeup() = 0;
    virtual int32_t selectNow() /* throws(IOException) */ = 0;
    virtual int32_t select(int64_t interval) /* throws(IOException) */ = 0;
    virtual int32_t select() /* throws(IOException) */ = 0;
    virtual void close() = 0;

    // Generated
    Selector();
protected:
    void ctor();
    Selector(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
