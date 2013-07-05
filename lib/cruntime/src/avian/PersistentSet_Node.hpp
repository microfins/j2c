// Generated from /runtime/avian/PersistentSet.java

#pragma once

#include <fwd-runtime.hpp>
#include <avian/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class avian::PersistentSet_Node
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    ::java::lang::Object* value {  };
    PersistentSet_Node* left {  };
    PersistentSet_Node* right {  };
    bool red {  };
protected:
    void ctor(PersistentSet_Node* basis);

    // Generated

public:
    PersistentSet_Node(PersistentSet_Node* basis);
protected:
    PersistentSet_Node(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PersistentSet;
    friend class PersistentSet_PersistentSet_1;
    friend class PersistentSet_Path;
    friend class PersistentSet_Iterator;
};
