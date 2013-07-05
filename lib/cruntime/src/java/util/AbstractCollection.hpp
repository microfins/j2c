// Generated from /runtime/java/util/AbstractCollection.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>

struct default_init_tag;

class java::util::AbstractCollection
    : public virtual ::java::lang::Object
    , public virtual Collection
{

public:
    typedef ::java::lang::Object super;
    bool add(::java::lang::Object* element) override;
    bool addAll(Collection* collection) override;
    void clear() override;
    bool contains(::java::lang::Object* element) override;
    bool containsAll(Collection* c) override;
    bool isEmpty() override;
    bool remove(::java::lang::Object* element) override;
    bool removeAll(Collection* c) override;
    /*int32_t size(); (already declared) */
    ::java::lang::ObjectArray* toArray_() override;
    /* <S> */::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* array) override;
    /*Iterator* iterator(); (already declared) */
    ::java::lang::String* toString() override;

    // Generated
    AbstractCollection();
protected:
    AbstractCollection(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
