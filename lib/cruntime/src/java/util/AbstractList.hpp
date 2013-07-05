// Generated from /runtime/java/util/AbstractList.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/AbstractCollection.hpp>
#include <java/util/List.hpp>

struct default_init_tag;

class java::util::AbstractList
    : public AbstractCollection
    , public virtual List
{

public:
    typedef AbstractCollection super;

public: /* protected */
    int32_t modCount {  };

public:
    bool add(::java::lang::Object* o) override;
    bool addAll(Collection* c) override;
    bool addAll(int32_t startIndex, Collection* c) override;
    Iterator* iterator() override;
    ListIterator* listIterator() override;
    int32_t indexOf(::java::lang::Object* o) override;

    // Generated
    AbstractList();
protected:
    AbstractList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void clear();
    virtual bool contains(::java::lang::Object* element);
    virtual bool containsAll(Collection* c);
    virtual bool remove(::java::lang::Object* element);
    virtual bool removeAll(Collection* c);
    virtual ::java::lang::ObjectArray* toArray_();
    virtual ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* array);
    bool isEmpty();
    virtual void add(int32_t index, ::java::lang::Object* element) = 0;
    virtual ListIterator* listIterator(int32_t index) = 0;
    virtual ::java::lang::Object* remove(int32_t index) = 0;

private:
    virtual ::java::lang::Class* getClass0();
};
