// Generated from /runtime/java/util/Collections.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/Collections_SynchronizedCollection.hpp>
#include <java/util/Set.hpp>

struct default_init_tag;

class java::util::Collections_SynchronizedSet
    : public Collections_SynchronizedCollection
    , public virtual Set
{

public:
    typedef Collections_SynchronizedCollection super;
protected:
    void ctor(::java::lang::Object* lock, Set* set);

    // Generated

public:
    Collections_SynchronizedSet(::java::lang::Object* lock, Set* set);
protected:
    Collections_SynchronizedSet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual Iterator* iterator();
    virtual bool add(::java::lang::Object* element);
    virtual bool addAll(Collection* collection);
    virtual void clear();
    virtual bool contains(::java::lang::Object* element);
    virtual bool containsAll(Collection* c);
    virtual bool isEmpty();
    virtual bool remove(::java::lang::Object* element);
    virtual bool removeAll(Collection* c);
    virtual int32_t size();
    virtual ::java::lang::ObjectArray* toArray_();
    virtual ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* array);

private:
    virtual ::java::lang::Class* getClass0();
    friend class Collections;
    friend class Collections_IteratorEnumeration;
    friend class Collections_SynchronizedCollection;
    friend class Collections_SynchronizedMap;
    friend class Collections_SynchronizedIterator;
    friend class Collections_ArrayListIterator;
    friend class Collections_UnmodifiableList;
    friend class Collections_UnmodifiableMap;
    friend class Collections_UnmodifiableSet;
    friend class Collections_KeyIterator;
    friend class Collections_ValueIterator;
    friend class Collections_ReverseComparator;
};
