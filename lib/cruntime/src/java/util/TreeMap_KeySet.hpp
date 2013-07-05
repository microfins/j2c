// Generated from /runtime/java/util/TreeMap.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/AbstractSet.hpp>

struct default_init_tag;

class java::util::TreeMap_KeySet
    : public AbstractSet
{

public:
    typedef AbstractSet super;
    int32_t size() override;
    bool isEmpty() override;
    bool contains(::java::lang::Object* key) override;
    bool add(::java::lang::Object* key) override;
    bool addAll(Collection* collection) override;
    bool remove(::java::lang::Object* key) override;
    ::java::lang::ObjectArray* toArray_() override;
    /* <T> */::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* array) override;
    void clear() override;
    Iterator* iterator() override;

    // Generated
    TreeMap_KeySet(TreeMap *TreeMap_this);
protected:
    TreeMap_KeySet(TreeMap *TreeMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    TreeMap *TreeMap_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class TreeMap;
    friend class TreeMap_TreeMap_1;
    friend class TreeMap_TreeMap_2;
    friend class TreeMap_MyEntry;
    friend class TreeMap_Values;
};
