// Generated from /runtime/java/util/BitSet.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::BitSet_MaskInfo
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    int64_t mask {  };
    int32_t partitionIndex {  };
protected:
    void ctor(int64_t mask, int32_t partitionIndex);

    // Generated

public:
    BitSet_MaskInfo(int64_t mask, int32_t partitionIndex);
protected:
    BitSet_MaskInfo(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class BitSet;
    friend class BitSet_MaskInfoIterator;
};
