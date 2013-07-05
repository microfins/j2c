// Generated from /runtime/java/util/TreeSet.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>

struct default_init_tag;

class java::util::TreeSet_TreeSet_1
    : public virtual ::java::lang::Object
    , public virtual Comparator
{

public:
    typedef ::java::lang::Object super;
    virtual int32_t compare(::avian::Cell* a, ::avian::Cell* b);

    // Generated
    TreeSet_TreeSet_1(TreeSet *TreeSet_this, Comparator* comparator);
    static ::java::lang::Class *class_();
    virtual int32_t compare(::java::lang::Object* o1, ::java::lang::Object* o2) override;
    TreeSet *TreeSet_this;
    Comparator* comparator;

private:
    virtual ::java::lang::Class* getClass0();
    friend class TreeSet;
    friend class TreeSet_TreeSet_2;
    friend class TreeSet_MyIterator;
};
