// Generated from /runtime/java/util/Queue.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/Collection.hpp>
#include <java/lang/Iterable.hpp>

struct java::util::Queue
    : public virtual Collection
    , public virtual ::java::lang::Iterable
{
    /*bool add(::java::lang::Object* element); (already declared) */
    virtual ::java::lang::Object* element() = 0;
    virtual bool offer(::java::lang::Object* element) = 0;
    virtual ::java::lang::Object* peek() = 0;
    virtual ::java::lang::Object* poll() = 0;
    virtual ::java::lang::Object* remove() = 0;

    // Generated
    static ::java::lang::Class *class_();
    virtual bool remove(::java::lang::Object* element) = 0;
};
