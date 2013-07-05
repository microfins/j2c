// Generated from /runtime/java/nio/channels/ClosedSelectorException.java

#pragma once

#include <java/nio/channels/fwd-runtime.hpp>
#include <java/lang/IllegalStateException.hpp>

struct default_init_tag;

class java::nio::channels::ClosedSelectorException
    : public ::java::lang::IllegalStateException
{

public:
    typedef ::java::lang::IllegalStateException super;

    // Generated
    ClosedSelectorException();
protected:
    ClosedSelectorException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
