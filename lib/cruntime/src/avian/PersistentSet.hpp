// Generated from /runtime/avian/PersistentSet.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Iterable.hpp>

struct default_init_tag;

class avian::PersistentSet
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Iterable
{

public:
    typedef ::java::lang::Object super;

private:
    static PersistentSet_Node* NullNode_;
    PersistentSet_Node* root {  };
    ::java::util::Comparator* comparator_ {  };
    int32_t size_ {  };
protected:
    void ctor();
    void ctor(::java::util::Comparator* comparator);
    void ctor(PersistentSet_Node* root, ::java::util::Comparator* comparator, int32_t size);

public:
    ::java::lang::String* toString() override;
    virtual ::java::util::Comparator* comparator();
    virtual PersistentSet* add(::java::lang::Object* value);
    virtual int32_t size();
    virtual PersistentSet* add(::java::lang::Object* value, bool replaceExisting);

private:
    PersistentSet* add(PersistentSet_Path* p);
    static /* <T> */PersistentSet_Node* leftRotate(PersistentSet_Node* n);
    static /* <T> */PersistentSet_Node* rightRotate(PersistentSet_Node* n);

public:
    virtual PersistentSet* remove(::java::lang::Object* value);

private:
    PersistentSet* remove(PersistentSet_Path* p);
    static /* <T> */Cell* minimum(PersistentSet_Node* n, Cell* ancestors);
    static /* <T> */Cell* successor(PersistentSet_Node* n, Cell* ancestors);

public:
    virtual PersistentSet_Path* find(::java::lang::Object* value);
    virtual PersistentSet_Path* first();
    virtual PersistentSet_Path* last();
    ::java::util::Iterator* iterator() override;

private:
    PersistentSet_Path* successor(PersistentSet_Path* p);

    // Generated

public:
    PersistentSet();
    PersistentSet(::java::util::Comparator* comparator);

private:
    PersistentSet(PersistentSet_Node* root, ::java::util::Comparator* comparator, int32_t size);
protected:
    PersistentSet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static PersistentSet_Node*& NullNode();
    virtual ::java::lang::Class* getClass0();
    friend class PersistentSet_PersistentSet_1;
    friend class PersistentSet_Node;
    friend class PersistentSet_Path;
    friend class PersistentSet_Iterator;
};
