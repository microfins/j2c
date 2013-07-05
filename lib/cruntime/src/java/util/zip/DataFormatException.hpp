// Generated from /runtime/java/util/zip/DataFormatException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/util/zip/fwd-runtime.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class java::util::zip::DataFormatException
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;
protected:
    void ctor(::java::lang::String* s);
    void ctor();

    // Generated

public:
    DataFormatException(::java::lang::String* s);
    DataFormatException();
protected:
    DataFormatException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
