// Generated from /runtime/java/util/Collections.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>

struct default_init_tag;

class java::util::Collections_ReverseComparator final
    : public virtual ::java::lang::Object
    , public Comparator
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    Comparator* cmp {  };
protected:
    void ctor(Comparator* cmp);

public:
    int32_t compare(::java::lang::Object* o1, ::java::lang::Object* o2) override;

    // Generated
    Collections_ReverseComparator(Comparator* cmp);
protected:
    Collections_ReverseComparator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Collections;
    friend class Collections_IteratorEnumeration;
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
};
