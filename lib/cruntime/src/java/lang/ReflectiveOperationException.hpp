// Generated from /runtime/java/lang/ReflectiveOperationException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class java::lang::ReflectiveOperationException
    : public Exception
{

public:
    typedef Exception super;

    // Generated
    ReflectiveOperationException();
protected:
    ReflectiveOperationException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
