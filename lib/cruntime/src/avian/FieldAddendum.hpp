// Generated from /runtime/avian/FieldAddendum.java

#pragma once

#include <avian/fwd-runtime.hpp>
#include <avian/Addendum.hpp>

struct default_init_tag;

class avian::FieldAddendum
    : public Addendum
{

public:
    typedef Addendum super;

    // Generated
    FieldAddendum();
protected:
    FieldAddendum(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
