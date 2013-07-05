// Generated from /runtime/java/nio/channels/UnsupportedAddressTypeException.java

#pragma once

#include <java/nio/channels/fwd-runtime.hpp>
#include <java/lang/IllegalArgumentException.hpp>

struct default_init_tag;

class java::nio::channels::UnsupportedAddressTypeException
    : public ::java::lang::IllegalArgumentException
{

public:
    typedef ::java::lang::IllegalArgumentException super;
protected:
    void ctor();

    // Generated

public:
    UnsupportedAddressTypeException();
protected:
    UnsupportedAddressTypeException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
