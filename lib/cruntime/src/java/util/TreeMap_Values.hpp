// Generated from /runtime/java/util/TreeMap.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>

struct default_init_tag;

class java::util::TreeMap_Values
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
    TreeMap_Values(TreeMap *TreeMap_this);
protected:
    TreeMap_Values(TreeMap *TreeMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    TreeMap *TreeMap_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class TreeMap;
    friend class TreeMap_TreeMap_1;
    friend class TreeMap_TreeMap_2;
    friend class TreeMap_MyEntry;
    friend class TreeMap_KeySet;
};
