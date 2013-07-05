// Generated from /runtime/java/util/Collections.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/List.hpp>

struct default_init_tag;

class java::util::Collections_UnmodifiableList
    : public virtual ::java::lang::Object
    , public virtual List
{

public:
    typedef ::java::lang::Object super;

private:
    List* inner {  };
protected:
    void ctor(List* l);

public:
    ::java::lang::Object* get(int32_t index) override;
    ::java::lang::Object* set(int32_t index, ::java::lang::Object* value) override;
    ::java::lang::Object* remove(int32_t index) override;
    bool remove(::java::lang::Object* o) override;
    bool add(::java::lang::Object* element) override;
    void add(int32_t index, ::java::lang::Object* element) override;
    Iterator* iterator() override;
    int32_t indexOf(::java::lang::Object* value) override;
    int32_t lastIndexOf(::java::lang::Object* value) override;
    bool isEmpty() override;
    ListIterator* listIterator(int32_t index) override;
    ListIterator* listIterator() override;
    int32_t size() override;
    bool contains(::java::lang::Object* element) override;
    bool addAll(Collection* collection) override;
    ::java::lang::ObjectArray* toArray_() override;
    /* <S> */::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* array) override;
    void clear() override;
    bool removeAll(Collection* c) override;
    bool addAll(int32_t startIndex, Collection* c) override;
    bool containsAll(Collection* c) override;

    // Generated

public: /* package */
    Collections_UnmodifiableList(List* l);
protected:
    Collections_UnmodifiableList(const ::default_init_tag&);


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
    friend class Collections_UnmodifiableMap;
    friend class Collections_UnmodifiableSet;
    friend class Collections_KeyIterator;
    friend class Collections_ValueIterator;
    friend class Collections_ReverseComparator;
};
