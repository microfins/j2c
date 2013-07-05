// Generated from /runtime/java/util/EnumSet.java
#include <java/util/EnumSet.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Iterable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/BitSet.hpp>
#include <java/util/EnumSet_EnumSetIterator.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
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

java::util::EnumSet::EnumSet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::EnumSet::EnumSet(int32_t size, ::java::lang::Class* type) 
    : EnumSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(size,type);
}

void java::util::EnumSet::ctor(int32_t size, ::java::lang::Class* type)
{
    super::ctor();
    bitset = new BitSet(size);
    elementType = type;
}

bool java::util::EnumSet::add(::java::lang::Enum* element)
{
    auto index = npc(element)->ordinal();
    auto contains = npc(bitset)->get(index);
    if(!contains) {
        npc(bitset)->set(index);
    }
    return !contains;
}

bool java::util::EnumSet::add(::java::lang::Object* element)
{ 
    return add(dynamic_cast< ::java::lang::Enum* >(element));
}

bool java::util::EnumSet::remove(::java::lang::Object* toRemove)
{
    auto element = java_cast< ::java::lang::Enum* >(tryToCast(toRemove));
    auto index = npc(element)->ordinal();
    auto contains = npc(bitset)->get(index);
    if(contains) {
        npc(bitset)->clear(index);
    }
    return contains;
}

bool java::util::EnumSet::contains(::java::lang::Object* toCheck)
{
    auto element = java_cast< ::java::lang::Enum* >(tryToCast(toCheck));
    auto index = npc(element)->ordinal();
    return npc(bitset)->get(index);
}

int32_t java::util::EnumSet::size()
{
    return npc(bitset)->cardinality();
}

java::util::Iterator* java::util::EnumSet::iterator()
{
    return new EnumSet_EnumSetIterator(this);
}

/* <T extends Enum<T>> */java::util::EnumSet* java::util::EnumSet::allOf(::java::lang::Class* elementType)
{
    clinit();
    auto enumSet = createEmptyEnumSet(elementType);
    npc(npc(enumSet)->bitset)->set(0, npc(java_cast< ::java::lang::EnumArray* >(npc(elementType)->getEnumConstants()))->length);
    return enumSet;
}

/* <T extends Enum<T>> */java::util::EnumSet* java::util::EnumSet::noneOf(::java::lang::Class* elementType)
{
    clinit();
    return createEmptyEnumSet(elementType);
}

/* <T extends Enum<T>> */java::util::EnumSet* java::util::EnumSet::of(::java::lang::Enum* first, ::java::lang::EnumArray*/*...*/ rest)
{
    clinit();
    auto enumSet = createEmptyEnumSet(npc(first)->getDeclaringClass());
    npc(enumSet)->add(static_cast< ::java::lang::Enum* >(first));
    addAllElementsToSet(Arrays::asList(rest), enumSet);
    return enumSet;
}

/* <T extends Enum<T>> */java::util::EnumSet* java::util::EnumSet::complementOf(EnumSet* s)
{
    clinit();
    auto enumSet = copyOf(s);
    npc(npc(enumSet)->bitset)->flip(0, npc(java_cast< ::java::lang::EnumArray* >(npc(npc(s)->elementType)->getEnumConstants()))->length);
    return enumSet;
}

/* <T extends Enum<T>> */java::util::EnumSet* java::util::EnumSet::copyOf(EnumSet* s)
{
    clinit();
    auto enumSet = createEmptyEnumSet(npc(s)->elementType);
    npc(npc(enumSet)->bitset)->or_(npc(s)->bitset);
    return enumSet;
}

/* <T extends Enum<T>> */java::util::EnumSet* java::util::EnumSet::createEmptyEnumSet(::java::lang::Class* elementType)
{
    clinit();
    auto constants = java_cast< ::java::lang::EnumArray* >(npc(elementType)->getEnumConstants());
    auto enumSet = new EnumSet(npc(constants)->length, elementType);
    return enumSet;
}

/* <T extends Enum<T>> */void java::util::EnumSet::addAllElementsToSet(::java::lang::Iterable* elements, EnumSet* enumSet)
{
    clinit();
    for (auto _i = npc(elements)->iterator(); _i->hasNext(); ) {
        ::java::lang::Enum* element = java_cast< ::java::lang::Enum* >(_i->next());
        {
            npc(enumSet)->add(static_cast< ::java::lang::Enum* >(element));
        }
    }
}

java::lang::Enum* java::util::EnumSet::tryToCast(::java::lang::Object* object) /* throws(ClassCastException) */
{
    return java_cast< ::java::lang::Enum* >(object);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::EnumSet::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.EnumSet", 17);
    return c;
}

java::lang::Class* java::util::EnumSet::getClass0()
{
    return class_();
}

