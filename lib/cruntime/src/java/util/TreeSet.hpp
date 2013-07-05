// Generated from /runtime/java/util/TreeSet.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/AbstractSet.hpp>
#include <java/util/Collection.hpp>

struct default_init_tag;

class java::util::TreeSet
    : public AbstractSet
    , public virtual Collection
{

public:
    typedef AbstractSet super;

private:
    ::avian::PersistentSet* set {  };
protected:
    void ctor(Comparator* comparator);
    void ctor();
    void ctor(Collection* collection);

public:
    virtual ::java::lang::Object* first();
    virtual ::java::lang::Object* last();
    Iterator* iterator() override;
    ::java::lang::String* toString() override;
    bool add(::java::lang::Object* value) override;

public: /* package */
    virtual ::java::lang::Object* addAndReplace(::java::lang::Object* value);
    virtual ::java::lang::Object* find(::java::lang::Object* value);
    virtual ::java::lang::Object* removeAndReturn(::java::lang::Object* value);

private:
    ::avian::Cell* removeCell(::java::lang::Object* value);

public:
    bool remove(::java::lang::Object* value) override;
    int32_t size() override;
    bool isEmpty() override;
    bool contains(::java::lang::Object* value) override;
    void clear() override;

    // Generated
    TreeSet(Comparator* comparator);
    TreeSet();
    TreeSet(Collection* collection);
protected:
    TreeSet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool addAll(Collection* collection);
    virtual bool containsAll(Collection* c);
    virtual bool removeAll(Collection* c);
    virtual ::java::lang::ObjectArray* toArray_();
    virtual ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* array);

private:
    virtual ::java::lang::Class* getClass0();
    friend class TreeSet_TreeSet_1;
    friend class TreeSet_TreeSet_2;
    friend class TreeSet_MyIterator;
};
