// Generated from /runtime/java/lang/InheritableThreadLocal.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/ThreadLocal.hpp>

struct default_init_tag;

class java::lang::InheritableThreadLocal
    : public ThreadLocal
{

public:
    typedef ThreadLocal super;

public: /* protected */
    virtual Object* childValue(Object* parentValue);

    // Generated

public:
    InheritableThreadLocal();
protected:
    InheritableThreadLocal(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
