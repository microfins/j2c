// Generated from /runtime/java/util/HashMap.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/AbstractSet.hpp>

struct default_init_tag;

class java::util::HashMap_KeySet
    : public AbstractSet
{

public:
    typedef AbstractSet super;
    int32_t size() override;
    bool isEmpty() override;
    bool contains(::java::lang::Object* key) override;
    bool add(::java::lang::Object* key) override;
    bool remove(::java::lang::Object* key) override;
    ::java::lang::ObjectArray* toArray_() override;
    /* <T> */::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* array) override;
    void clear() override;
    Iterator* iterator() override;

    // Generated
    HashMap_KeySet(HashMap *HashMap_this);
protected:
    HashMap_KeySet(HashMap *HashMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    HashMap *HashMap_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class HashMap;
    friend class HashMap_Cell;
    friend class HashMap_Helper;
    friend class HashMap_MyCell;
    friend class HashMap_MyHelper;
    friend class HashMap_EntrySet;
    friend class HashMap_Values;
    friend class HashMap_MyIterator;
};
