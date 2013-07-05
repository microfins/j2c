// Generated from /runtime/java/io/ObjectStreamException.java

#pragma once

#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/io/IOException.hpp>

struct default_init_tag;

class java::io::ObjectStreamException
    : public IOException
{

public:
    typedef IOException super;
protected:
    void ctor(::java::lang::String* message);
    void ctor();

    // Generated

public:
    ObjectStreamException(::java::lang::String* message);
    ObjectStreamException();
protected:
    ObjectStreamException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
