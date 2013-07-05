// Generated from /runtime/java/lang/LinkageError.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Error.hpp>

struct default_init_tag;

class java::lang::LinkageError
    : public Error
{

public:
    typedef Error super;
protected:
    void ctor(String* message);
    void ctor();

    // Generated

public:
    LinkageError(String* message);
    LinkageError();
protected:
    LinkageError(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
