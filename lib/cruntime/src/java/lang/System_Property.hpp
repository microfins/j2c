// Generated from /runtime/java/lang/System.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::System_Property
    : public virtual Object
{

public:
    typedef Object super;
    String* name {  };
    String* value {  };
    System_Property* next {  };
protected:
    void ctor(String* name, String* value, System_Property* next);

    // Generated

public:
    System_Property(String* name, String* value, System_Property* next);
protected:
    System_Property(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class System;
};
