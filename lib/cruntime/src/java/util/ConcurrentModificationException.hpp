// Generated from /runtime/java/util/ConcurrentModificationException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::util::ConcurrentModificationException
    : public ::java::lang::RuntimeException
{

public:
    typedef ::java::lang::RuntimeException super;
protected:
    void ctor(::java::lang::String* message, ::java::lang::Throwable* cause);
    void ctor(::java::lang::String* message);
    void ctor(::java::lang::Throwable* cause);
    void ctor();

    // Generated

public:
    ConcurrentModificationException(::java::lang::String* message, ::java::lang::Throwable* cause);
    ConcurrentModificationException(::java::lang::String* message);
    ConcurrentModificationException(::java::lang::Throwable* cause);
    ConcurrentModificationException();
protected:
    ConcurrentModificationException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
