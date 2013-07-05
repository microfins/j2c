// Generated from /runtime/java/io/EOFException.java

#pragma once

#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/io/IOException.hpp>

struct default_init_tag;

class java::io::EOFException
    : public IOException
{

public:
    typedef IOException super;
protected:
    void ctor(::java::lang::String* message);
    void ctor();

    // Generated

public:
    EOFException(::java::lang::String* message);
    EOFException();
protected:
    EOFException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
