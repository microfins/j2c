// Generated from /runtime/java/util/BitSet.java
#include <java/util/BitSet_MaskInfoIterator.hpp>

#include <java/lang/Math.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/BitSet_MaskInfo.hpp>
#include <java/util/BitSet.hpp>

java::util::BitSet_MaskInfoIterator::BitSet_MaskInfoIterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::BitSet_MaskInfoIterator::BitSet_MaskInfoIterator(int32_t fromIndex, int32_t toIndex) 
    : BitSet_MaskInfoIterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(fromIndex,toIndex);
}

void java::util::BitSet_MaskInfoIterator::ctor(int32_t fromIndex, int32_t toIndex)
{
    super::ctor();
    this->basePartition = BitSet::longPosition(fromIndex);
    this->numPartitionsToTraverse = BitSet::longPosition(toIndex - int32_t(1)) - basePartition + int32_t(1);
    this->currentPartitionOffset = 0;
    this->toIndex = toIndex;
    this->currentFirstIndex = fromIndex;
}

java::util::BitSet_MaskInfo* java::util::BitSet_MaskInfoIterator::next()
{
    auto currentToIndex = ::java::lang::Math::min(toIndex, (basePartition + currentPartitionOffset + int32_t(1)) * BitSet::BITS_PER_LONG);
    auto mask = BitSet::getTrueMask(currentFirstIndex, currentToIndex);
    auto info = new BitSet_MaskInfo(mask, basePartition + currentPartitionOffset);
    currentFirstIndex = currentToIndex;
    currentPartitionOffset++;
    return info;
}

bool java::util::BitSet_MaskInfoIterator::hasNext()
{
    return currentPartitionOffset < numPartitionsToTraverse;
}

void java::util::BitSet_MaskInfoIterator::remove()
{
    throw new ::java::lang::UnsupportedOperationException();
}

int32_t java::util::BitSet_MaskInfoIterator::getLastPartition()
{
    return basePartition + numPartitionsToTraverse - int32_t(1);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::BitSet_MaskInfoIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.BitSet.MaskInfoIterator", 33);
    return c;
}

java::lang::Class* java::util::BitSet_MaskInfoIterator::getClass0()
{
    return class_();
}

