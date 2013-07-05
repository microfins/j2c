// Generated from /runtime/java/util/TreeMap.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>

struct default_init_tag;

class java::util::TreeMap_TreeMap_1
    : public virtual ::java::lang::Object
    , public virtual Comparator
{

public:
    typedef ::java::lang::Object super;
    virtual int32_t compare(TreeMap_MyEntry* a, TreeMap_MyEntry* b);

    // Generated
    TreeMap_TreeMap_1(TreeMap *TreeMap_this, Comparator* comparator);
    static ::java::lang::Class *class_();
    virtual int32_t compare(::java::lang::Object* o1, ::java::lang::Object* o2) override;
    TreeMap *TreeMap_this;
    Comparator* comparator;

private:
    virtual ::java::lang::Class* getClass0();
    friend class TreeMap;
    friend class TreeMap_TreeMap_2;
    friend class TreeMap_MyEntry;
    friend class TreeMap_KeySet;
    friend class TreeMap_Values;
};
