// Generated from /runtime/java/util/Collections.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ListIterator.hpp>

struct default_init_tag;

class java::util::Collections_ArrayListIterator
    : public virtual ::java::lang::Object
    , public virtual ListIterator
{

public:
    typedef ::java::lang::Object super;

private:
    List* list {  };
    int32_t toRemove {  };
    int32_t index {  };
protected:
    void ctor(List* list);
    void ctor(List* list, int32_t index);

public:
    bool hasPrevious() override;
    ::java::lang::Object* previous() override;
    ::java::lang::Object* next() override;
    bool hasNext() override;
    void remove() override;

    // Generated
    Collections_ArrayListIterator(List* list);
    Collections_ArrayListIterator(List* list, int32_t index);
protected:
    Collections_ArrayListIterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class Collections;
    friend class Collections_IteratorEnumeration;
    friend class Collections_SynchronizedCollection;
    friend class Collections_SynchronizedMap;
    friend class Collections_SynchronizedSet;
    friend class Collections_SynchronizedIterator;
    friend class Collections_UnmodifiableList;
    friend class Collections_UnmodifiableMap;
    friend class Collections_UnmodifiableSet;
    friend class Collections_KeyIterator;
    friend class Collections_ValueIterator;
    friend class Collections_ReverseComparator;
};
