// Generated from /runtime/java/lang/annotation/Retention.java

#pragma once

#include <java/lang/annotation/fwd-runtime.hpp>
#include <java/lang/annotation/Annotation.hpp>

struct java::lang::annotation::Retention
    : public virtual Annotation
{
    virtual RetentionPolicy* value() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
