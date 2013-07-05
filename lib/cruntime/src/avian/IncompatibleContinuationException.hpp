// Generated from /runtime/avian/IncompatibleContinuationException.java

#pragma once

#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class avian::IncompatibleContinuationException
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;
protected:
    void ctor(::java::lang::String* message);
    void ctor();

    // Generated

public:
    IncompatibleContinuationException(::java::lang::String* message);
    IncompatibleContinuationException();
protected:
    IncompatibleContinuationException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
