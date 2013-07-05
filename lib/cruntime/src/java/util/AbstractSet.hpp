// Generated from /runtime/java/util/AbstractSet.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/AbstractCollection.hpp>
#include <java/util/Set.hpp>

struct default_init_tag;

class java::util::AbstractSet
    : public AbstractCollection
    , public virtual Set
{

public:
    typedef AbstractCollection super;

    // Generated
    AbstractSet();
protected:
    AbstractSet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool add(::java::lang::Object* element);
    virtual bool addAll(Collection* collection);
    virtual void clear();
    virtual bool contains(::java::lang::Object* element);
    virtual bool containsAll(Collection* c);
    virtual bool isEmpty();
    virtual bool remove(::java::lang::Object* element);
    virtual bool removeAll(Collection* c);
    virtual ::java::lang::ObjectArray* toArray_();
    virtual ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* array);

private:
    virtual ::java::lang::Class* getClass0();
};
