// Generated from /runtime/avian/Continuations.java

#pragma once

#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <avian/Callback.hpp>

struct default_init_tag;

class avian::Continuations_Continuation
    : public virtual ::java::lang::Object
    , public virtual Callback
{

public:
    typedef ::java::lang::Object super;
    void handleResult(::java::lang::Object* result) override;
    void handleException(::java::lang::Throwable* exception) override;

    // Generated
    Continuations_Continuation();
protected:
    Continuations_Continuation(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Continuations;
    friend class Continuations_UnwindResult;
};
