// Generated from /runtime/java/text/FieldPosition.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/text/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::text::FieldPosition
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor(int32_t field);

    // Generated

public:
    FieldPosition(int32_t field);
protected:
    FieldPosition(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
