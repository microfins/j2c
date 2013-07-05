// Generated from /runtime/avian/PersistentSet.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>

struct default_init_tag;

class avian::PersistentSet_Iterator
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Iterator
{

public:
    typedef ::java::lang::Object super;

private:
    PersistentSet_Path* path {  };
protected:
    void ctor(PersistentSet_Path* path);
    void ctor(PersistentSet_Iterator* start);

public:
    bool hasNext() override;
    ::java::lang::Object* next() override;
    void remove() override;

    // Generated

private:
    PersistentSet_Iterator(PersistentSet *PersistentSet_this, PersistentSet_Path* path);
    PersistentSet_Iterator(PersistentSet *PersistentSet_this, PersistentSet_Iterator* start);
protected:
    PersistentSet_Iterator(PersistentSet *PersistentSet_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    PersistentSet *PersistentSet_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class PersistentSet;
    friend class PersistentSet_PersistentSet_1;
    friend class PersistentSet_Node;
    friend class PersistentSet_Path;
};
