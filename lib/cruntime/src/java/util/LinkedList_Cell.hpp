// Generated from /runtime/java/util/LinkedList.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::LinkedList_Cell
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    ::java::lang::Object* value {  };
    LinkedList_Cell* prev {  };
    LinkedList_Cell* next {  };
protected:
    void ctor(::java::lang::Object* value, LinkedList_Cell* prev, LinkedList_Cell* next);

    // Generated

public:
    LinkedList_Cell(::java::lang::Object* value, LinkedList_Cell* prev, LinkedList_Cell* next);
protected:
    LinkedList_Cell(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LinkedList;
    friend class LinkedList_MyIterator;
};
