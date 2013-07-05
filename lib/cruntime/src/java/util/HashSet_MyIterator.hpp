// Generated from /runtime/java/util/HashSet.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>

struct default_init_tag;

class java::util::HashSet_MyIterator
    : public virtual ::java::lang::Object
    , public virtual Iterator
{

public:
    typedef ::java::lang::Object super;

private:
    Iterator* it {  };
protected:
    void ctor(Iterator* it);

public:
    ::java::lang::Object* next() override;
    bool hasNext() override;
    void remove() override;

    // Generated
    HashSet_MyIterator(Iterator* it);
protected:
    HashSet_MyIterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class HashSet;
};
