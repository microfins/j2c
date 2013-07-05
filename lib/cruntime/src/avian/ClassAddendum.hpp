// Generated from /runtime/avian/ClassAddendum.java

#pragma once

#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <avian/Addendum.hpp>

struct default_init_tag;

class avian::ClassAddendum
    : public Addendum
{

public:
    typedef Addendum super;
    ::java::lang::ObjectArray* interfaceTable {  };
    ::java::lang::ObjectArray* innerClassTable {  };
    ::java::lang::ObjectArray* methodTable {  };
    ::java::lang::Object* enclosingClass {  };
    ::java::lang::Object* enclosingMethod {  };

    // Generated
    ClassAddendum();
protected:
    ClassAddendum(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
