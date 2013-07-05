// Generated from /runtime/java/util/Stack.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/Vector.hpp>

struct default_init_tag;

class java::util::Stack
    : public Vector
{

public:
    typedef Vector super;
    virtual bool empty();
    virtual ::java::lang::Object* peek();
    virtual ::java::lang::Object* pop();
    virtual ::java::lang::Object* push(::java::lang::Object* element);

    // Generated
    Stack();
protected:
    Stack(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
