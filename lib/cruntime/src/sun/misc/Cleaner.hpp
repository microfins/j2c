// Generated from /runtime/sun/misc/Cleaner.java

#pragma once

#include <sun/misc/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class sun::misc::Cleaner
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

    // Generated
    Cleaner();
protected:
    Cleaner(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
