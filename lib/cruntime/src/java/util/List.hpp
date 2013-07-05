// Generated from /runtime/java/util/List.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/Collection.hpp>

struct java::util::List
    : public virtual Collection
{
    virtual ::java::lang::Object* get(int32_t index) = 0;
    virtual ::java::lang::Object* set(int32_t index, ::java::lang::Object* value) = 0;
    virtual ::java::lang::Object* remove(int32_t index) = 0;
    /*bool add(::java::lang::Object* element); (already declared) */
    virtual void add(int32_t index, ::java::lang::Object* element) = 0;
    virtual bool addAll(int32_t startIndex, Collection* c) = 0;
    virtual int32_t indexOf(::java::lang::Object* value) = 0;
    virtual int32_t lastIndexOf(::java::lang::Object* value) = 0;
    /*bool isEmpty(); (already declared) */
    virtual ListIterator* listIterator(int32_t index) = 0;
    virtual ListIterator* listIterator() = 0;

    // Generated
    static ::java::lang::Class *class_();
    virtual bool add(::java::lang::Object* element) = 0;
    virtual bool addAll(Collection* collection) = 0;
    virtual bool remove(::java::lang::Object* element) = 0;
};
