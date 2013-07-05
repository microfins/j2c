// Generated from /runtime/java/util/Collections.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>

struct default_init_tag;

class java::util::Collections_SynchronizedCollection
    : public virtual ::java::lang::Object
    , public virtual Collection
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::lang::Object* lock {  };
    Collection* collection {  };
protected:
    void ctor(::java::lang::Object* lock, Collection* collection);

public:
    int32_t size() override;
    bool isEmpty() override;
    bool contains(::java::lang::Object* e) override;
    bool add(::java::lang::Object* e) override;
    bool addAll(Collection* collection) override;
    bool remove(::java::lang::Object* e) override;
    ::java::lang::ObjectArray* toArray_() override;
    /* <T> */::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* array) override;
    void clear() override;
    Iterator* iterator() override;
    bool containsAll(Collection* c) override;
    bool removeAll(Collection* c) override;

    // Generated
    Collections_SynchronizedCollection(::java::lang::Object* lock, Collection* collection);
protected:
    Collections_SynchronizedCollection(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Collections;
    friend class Collections_IteratorEnumeration;
    friend class Collections_SynchronizedMap;
    friend class Collections_SynchronizedSet;
    friend class Collections_SynchronizedIterator;
    friend class Collections_ArrayListIterator;
    friend class Collections_UnmodifiableList;
    friend class Collections_UnmodifiableMap;
    friend class Collections_UnmodifiableSet;
    friend class Collections_KeyIterator;
    friend class Collections_ValueIterator;
    friend class Collections_ReverseComparator;
};
