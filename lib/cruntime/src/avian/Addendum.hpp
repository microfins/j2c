// Generated from /runtime/avian/Addendum.java

#pragma once

#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class avian::Addendum
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    ::java::lang::Object* pool {  };
    ::java::lang::Object* annotationTable {  };
    ::java::lang::Object* signature {  };

    // Generated
    Addendum();
protected:
    Addendum(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
