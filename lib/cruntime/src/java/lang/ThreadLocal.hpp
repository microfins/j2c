// Generated from /runtime/java/lang/ThreadLocal.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::ThreadLocal
    : public virtual Object
{

public:
    typedef Object super;

private:
    static Object* Null_;

public: /* protected */
    virtual Object* initialValue();

public:
    virtual Object* get();
    virtual void set(Object* value);

    // Generated
    ThreadLocal();
protected:
    ThreadLocal(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static Object*& Null();
    virtual ::java::lang::Class* getClass0();
};
