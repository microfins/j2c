// Generated from /runtime/java/util/Collections.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Set.hpp>

struct default_init_tag;

class java::util::Collections_UnmodifiableSet
    : public virtual ::java::lang::Object
    , public virtual Set
{

public:
    typedef ::java::lang::Object super;

private:
    Set* inner {  };
protected:
    void ctor(Set* inner);

public:
    bool add(::java::lang::Object* element) override;
    bool addAll(Collection* collection) override;
    void clear() override;
    bool contains(::java::lang::Object* element) override;
    bool isEmpty() override;
    Iterator* iterator() override;
    bool remove(::java::lang::Object* element) override;
    int32_t size() override;
    ::java::lang::ObjectArray* toArray_() override;
    /* <S> */::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* array) override;
    bool containsAll(Collection* c) override;
    bool removeAll(Collection* c) override;

    // Generated

public: /* package */
    Collections_UnmodifiableSet(Set* inner);
protected:
    Collections_UnmodifiableSet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Collections;
    friend class Collections_IteratorEnumeration;
    friend class Collections_SynchronizedCollection;
    friend class Collections_SynchronizedMap;
    friend class Collections_SynchronizedSet;
    friend class Collections_SynchronizedIterator;
    friend class Collections_ArrayListIterator;
    friend class Collections_UnmodifiableList;
    friend class Collections_UnmodifiableMap;
    friend class Collections_KeyIterator;
    friend class Collections_ValueIterator;
    friend class Collections_ReverseComparator;
};
