// Generated from /runtime/java/lang/IllegalMonitorStateException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::lang::IllegalMonitorStateException
    : public RuntimeException
{

public:
    typedef RuntimeException super;
protected:
    void ctor(String* message);
    void ctor();

    // Generated

public:
    IllegalMonitorStateException(String* message);
    IllegalMonitorStateException();
protected:
    IllegalMonitorStateException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
