// Generated from /runtime/java/util/TreeSet.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>

struct default_init_tag;

class java::util::TreeSet_MyIterator
    : public virtual ::java::lang::Object
    , public virtual Iterator
{

public:
    typedef ::java::lang::Object super;

private:
    ::avian::PersistentSet_Path* path {  };
    ::avian::PersistentSet_Path* nextPath {  };
    ::avian::Cell* cell {  };
    ::avian::Cell* prevCell {  };
    ::avian::Cell* prevPrevCell {  };
    bool canRemove {  };
protected:
    void ctor(::avian::PersistentSet_Path* path);
    void ctor(TreeSet_MyIterator* start);

public:
    bool hasNext() override;
    ::java::lang::Object* next() override;
    void remove() override;

    // Generated

private:
    TreeSet_MyIterator(TreeSet *TreeSet_this, ::avian::PersistentSet_Path* path);
    TreeSet_MyIterator(TreeSet *TreeSet_this, TreeSet_MyIterator* start);
protected:
    TreeSet_MyIterator(TreeSet *TreeSet_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    TreeSet *TreeSet_this;
    virtual ::java::lang::Class* getClass0();
    friend class TreeSet;
    friend class TreeSet_TreeSet_1;
    friend class TreeSet_TreeSet_2;
};
