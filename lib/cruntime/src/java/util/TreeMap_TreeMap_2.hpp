// Generated from /runtime/java/util/TreeMap.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>

struct default_init_tag;

class java::util::TreeMap_TreeMap_2
    : public virtual ::java::lang::Object
    , public virtual Comparator
{

public:
    typedef ::java::lang::Object super;
    int32_t compare(::java::lang::Object* a, ::java::lang::Object* b) override;

    // Generated
    TreeMap_TreeMap_2(TreeMap *TreeMap_this);
    static ::java::lang::Class *class_();
    TreeMap *TreeMap_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class TreeMap;
    friend class TreeMap_TreeMap_1;
    friend class TreeMap_MyEntry;
    friend class TreeMap_KeySet;
    friend class TreeMap_Values;
};
