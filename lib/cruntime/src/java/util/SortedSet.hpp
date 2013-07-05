// Generated from /runtime/java/util/SortedSet.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/Collection.hpp>
#include <java/lang/Iterable.hpp>
#include <java/util/Set.hpp>

struct java::util::SortedSet
    : public virtual Collection
    , public virtual ::java::lang::Iterable
    , public virtual Set
{
    virtual Comparator* comparator() = 0;
    virtual ::java::lang::Object* first() = 0;
    virtual SortedSet* headSet(::java::lang::Object* toElement) = 0;
    virtual ::java::lang::Object* last() = 0;
    virtual SortedSet* subSet(::java::lang::Object* fromElement, ::java::lang::Object* toElement) = 0;
    virtual SortedSet* tailSet(::java::lang::Object* fromElement) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
