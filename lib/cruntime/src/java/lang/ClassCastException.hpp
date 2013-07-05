// Generated from /runtime/java/lang/ClassCastException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::lang::ClassCastException
    : public RuntimeException
{

public:
    typedef RuntimeException super;
protected:
    void ctor(String* message);
    void ctor();

    // Generated

public:
    ClassCastException(String* message);
    ClassCastException();
protected:
    ClassCastException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
