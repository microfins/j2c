// Generated from /runtime/java/util/BitSet.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/BitSet_MaskInfo.hpp>

struct default_init_tag;

class java::util::BitSet_MaskInfoIterator
    : public virtual ::java::lang::Object
    , public virtual Iterator
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t basePartition {  };
    int32_t numPartitionsToTraverse {  };
    int32_t currentPartitionOffset {  };
    int32_t toIndex {  };
    int32_t currentFirstIndex {  };
protected:
    void ctor(int32_t fromIndex, int32_t toIndex);

public:
    BitSet_MaskInfo* next() override;
    bool hasNext() override;
    void remove() override;
    virtual int32_t getLastPartition();

    // Generated
    BitSet_MaskInfoIterator(int32_t fromIndex, int32_t toIndex);
protected:
    BitSet_MaskInfoIterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class BitSet;
    friend class BitSet_MaskInfo;
};
