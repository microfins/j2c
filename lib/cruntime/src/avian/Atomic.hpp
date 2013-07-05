// Generated from /runtime/avian/Atomic.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/reflect/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class avian::Atomic
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static int64_t getOffset(::java::lang::reflect::Field* field);
    static bool compareAndSwapObject(::java::lang::Object* o, int64_t offset, ::java::lang::Object* old, ::java::lang::Object* new_);

    // Generated
    Atomic();
protected:
    Atomic(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
