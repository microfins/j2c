// Generated from /runtime/java/lang/ref/PhantomReference.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/ref/fwd-runtime.hpp>
#include <java/lang/ref/Reference.hpp>

struct default_init_tag;

class java::lang::ref::PhantomReference
    : public Reference
{

public:
    typedef Reference super;
protected:
    void ctor(::java::lang::Object* target, ReferenceQueue* queue);
    void ctor(::java::lang::Object* target);

public:
    ::java::lang::Object* get() override;

    // Generated
    PhantomReference(::java::lang::Object* target, ReferenceQueue* queue);
    PhantomReference(::java::lang::Object* target);
protected:
    PhantomReference(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
