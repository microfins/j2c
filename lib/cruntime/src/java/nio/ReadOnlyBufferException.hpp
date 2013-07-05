// Generated from /runtime/java/nio/ReadOnlyBufferException.java

#pragma once

#include <java/nio/fwd-runtime.hpp>
#include <java/lang/UnsupportedOperationException.hpp>

struct default_init_tag;

class java::nio::ReadOnlyBufferException
    : public ::java::lang::UnsupportedOperationException
{

public:
    typedef ::java::lang::UnsupportedOperationException super;

    // Generated
    ReadOnlyBufferException();
protected:
    ReadOnlyBufferException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
