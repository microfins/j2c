// Generated from /runtime/java/util/BitSet.java
#include <java/util/BitSet_MaskInfo.hpp>

java::util::BitSet_MaskInfo::BitSet_MaskInfo(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::BitSet_MaskInfo::BitSet_MaskInfo(int64_t mask, int32_t partitionIndex) 
    : BitSet_MaskInfo(*static_cast< ::default_init_tag* >(0))
{
    ctor(mask,partitionIndex);
}

void java::util::BitSet_MaskInfo::ctor(int64_t mask, int32_t partitionIndex)
{
    super::ctor();
    this->mask = mask;
    this->partitionIndex = partitionIndex;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::BitSet_MaskInfo::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.BitSet.MaskInfo", 25);
    return c;
}

java::lang::Class* java::util::BitSet_MaskInfo::getClass0()
{
    return class_();
}

