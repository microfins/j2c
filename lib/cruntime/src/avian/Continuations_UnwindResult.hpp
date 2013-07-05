// Generated from /runtime/avian/Continuations.java

#pragma once

#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class avian::Continuations_UnwindResult
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    Callback* continuation {  };
    ::java::lang::Object* result {  };
    ::java::lang::Throwable* exception {  };
protected:
    void ctor(Callback* continuation, ::java::lang::Object* result, ::java::lang::Throwable* exception);

    // Generated

public:
    Continuations_UnwindResult(Callback* continuation, ::java::lang::Object* result, ::java::lang::Throwable* exception);
protected:
    Continuations_UnwindResult(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Continuations;
    friend class Continuations_Continuation;
};
