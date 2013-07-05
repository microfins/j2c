// Generated from /runtime/java/lang/Object.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>

struct default_init_tag;

class java::lang::Object
{

public: /* protected */
    virtual Object* clone() /* throws(CloneNotSupportedException) */;

private:
    static Object* clone(Object* o);

public:
    virtual bool equals(Object* o);

public: /* protected */
    virtual void finalize() /* throws(Throwable) */;

public:
    Class* getClass();

private:
    static ::avian::VMClass* getVMClass(Object* o);

public:
    virtual int32_t hashCode();
    void notify();
    void notifyAll();
    virtual String* toString();
    void wait() /* throws(InterruptedException) */;
    void wait(int64_t milliseconds) /* throws(InterruptedException) */;
    void wait(int64_t milliseconds, int32_t nanoseconds) /* throws(InterruptedException) */;

    // Generated
    Object();
protected:
    void ctor();
    Object(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual ~Object();

private:
    virtual ::java::lang::Class* getClass0();
};
