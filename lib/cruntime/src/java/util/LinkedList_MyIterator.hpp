// Generated from /runtime/java/util/LinkedList.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ListIterator.hpp>

struct default_init_tag;

class java::util::LinkedList_MyIterator
    : public virtual ::java::lang::Object
    , public virtual ListIterator
{

public:
    typedef ::java::lang::Object super;

private:
    LinkedList_Cell* toRemove {  };
    LinkedList_Cell* current {  };

public:
    ::java::lang::Object* previous() override;
    ::java::lang::Object* next() override;
    bool hasNext() override;
    bool hasPrevious() override;
    void remove() override;

    // Generated
    LinkedList_MyIterator(LinkedList *LinkedList_this);
protected:
    LinkedList_MyIterator(LinkedList *LinkedList_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    LinkedList *LinkedList_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class LinkedList;
    friend class LinkedList_Cell;
};
