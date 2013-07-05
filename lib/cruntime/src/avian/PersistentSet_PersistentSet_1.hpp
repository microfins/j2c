// Generated from /runtime/avian/PersistentSet.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>

struct default_init_tag;

class avian::PersistentSet_PersistentSet_1
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Comparator
{

public:
    typedef ::java::lang::Object super;
    int32_t compare(::java::lang::Object* a, ::java::lang::Object* b) override;

    // Generated
    PersistentSet_PersistentSet_1(PersistentSet *PersistentSet_this);
    static ::java::lang::Class *class_();
    PersistentSet *PersistentSet_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class PersistentSet;
    friend class PersistentSet_Node;
    friend class PersistentSet_Path;
    friend class PersistentSet_Iterator;
};
