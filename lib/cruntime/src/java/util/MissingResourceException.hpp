// Generated from /runtime/java/util/MissingResourceException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::util::MissingResourceException
    : public ::java::lang::RuntimeException
{

public:
    typedef ::java::lang::RuntimeException super;

private:
    ::java::lang::String* class__ {  };
    ::java::lang::String* key {  };
protected:
    void ctor(::java::lang::String* message, ::java::lang::String* class__, ::java::lang::String* key);

public:
    virtual ::java::lang::String* getClassName();
    virtual ::java::lang::String* getKey();

    // Generated
    MissingResourceException(::java::lang::String* message, ::java::lang::String* class__, ::java::lang::String* key);
protected:
    MissingResourceException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
