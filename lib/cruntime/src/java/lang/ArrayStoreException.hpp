// Generated from /runtime/java/lang/ArrayStoreException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::lang::ArrayStoreException
    : public RuntimeException
{

public:
    typedef RuntimeException super;
protected:
    void ctor(String* message);
    void ctor();

    // Generated

public:
    ArrayStoreException(String* message);
    ArrayStoreException();
protected:
    ArrayStoreException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
