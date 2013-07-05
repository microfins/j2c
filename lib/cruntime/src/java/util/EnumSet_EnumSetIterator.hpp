// Generated from /runtime/java/util/EnumSet.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <java/lang/Enum.hpp>

struct default_init_tag;

class java::util::EnumSet_EnumSetIterator
    : public virtual ::java::lang::Object
    , public virtual Iterator
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t currentIndex {  };
    bool removeAllowed {  };

public:
    ::java::lang::Enum* next() override;
    bool hasNext() override;
    void remove() override;

private:
    int32_t nextIndex();

    // Generated

public:
    EnumSet_EnumSetIterator(EnumSet *EnumSet_this);
protected:
    void ctor();
    EnumSet_EnumSetIterator(EnumSet *EnumSet_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    EnumSet *EnumSet_this;
    virtual ::java::lang::Class* getClass0();
    friend class EnumSet;
};
