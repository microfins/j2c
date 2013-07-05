// Generated from /runtime/java/lang/NumberFormatException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/IllegalArgumentException.hpp>

struct default_init_tag;

class java::lang::NumberFormatException
    : public IllegalArgumentException
{

public:
    typedef IllegalArgumentException super;
protected:
    void ctor(String* message);
    void ctor();

    // Generated

public:
    NumberFormatException(String* message);
    NumberFormatException();
protected:
    NumberFormatException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
