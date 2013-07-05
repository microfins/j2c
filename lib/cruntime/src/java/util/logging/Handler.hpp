// Generated from /runtime/java/util/logging/Handler.java

#pragma once

#include <java/util/logging/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::logging::Handler
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    virtual void publish(LogRecord* r);

    // Generated
    Handler();
protected:
    Handler(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
