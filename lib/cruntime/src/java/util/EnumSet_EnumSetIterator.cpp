// Generated from /runtime/java/util/EnumSet.java
#include <java/util/EnumSet_EnumSetIterator.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/util/BitSet.hpp>
#include <java/util/EnumSet.hpp>
#include <java/util/NoSuchElementException.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray > EnumArray;
    } // lang
} // java

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::EnumSet_EnumSetIterator::EnumSet_EnumSetIterator(EnumSet *EnumSet_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , EnumSet_this(EnumSet_this)
{
    clinit();
}

java::util::EnumSet_EnumSetIterator::EnumSet_EnumSetIterator(EnumSet *EnumSet_this)
    : EnumSet_EnumSetIterator(EnumSet_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::util::EnumSet_EnumSetIterator::ctor()
{
    super::ctor();
    init();
}

void java::util::EnumSet_EnumSetIterator::init()
{
    currentIndex = int32_t(0);
    removeAllowed = false;
}

java::lang::Enum* java::util::EnumSet_EnumSetIterator::next()
{
    if(!hasNext()) {
        throw new NoSuchElementException(u"EnumSet has no more elements"_j);
    }
    auto indexOfNextValue = nextIndex();
    auto element = (*java_cast< ::java::lang::EnumArray* >(npc(EnumSet_this->elementType)->getEnumConstants()))[indexOfNextValue];
    currentIndex = indexOfNextValue + int32_t(1);
    removeAllowed = true;
    return element;
}

bool java::util::EnumSet_EnumSetIterator::hasNext()
{
    auto indexOfNextValue = nextIndex();
    if(indexOfNextValue >= 0) {
        return true;
    } else {
        return false;
    }
}

void java::util::EnumSet_EnumSetIterator::remove()
{
    if(!removeAllowed) {
        throw new ::java::lang::IllegalStateException(u"Cannot remove from this iterator in this state"_j);
    }
    npc(EnumSet_this->bitset)->clear(currentIndex - int32_t(1));
    removeAllowed = false;
}

int32_t java::util::EnumSet_EnumSetIterator::nextIndex()
{
    return npc(EnumSet_this->bitset)->nextSetBit(currentIndex);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::EnumSet_EnumSetIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.EnumSet.EnumSetIterator", 33);
    return c;
}

java::lang::Class* java::util::EnumSet_EnumSetIterator::getClass0()
{
    return class_();
}

