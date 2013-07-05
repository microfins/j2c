// Generated from /runtime/java/util/AbstractSequentialList.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/AbstractList.hpp>
#include <java/util/List.hpp>

struct default_init_tag;

class java::util::AbstractSequentialList
    : public AbstractList
    , public virtual List
{

public:
    typedef AbstractList super;

    // Generated
    AbstractSequentialList();
protected:
    AbstractSequentialList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual Iterator* iterator();
    virtual bool addAll(Collection* collection);
    virtual void clear();
    virtual bool contains(::java::lang::Object* element);
    virtual bool containsAll(Collection* c);
    virtual bool remove(::java::lang::Object* element);
    virtual bool removeAll(Collection* c);
    virtual ::java::lang::ObjectArray* toArray_();
    virtual ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* array);
    bool add(::java::lang::Object* element);
    virtual bool addAll(int32_t startIndex, Collection* c);
    virtual int32_t indexOf(::java::lang::Object* value);
    bool isEmpty();
    virtual ListIterator* listIterator();
    virtual void add(int32_t index, ::java::lang::Object* element) = 0;
    virtual ListIterator* listIterator(int32_t index) = 0;
    virtual ::java::lang::Object* remove(int32_t index) = 0;

private:
    virtual ::java::lang::Class* getClass0();
};
