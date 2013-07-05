// Generated from /runtime/java/util/EventObject.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::EventObject
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::lang::Object* source {  };
protected:
    void ctor(::java::lang::Object* source);

public:
    virtual ::java::lang::Object* getSource();

    // Generated
    EventObject(::java::lang::Object* source);
protected:
    EventObject(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
