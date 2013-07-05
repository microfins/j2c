// Generated from /runtime/java/util/HashMap.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Map_Entry.hpp>

struct default_init_tag;

class java::util::HashMap_MyIterator
    : public virtual ::java::lang::Object
    , public virtual Iterator
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t currentIndex {  };
    int32_t nextIndex {  };
    HashMap_Cell* previousCell {  };
    HashMap_Cell* currentCell {  };
    HashMap_Cell* nextCell {  };
protected:
    void ctor();

public:
    Map_Entry* next() override;
    bool hasNext() override;
    void remove() override;

    // Generated
    HashMap_MyIterator(HashMap *HashMap_this);
protected:
    HashMap_MyIterator(HashMap *HashMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    HashMap *HashMap_this;
    virtual ::java::lang::Class* getClass0();
    friend class HashMap;
    friend class HashMap_Cell;
    friend class HashMap_Helper;
    friend class HashMap_MyCell;
    friend class HashMap_MyHelper;
    friend class HashMap_EntrySet;
    friend class HashMap_KeySet;
    friend class HashMap_Values;
};
