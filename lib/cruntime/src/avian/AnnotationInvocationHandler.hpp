// Generated from /runtime/avian/AnnotationInvocationHandler.java

#pragma once

#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/reflect/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/reflect/InvocationHandler.hpp>

struct default_init_tag;

class avian::AnnotationInvocationHandler
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::reflect::InvocationHandler
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::ObjectArray* data {  };
protected:
    void ctor(::java::lang::ObjectArray* data);

public:
    ::java::lang::Object* invoke(::java::lang::Object* proxy, ::java::lang::reflect::Method* method, ::java::lang::ObjectArray* arguments) override;

    // Generated
    AnnotationInvocationHandler(::java::lang::ObjectArray* data);
protected:
    AnnotationInvocationHandler(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
