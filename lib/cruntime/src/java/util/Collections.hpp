// Generated from /runtime/java/util/Collections.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::Collections
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static void shuffle(List* list, Random* random);
    static void shuffle(List* list);

public: /* package */
    static /* <T> */::java::lang::ObjectArray* toArray_(Collection* collection, ::java::lang::ObjectArray* array);

private:
    static List* EMPTY_LIST_;

public:
    static /* <E> */List* emptyList();
    static /* <K, V> */Map* emptyMap();
    static /* <T> */Set* emptySet();

public: /* package */
    static ::java::lang::String* toString(Collection* c);
    static ::java::lang::String* toString(Map* m);

public:
    static /* <T> */Enumeration* enumeration(Collection* c);
    static /* <T> */Comparator* reverseOrder(Comparator* cmp);
    static /* <K, V> */Map* synchronizedMap(Map* map);
    static /* <T> */List* unmodifiableList(List* list);
    static /* <K, V> */Map* unmodifiableMap(Map* m);
    static /* <T> */Set* unmodifiableSet(Set* hs);

    // Generated

private:
    Collections();
protected:
    Collections(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual ::java::lang::String* toString();
    static List*& EMPTY_LIST();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Collections_IteratorEnumeration;
    friend class Collections_SynchronizedCollection;
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
