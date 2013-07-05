// Generated from /runtime/java/util/Collections.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Enumeration.hpp>

struct default_init_tag;

class java::util::Collections_IteratorEnumeration
    : public virtual ::java::lang::Object
    , public virtual Enumeration
{

public:
    typedef ::java::lang::Object super;

private:
    Iterator* it {  };
protected:
    void ctor(Iterator* it);

public:
    ::java::lang::Object* nextElement() override;
    bool hasMoreElements() override;

    // Generated
    Collections_IteratorEnumeration(Iterator* it);
protected:
    Collections_IteratorEnumeration(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Collections;
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
