// Generated from /runtime/java/lang/InstantiationException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class java::lang::InstantiationException
    : public Exception
{

public:
    typedef Exception super;
protected:
    void ctor(String* message);
    void ctor();

    // Generated

public:
    InstantiationException(String* message);
    InstantiationException();
protected:
    InstantiationException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
