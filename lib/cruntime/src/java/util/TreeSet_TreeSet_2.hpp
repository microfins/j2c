// Generated from /runtime/java/util/TreeSet.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>

struct default_init_tag;

class java::util::TreeSet_TreeSet_2
    : public virtual ::java::lang::Object
    , public virtual Comparator
{

public:
    typedef ::java::lang::Object super;
    int32_t compare(::java::lang::Object* a, ::java::lang::Object* b) override;

    // Generated
    TreeSet_TreeSet_2(TreeSet *TreeSet_this);
    static ::java::lang::Class *class_();
    TreeSet *TreeSet_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class TreeSet;
    friend class TreeSet_TreeSet_1;
    friend class TreeSet_MyIterator;
};
