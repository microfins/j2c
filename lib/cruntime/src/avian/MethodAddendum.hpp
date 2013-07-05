// Generated from /runtime/avian/MethodAddendum.java

#pragma once

#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <avian/Addendum.hpp>

struct default_init_tag;

class avian::MethodAddendum
    : public Addendum
{

public:
    typedef Addendum super;
    ::java::lang::Object* exceptionTable {  };
    ::java::lang::Object* annotationDefault {  };
    ::java::lang::Object* parameterAnnotationTable {  };

    // Generated
    MethodAddendum();
protected:
    MethodAddendum(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
