// Generated from /runtime/java/util/AbstractMap.java

#pragma once

#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>

struct default_init_tag;

class java::util::AbstractMap
    : public virtual ::java::lang::Object
    , public virtual Map
{

public:
    typedef ::java::lang::Object super;

    // Generated
    AbstractMap();
protected:
    AbstractMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
