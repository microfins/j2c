// Generated from /runtime/sun/reflect/ConstantPool.java

#pragma once

#include <sun/reflect/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class sun::reflect::ConstantPool
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

    // Generated
    ConstantPool();
protected:
    ConstantPool(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
