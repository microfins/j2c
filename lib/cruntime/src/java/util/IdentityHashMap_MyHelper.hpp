// Generated from /runtime/java/util/IdentityHashMap.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/HashMap_MyHelper.hpp>

struct default_init_tag;

class java::util::IdentityHashMap_MyHelper
    : public HashMap_MyHelper
{

public:
    typedef HashMap_MyHelper super;
    int32_t hash(::java::lang::Object* a) override;
    bool equal(::java::lang::Object* a, ::java::lang::Object* b) override;

    // Generated
    IdentityHashMap_MyHelper();
protected:
    IdentityHashMap_MyHelper(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class IdentityHashMap;
};
