// Generated from /runtime/java/util/LinkedList.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/AbstractSequentialList.hpp>

struct default_init_tag;

class java::util::LinkedList
    : public AbstractSequentialList
{

public:
    typedef AbstractSequentialList super;

private:
    LinkedList_Cell* front {  };
    LinkedList_Cell* rear {  };
    int32_t size_ {  };
protected:
    void ctor(Collection* c);
    void ctor();

private:
    LinkedList_Cell* find(int32_t index);
    static bool equal(::java::lang::Object* a, ::java::lang::Object* b);
    void addFirst(LinkedList_Cell* c);
    void addLast(LinkedList_Cell* c);
    LinkedList_Cell* find(::java::lang::Object* element);
    void remove(LinkedList_Cell* c);

public:
    int32_t size() override;
    bool contains(::java::lang::Object* element) override;
    int32_t indexOf(::java::lang::Object* element) override;
    int32_t lastIndexOf(::java::lang::Object* element) override;
    bool add(::java::lang::Object* element) override;
    bool addAll(Collection* collection) override;
    void add(int32_t index, ::java::lang::Object* element) override;
    virtual void addFirst(::java::lang::Object* element);
    virtual void addLast(::java::lang::Object* element);
    ::java::lang::Object* get(int32_t index) override;
    ::java::lang::Object* set(int32_t index, ::java::lang::Object* value) override;
    virtual ::java::lang::Object* getFirst();
    virtual ::java::lang::Object* getLast();
    ::java::lang::Object* remove(int32_t index) override;
    bool isEmpty() override;
    virtual ::java::lang::Object* removeFirst();
    virtual ::java::lang::Object* removeLast();
    bool remove(::java::lang::Object* element) override;
    void clear() override;
    Iterator* iterator() override;
    ListIterator* listIterator(int32_t index) override;
    ListIterator* listIterator() override;
    ::java::lang::String* toString() override;

    // Generated
    LinkedList(Collection* c);
    LinkedList();
protected:
    LinkedList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    bool addAll(int32_t startIndex, Collection* c);

private:
    virtual ::java::lang::Class* getClass0();
    friend class LinkedList_Cell;
    friend class LinkedList_MyIterator;
};
