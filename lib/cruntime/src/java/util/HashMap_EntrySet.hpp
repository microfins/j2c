// Generated from /runtime/java/util/HashMap.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/AbstractSet.hpp>

struct default_init_tag;

class java::util::HashMap_EntrySet
    : public AbstractSet
{

public:
    typedef AbstractSet super;
    int32_t size() override;
    bool isEmpty() override;
    bool contains(::java::lang::Object* o) override;
    virtual bool add(Map_Entry* e);
    bool remove(::java::lang::Object* o) override;
    virtual bool remove(Map_Entry* e);
    ::java::lang::ObjectArray* toArray_() override;
    /* <T> */::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* array) override;
    void clear() override;
    Iterator* iterator() override;

    // Generated
    HashMap_EntrySet(HashMap *HashMap_this);
protected:
    HashMap_EntrySet(HashMap *HashMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    bool add(::java::lang::Object* element) override;
    HashMap *HashMap_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class HashMap;
    friend class HashMap_Cell;
    friend class HashMap_Helper;
    friend class HashMap_MyCell;
    friend class HashMap_MyHelper;
    friend class HashMap_KeySet;
    friend class HashMap_Values;
    friend class HashMap_MyIterator;
};
