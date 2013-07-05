// Generated from /runtime/java/lang/ThreadDeath.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Error.hpp>

struct default_init_tag;

class java::lang::ThreadDeath
    : public Error
{

public:
    typedef Error super;
protected:
    void ctor();

    // Generated

public:
    ThreadDeath();
protected:
    ThreadDeath(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
