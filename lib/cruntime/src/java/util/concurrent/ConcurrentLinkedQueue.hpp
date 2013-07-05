// Generated from /runtime/java/util/concurrent/ConcurrentLinkedQueue.java

#pragma once

#include <atomic>
#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/concurrent/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::concurrent::ConcurrentLinkedQueue
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static int64_t QueueHead_;
    static int64_t QueueTail_;
    static int64_t NodeNext_;
    std::atomic< ConcurrentLinkedQueue_Node* > head {  };
    std::atomic< ConcurrentLinkedQueue_Node* > tail {  };

public:
    virtual void clear();
    virtual bool add(::java::lang::Object* value);
    virtual ::java::lang::Object* peek();
    virtual ::java::lang::Object* poll();
    virtual ::java::lang::Object* poll(bool remove);

    // Generated
    ConcurrentLinkedQueue();
protected:
    void ctor();
    ConcurrentLinkedQueue(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static int64_t& QueueHead();
    static int64_t& QueueTail();
    static int64_t& NodeNext();
    virtual ::java::lang::Class* getClass0();
    friend class ConcurrentLinkedQueue_Node;
};
