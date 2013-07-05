// Generated from /runtime/java/util/HashMap.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/HashMap_Cell.hpp>

struct default_init_tag;

class java::util::HashMap_MyCell
    : public virtual ::java::lang::Object
    , public virtual HashMap_Cell
{

public:
    typedef ::java::lang::Object super;
    ::java::lang::Object* key {  };
    ::java::lang::Object* value {  };
    HashMap_Cell* next_ {  };
    int32_t hashCode_ {  };
protected:
    void ctor(::java::lang::Object* key, ::java::lang::Object* value, HashMap_Cell* next, int32_t hashCode);

public:
    ::java::lang::Object* getKey() override;
    ::java::lang::Object* getValue() override;
    ::java::lang::Object* setValue(::java::lang::Object* value) override;
    HashMap_Cell* next() override;
    void setNext(HashMap_Cell* next) override;
    int32_t hashCode() override;

    // Generated
    HashMap_MyCell(::java::lang::Object* key, ::java::lang::Object* value, HashMap_Cell* next, int32_t hashCode);
protected:
    HashMap_MyCell(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class HashMap;
    friend class HashMap_Cell;
    friend class HashMap_Helper;
    friend class HashMap_MyHelper;
    friend class HashMap_EntrySet;
    friend class HashMap_KeySet;
    friend class HashMap_Values;
    friend class HashMap_MyIterator;
};
