// Generated from /runtime/java/lang/String.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>

struct default_init_tag;

class java::lang::String_1
    : public virtual Object
    , public virtual ::java::util::Comparator
{

public:
    typedef Object super;
    virtual int32_t compare(String* a, String* b);

    // Generated
    String_1();
    static ::java::lang::Class *class_();
    virtual int32_t compare(Object* o1, Object* o2) override;

private:
    virtual ::java::lang::Class* getClass0();
    friend class String;
};
