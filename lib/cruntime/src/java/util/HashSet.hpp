// Generated from /runtime/java/util/HashSet.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/util/AbstractSet.hpp>
#include <java/util/Set.hpp>

struct default_init_tag;

class java::util::HashSet
    : public AbstractSet
    , public virtual Set
{

public:
    typedef AbstractSet super;

private:
    static ::java::lang::Object* Value_;
    HashMap* map {  };
protected:
    void ctor(Collection* c);
    void ctor(int32_t capacity);
    void ctor();

public:
    int32_t size() override;
    bool isEmpty() override;
    bool contains(::java::lang::Object* element) override;
    bool add(::java::lang::Object* element) override;
    bool addAll(Collection* collection) override;
    bool remove(::java::lang::Object* element) override;
    void clear() override;
    Iterator* iterator() override;
    ::java::lang::String* toString() override;

    // Generated
    HashSet(Collection* c);
    HashSet(int32_t capacity);
    HashSet();
protected:
    HashSet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual bool containsAll(Collection* c);
    virtual bool removeAll(Collection* c);
    virtual ::java::lang::ObjectArray* toArray_();
    virtual ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* array);

private:
    static ::java::lang::Object*& Value();
    virtual ::java::lang::Class* getClass0();
    friend class HashSet_MyIterator;
};
