// Generated from /runtime/avian/Traces.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>

struct default_init_tag;

class avian::Traces_startTraceListener_1
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Runnable
{

public:
    typedef ::java::lang::Object super;
    void run() override;

    // Generated
    Traces_startTraceListener_1(::java::lang::String* host, int32_t port);
    static ::java::lang::Class *class_();
    ::java::lang::String* host;
    int32_t port;

private:
    virtual ::java::lang::Class* getClass0();
    friend class Traces;
};
