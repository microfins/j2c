// Generated from /runtime/java/util/TreeMap.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map_Entry.hpp>

struct default_init_tag;

class java::util::TreeMap_MyEntry
    : public virtual ::java::lang::Object
    , public virtual Map_Entry
{

public:
    typedef ::java::lang::Object super;
    ::java::lang::Object* key {  };
    ::java::lang::Object* value {  };
protected:
    void ctor(::java::lang::Object* key, ::java::lang::Object* value);

public:
    ::java::lang::Object* getKey() override;
    ::java::lang::Object* getValue() override;
    ::java::lang::Object* setValue(::java::lang::Object* value) override;

    // Generated
    TreeMap_MyEntry(::java::lang::Object* key, ::java::lang::Object* value);
protected:
    TreeMap_MyEntry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class TreeMap;
    friend class TreeMap_TreeMap_1;
    friend class TreeMap_TreeMap_2;
    friend class TreeMap_KeySet;
    friend class TreeMap_Values;
};
