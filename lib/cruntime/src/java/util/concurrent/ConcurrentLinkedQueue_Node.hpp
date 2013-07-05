// Generated from /runtime/java/util/concurrent/ConcurrentLinkedQueue.java

#pragma once

#include <atomic>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/concurrent/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::concurrent::ConcurrentLinkedQueue_Node
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    std::atomic< ::java::lang::Object* > value {  };
    std::atomic< ConcurrentLinkedQueue_Node* > next {  };
protected:
    void ctor(::java::lang::Object* value, ConcurrentLinkedQueue_Node* next);

    // Generated

public:
    ConcurrentLinkedQueue_Node(::java::lang::Object* value, ConcurrentLinkedQueue_Node* next);
protected:
    ConcurrentLinkedQueue_Node(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ConcurrentLinkedQueue;
};
