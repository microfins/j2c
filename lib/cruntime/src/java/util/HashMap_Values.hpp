// Generated from /runtime/java/util/HashMap.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>

struct default_init_tag;

class java::util::HashMap_Values
    : public virtual ::java::lang::Object
    , public virtual Collection
{

public:
    typedef ::java::lang::Object super;
    int32_t size() override;
    bool isEmpty() override;
    bool contains(::java::lang::Object* value) override;
    bool containsAll(Collection* c) override;
    bool add(::java::lang::Object* value) override;
    bool addAll(Collection* collection) override;
    bool remove(::java::lang::Object* value) override;
    bool removeAll(Collection* c) override;
    ::java::lang::ObjectArray* toArray_() override;
    /* <T> */::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* array) override;
    void clear() override;
    Iterator* iterator() override;

    // Generated
    HashMap_Values(HashMap *HashMap_this);
protected:
    HashMap_Values(HashMap *HashMap_this, const ::default_init_tag&);


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
    friend class HashMap_KeySet;
    friend class HashMap_MyIterator;
};
