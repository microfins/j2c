// Generated from /runtime/java/util/Collection.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Iterable.hpp>

struct java::util::Collection
    : public virtual ::java::lang::Iterable
{
    virtual int32_t size() = 0;
    virtual bool isEmpty() = 0;
    virtual bool contains(::java::lang::Object* element) = 0;
    virtual bool containsAll(Collection* c) = 0;
    virtual bool add(::java::lang::Object* element) = 0;
    virtual bool addAll(Collection* collection) = 0;
    virtual bool remove(::java::lang::Object* element) = 0;
    virtual bool removeAll(Collection* c) = 0;
    virtual ::java::lang::ObjectArray* toArray_() = 0;
    virtual /* <S> */::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* array) = 0;
    virtual void clear() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
