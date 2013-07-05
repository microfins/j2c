// Generated from /runtime/java/util/BitSet.java
#include <java/util/BitSet.hpp>

#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/System.hpp>
#include <java/util/BitSet_MaskInfo.hpp>
#include <java/util/BitSet_MaskInfoIterator.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::BitSet::BitSet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::BitSet::BitSet(int32_t bitLength) 
    : BitSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(bitLength);
}

java::util::BitSet::BitSet() 
    : BitSet(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t java::util::BitSet::BITS_PER_LONG;

constexpr int32_t java::util::BitSet::BITS_PER_LONG_SHIFT;

constexpr int64_t java::util::BitSet::MASK;

int32_t java::util::BitSet::longPosition(int32_t index)
{
    clinit();
    return index >> BITS_PER_LONG_SHIFT;
}

int64_t java::util::BitSet::bitPosition(int32_t index)
{
    clinit();
    return int64_t(1LL) << (index % BITS_PER_LONG);
}

int64_t java::util::BitSet::getTrueMask(int32_t fromIndex, int32_t toIndex)
{
    clinit();
    auto currentRange = toIndex - fromIndex;
    return (static_cast<int64_t>(static_cast<uint64_t>(MASK) >> (BITS_PER_LONG - currentRange))) << (fromIndex % BITS_PER_LONG);
}

void java::util::BitSet::ctor(int32_t bitLength)
{
    super::ctor();
    if(bitLength % BITS_PER_LONG == 0) {
        enlarge(longPosition(bitLength));
    } else {
        enlarge(longPosition(bitLength) + int32_t(1));
    }
}

void java::util::BitSet::ctor()
{
    super::ctor();
    enlarge(1);
}

void java::util::BitSet::and_(BitSet* otherBits)
{
    auto min = ::java::lang::Math::min(npc(bits)->length, npc(npc(otherBits)->bits)->length);
    for (auto i = int32_t(0); i < min; i++) {
        (*bits)[i] &= (*npc(otherBits)->bits)[i];
    }
    for (auto i = min; i < npc(bits)->length; i++) {
        (*bits)[i] = 0;
    }
}

void java::util::BitSet::andNot(BitSet* otherBits)
{
    auto max = ::java::lang::Math::max(npc(bits)->length, npc(npc(otherBits)->bits)->length);
    enlarge(max);
    auto min = ::java::lang::Math::min(npc(bits)->length, npc(npc(otherBits)->bits)->length);
    for (auto i = int32_t(0); i < min; i++) {
        (*bits)[i] &= ~(*npc(otherBits)->bits)[i];
    }
}

void java::util::BitSet::or_(BitSet* otherBits)
{
    auto max = ::java::lang::Math::max(npc(bits)->length, npc(npc(otherBits)->bits)->length);
    enlarge(max);
    auto min = ::java::lang::Math::min(npc(bits)->length, npc(npc(otherBits)->bits)->length);
    for (auto i = int32_t(0); i < min; i++) {
        (*bits)[i] |= (*npc(otherBits)->bits)[i];
    }
}

void java::util::BitSet::xor_(BitSet* otherBits)
{
    auto max = ::java::lang::Math::max(npc(bits)->length, npc(npc(otherBits)->bits)->length);
    enlarge(max);
    auto min = ::java::lang::Math::min(npc(bits)->length, npc(npc(otherBits)->bits)->length);
    for (auto i = int32_t(0); i < min; i++) {
        (*bits)[i] ^= (*npc(otherBits)->bits)[i];
    }
}

void java::util::BitSet::enlarge(int32_t newPartition)
{
    if(bits == nullptr || npc(bits)->length < (newPartition + int32_t(1))) {
        auto newBits = new ::int64_tArray(newPartition + int32_t(1));
        if(bits != nullptr) {
            ::java::lang::System::arraycopy(bits, 0, newBits, 0, npc(bits)->length);
        }
        bits = newBits;
    }
}

bool java::util::BitSet::get(int32_t index)
{
    auto pos = longPosition(index);
    if(pos < npc(bits)->length) {
        return ((*bits)[pos] & bitPosition(index)) != 0;
    }
    return false;
}

void java::util::BitSet::flip(int32_t index)
{
    flip(index, index + int32_t(1));
}

void java::util::BitSet::flip(int32_t fromIndex, int32_t toIndex)
{
    if(fromIndex > toIndex || fromIndex < 0 || toIndex < 0) {
        throw new ::java::lang::IndexOutOfBoundsException();
    } else if(fromIndex != toIndex) {
        auto iter = new BitSet_MaskInfoIterator(fromIndex, toIndex);
        enlarge(npc(iter)->getLastPartition());
        while (npc(iter)->hasNext()) {
            auto info = npc(iter)->next();
            (*bits)[npc(info)->partitionIndex] ^= npc(info)->mask;
        }
    }
}

void java::util::BitSet::set(int32_t index)
{
    auto pos = longPosition(index);
    enlarge(pos);
    (*bits)[pos] |= bitPosition(index);
}

void java::util::BitSet::set(int32_t start, int32_t end)
{
    auto iter = new BitSet_MaskInfoIterator(start, end);
    enlarge(npc(iter)->getLastPartition());
    while (npc(iter)->hasNext()) {
        auto info = npc(iter)->next();
        (*bits)[npc(info)->partitionIndex] |= npc(info)->mask;
    }
}

void java::util::BitSet::clear(int32_t index)
{
    auto pos = longPosition(index);
    if(pos < npc(bits)->length) {
        (*bits)[pos] &= (MASK ^ bitPosition(index));
    }
}

void java::util::BitSet::clear(int32_t start, int32_t end)
{
    auto iter = new BitSet_MaskInfoIterator(start, end);
    while (npc(iter)->hasNext()) {
        auto info = npc(iter)->next();
        (*bits)[npc(info)->partitionIndex] &= (MASK ^ npc(info)->mask);
    }
}

bool java::util::BitSet::isEmpty()
{
    for (auto i = int32_t(0); i < npc(bits)->length; i++) {
        if((*bits)[i] != 0) {
            return false;
        }
    }
    return true;
}

bool java::util::BitSet::intersects(BitSet* otherBits)
{
    auto max = ::java::lang::Math::max(npc(bits)->length, npc(npc(otherBits)->bits)->length);
    for (auto i = int32_t(0); i < max; i++) {
        if(((*bits)[i] & (*npc(otherBits)->bits)[i]) != 0) {
            return true;
        }
    }
    return false;
}

int32_t java::util::BitSet::length()
{
    return npc(bits)->length << BITS_PER_LONG_SHIFT;
}

int32_t java::util::BitSet::nextSetBit(int32_t fromIndex)
{
    return nextBit(fromIndex, false);
}

int32_t java::util::BitSet::nextBit(int32_t fromIndex, bool bitClear)
{
    auto pos = longPosition(fromIndex);
    if(pos >= npc(bits)->length) {
        return -int32_t(1);
    }
    auto current = fromIndex;
    do {
        auto currValue = (*bits)[pos];
        if(currValue == 0) {
            pos++;
            current = pos << BITS_PER_LONG_SHIFT;
        } else {
            do {
                auto bitPos = bitPosition(current);
                if(((currValue & bitPos) != 0) ^ bitClear) {
                    return current;
                } else {
                    current++;
                }
            } while (current % BITS_PER_LONG != 0);
        }
        pos++;
    } while (pos < npc(bits)->length);
    return -int32_t(1);
}

int32_t java::util::BitSet::nextClearBit(int32_t fromIndex)
{
    return nextBit(fromIndex, true);
}

int32_t java::util::BitSet::cardinality()
{
    auto numSetBits = int32_t(0);
    for (auto i = nextSetBit(0); i >= 0; i = nextSetBit(i + int32_t(1))) {
        ++numSetBits;
    }
    return numSetBits;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::BitSet::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.BitSet", 16);
    return c;
}

java::lang::Class* java::util::BitSet::getClass0()
{
    return class_();
}

