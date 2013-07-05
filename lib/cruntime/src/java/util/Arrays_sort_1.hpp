// Generated from /runtime/java/util/Arrays.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>

struct default_init_tag;

class java::util::Arrays_sort_1
    : public virtual ::java::lang::Object
    , public virtual Comparator
{

public:
    typedef ::java::lang::Object super;
    int32_t compare(::java::lang::Object* a, ::java::lang::Object* b) override;

    // Generated
    Arrays_sort_1();
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Arrays;
    friend class Arrays_asList_2;
};
