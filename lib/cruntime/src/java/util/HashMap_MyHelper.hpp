// Generated from /runtime/java/util/HashMap.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/HashMap_Helper.hpp>

struct default_init_tag;

class java::util::HashMap_MyHelper
    : public virtual ::java::lang::Object
    , public virtual HashMap_Helper
{

public:
    typedef ::java::lang::Object super;
    HashMap_Cell* make(::java::lang::Object* key, ::java::lang::Object* value, HashMap_Cell* next) override;
    int32_t hash(::java::lang::Object* a) override;
    bool equal(::java::lang::Object* a, ::java::lang::Object* b) override;

    // Generated
    HashMap_MyHelper();
protected:
    HashMap_MyHelper(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class HashMap;
    friend class HashMap_Cell;
    friend class HashMap_Helper;
    friend class HashMap_MyCell;
    friend class HashMap_EntrySet;
    friend class HashMap_KeySet;
    friend class HashMap_Values;
    friend class HashMap_MyIterator;
};
