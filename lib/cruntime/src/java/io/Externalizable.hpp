// Generated from /runtime/java/io/Externalizable.java

#pragma once

#include <java/io/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct java::io::Externalizable
    : public virtual ::java::lang::Object
{
    virtual void readExternal(ObjectInput* in) = 0;
    virtual void writeExternal(ObjectOutput* out) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
