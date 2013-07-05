// Generated from /runtime/java/io/NotSerializableException.java

#pragma once

#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/io/ObjectStreamException.hpp>

struct default_init_tag;

class java::io::NotSerializableException
    : public ObjectStreamException
{

public:
    typedef ObjectStreamException super;
protected:
    void ctor(::java::lang::String* message);
    void ctor();

    // Generated

public:
    NotSerializableException(::java::lang::String* message);
    NotSerializableException();
protected:
    NotSerializableException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
