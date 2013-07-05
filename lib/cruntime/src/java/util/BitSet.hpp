// Generated from /runtime/java/util/BitSet.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/util/fwd-runtime.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class java::util::BitSet
    : public virtual ::java::lang::Object
    , public virtual ::java::io::Serializable
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    static constexpr int32_t BITS_PER_LONG { int32_t(64) };
    static constexpr int32_t BITS_PER_LONG_SHIFT { int32_t(6) };
    static constexpr int64_t MASK { int64_t(-1LL) };

private:
    ::int64_tArray* bits {  };
    static int32_t longPosition(int32_t index);
    static int64_t bitPosition(int32_t index);
    static int64_t getTrueMask(int32_t fromIndex, int32_t toIndex);
protected:
    void ctor(int32_t bitLength);
    void ctor();

public:
    virtual void and_(BitSet* otherBits);
    virtual void andNot(BitSet* otherBits);
    virtual void or_(BitSet* otherBits);
    virtual void xor_(BitSet* otherBits);

private:
    void enlarge(int32_t newPartition);

public:
    virtual bool get(int32_t index);
    virtual void flip(int32_t index);
    virtual void flip(int32_t fromIndex, int32_t toIndex);
    virtual void set(int32_t index);
    virtual void set(int32_t start, int32_t end);
    virtual void clear(int32_t index);
    virtual void clear(int32_t start, int32_t end);
    virtual bool isEmpty();
    virtual bool intersects(BitSet* otherBits);
    virtual int32_t length();
    virtual int32_t nextSetBit(int32_t fromIndex);

private:
    int32_t nextBit(int32_t fromIndex, bool bitClear);

public:
    virtual int32_t nextClearBit(int32_t fromIndex);
    virtual int32_t cardinality();

    // Generated
    BitSet(int32_t bitLength);
    BitSet();
protected:
    BitSet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class BitSet_MaskInfoIterator;
    friend class BitSet_MaskInfo;
};
