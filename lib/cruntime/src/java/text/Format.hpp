// Generated from /runtime/java/text/Format.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/text/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::text::Format
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    ::java::lang::String* format(::java::lang::Object* o);
    virtual ::java::lang::StringBuffer* format(::java::lang::Object* o, ::java::lang::StringBuffer* target, FieldPosition* p) = 0;

    // Generated
    Format();
protected:
    Format(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
