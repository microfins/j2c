// Generated from /runtime/avian/PersistentSet.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class avian::PersistentSet_Path
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    bool fresh_ {  };
    PersistentSet_Node* node {  };
    PersistentSet* root_ {  };
    Cell* ancestors {  };
protected:
    void ctor(bool fresh, PersistentSet_Node* node, PersistentSet* root, Cell* ancestors);

public:
    virtual ::java::lang::Object* value();
    virtual bool fresh();
    virtual PersistentSet* root();
    virtual PersistentSet_Path* successor();
    virtual PersistentSet* remove();
    virtual PersistentSet* add();
    virtual PersistentSet* replaceWith(::java::lang::Object* value);

    // Generated
    PersistentSet_Path(bool fresh, PersistentSet_Node* node, PersistentSet* root, Cell* ancestors);
protected:
    PersistentSet_Path(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PersistentSet;
    friend class PersistentSet_PersistentSet_1;
    friend class PersistentSet_Node;
    friend class PersistentSet_Iterator;
};
