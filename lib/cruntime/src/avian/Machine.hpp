// Generated from /runtime/avian/Machine.java

#pragma once

#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <sun/misc/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class avian::Machine
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::sun::misc::Unsafe* unsafe_;

public:
    static void dumpHeap(::java::lang::String* outputFile);
    static ::sun::misc::Unsafe* getUnsafe();

    // Generated
    Machine();
protected:
    Machine(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::sun::misc::Unsafe*& unsafe();
    virtual ::java::lang::Class* getClass0();
};
