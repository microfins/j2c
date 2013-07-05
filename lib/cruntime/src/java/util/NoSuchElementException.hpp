// Generated from /runtime/java/util/NoSuchElementException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::util::NoSuchElementException
    : public ::java::lang::RuntimeException
{

public:
    typedef ::java::lang::RuntimeException super;
protected:
    void ctor(::java::lang::String* message);
    void ctor();

    // Generated

public:
    NoSuchElementException(::java::lang::String* message);
    NoSuchElementException();
protected:
    NoSuchElementException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
