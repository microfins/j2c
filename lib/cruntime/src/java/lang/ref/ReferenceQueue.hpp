// Generated from /runtime/java/lang/ref/ReferenceQueue.java

#pragma once

#include <java/lang/ref/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::ref::ReferenceQueue
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    Reference* front {  };

public:
    virtual Reference* poll();

public: /* package */
    virtual void add(Reference* r);

    // Generated

public:
    ReferenceQueue();
protected:
    ReferenceQueue(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
