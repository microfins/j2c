// Generated from /runtime/avian/Traces.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class avian::Traces
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* Newline_;
    static ::java::lang::String* traceAllThreads();
    static ::java::lang::String* traceThread(::java::lang::Thread* thread);
    static void traceThread(::java::lang::Thread* thread, ::java::lang::StringBuilder* buffer);

public:
    static void startTraceListener(::java::lang::String* host, int32_t port);

    // Generated
    Traces();
protected:
    Traces(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::lang::String*& Newline();
    virtual ::java::lang::Class* getClass0();
    friend class Traces_startTraceListener_1;
};
